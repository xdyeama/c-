#include <iostream>

using namespace std;


long long f(long long x){
	static long long a = 1;
	for(long long i=1; i<=x; i++){
		a*=x;
	}
	return a;
}

int main() {
	long long n;
    cin>>n;
    for(long long i=0; i<=n; i++){
    	cout<<f(i)<<" ";
	}
}
