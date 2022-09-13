#include <iostream>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

void error(string message)
{
    throw runtime_error(message);
}
class Token
{
public:
    char kind;
    double value;
};

class Token_stream
{
public:
    // user Interface
    Token get();
    void putback(Token t);

private: // implelementation details, not directly accessible to users of Token_stream
    bool full{false};
    Token buffer;
};

void Token_stream::putback(Token t)
{
    if (full)
        error("putback() into the full buffer");
    buffer = t;
    full = true;
}

Token Token_stream::get()
{
    if (full)
    {
        full = false;
        return buffer;
    }
    char ch;
    cin >> ch;
    switch (ch)
    {
    case ';':
    case 'q':
    case '(':
    case ')':
    case '+':
    case '-':
    case '*':
    case '/':
    {
        return Token{ch};
    }

    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    {
        cin.putback(ch); // put digit back into input stream
        double val;
        cin >> val;
        return Token{'8', val};
    }
    default:
        error("Bad Token");
    }
}

Token_stream ts;
Token t;
double expression();

double primary()
{
    Token token = ts.get();
    const char number = '8'; // t.kind==number means that t is a number Token
    switch (token.kind)
    {
    case '(':
    {
        double d = expression();
        token = ts.get();
        if (token.kind != ')')
            error("')' exprected");
        return d;
    }
    case number:
        return token.value;
    case '-':
        return -primary();
    case '+':
        return primary();
    default:
        error("primary expected");
    }
}

double term()
{
    double left = primary();
    Token token = ts.get();
    while (true)
    {
        switch (token.kind)
        {
        case '*':
            /* code */
            left *= primary();
            token = ts.get();
            break;
        case '/':
        {
            double d = primary();
            if (d == 0)
                error("Cant divide by zero");
            left /= d;
            token = ts.get();
            break;
        }
        case '%':
        {
            int i1 = narrow_cast<int>(left);
        }
        default:
            return left;
        }
    }
};

double expression()
{

    double left = expression();
    Token token = ts.get();
    while (true)
    {
        switch (token.kind)
        {
        case '+':
            left += term();
            token = ts.get();
            break;
        case '-':
            left -= term();
            token = ts.get();
            break;
        default:
            return left;
        }
    }
};

vector<Token> tokens;

int main()
{
    const char quit = 'q';
    const char print = ';';
    try
    {
        double val = 0;
        while (cin)
        {
            cout << ">";
            Token t = ts.get();
            if (t.kind == quit)
            {
                return 0;
            }
            if (t.kind == print)
            {
                cout << "=" << val << "\n";
            }
            else
            {
                ts.putback(t);
            }
            val = expression();
        }
    }
    catch (runtime_error &e)
    {
        cerr << e.what() << '\n';
        // keep_window_open():
        cout << "Please enter the character ~ to close the window\n";
        for (char ch; cin >> ch;) // keep reading until we find a ~
            if (ch == '~')
                return 1;
        return 1;
    }
    catch (...)
    {
        cerr << "exception" << endl;
        return 2;
    }
}