#include <iostream>
using namespace std;

int countDigit(long long n)
{
    if (n/10 == 0)
        return 1;
    else{
        return 1 + countDigit(n / 10);
    }    
}

int main() {
	int t;cin>>t;
	while(t--)
	{
	    int n,x;    cin>>n>>x;
	    long long mul=n*x;
        int ans=0;
        ans+=countDigit(mul);
        if(ans==5){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
/*
4
25 785
402 11
100 100
333 333*/
