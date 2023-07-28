#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    if(n<m)
	    {
	        cout<<0<<"\n";
	    }
	    else
	    {
	        int sum=n-m;
	        cout<<sum<<"\n";
	    }
	}
	return 0;
}