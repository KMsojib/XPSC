#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;	cin>>n>>k;
  	int m=0;
  	int a[n];
  	for(int i=0;i<n;i++){
      cin>>a[i];
    }
  for(int i=0;i<n;i++){
    if(a[i]==k){
        continue;
    }
    else{
        cout<<a[i]<<" ";
    }
  }
  return 0;
}