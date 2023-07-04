#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{
 
    int t;  cin>>t;
    for(;t--;)
    {
        int n;  cin>>n;
        vector<int>a;
        for(int i=9;i>=1;i--)
        {
            if(n==0){
                break;
            }
            if(n<i){
                a.push_back(n);
                break;
            }
            else{
                a.push_back(i);
                n-=i;
            }
        }
        for(int i=a.size()-1;i>=0;i--){
            cout<<a[i];
        }
        cout<<"\n";
    }
    
    return 0;
}