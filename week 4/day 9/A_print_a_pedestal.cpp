#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,y,z;
        int n;cin>>n;
        for(int i=1;i<n;i++)
        {
            y=i;
            int rem=n-y;
 
            ///check baki number ki even ki na
            if(rem%2==0){
                x=1+(rem/2);
            }
            ///jodi odd hoy tahole ceil nibo
            else{
                x=(rem+1)/2;
            }
            z=n-y-x;
 
            if(x>0 && y>0 && z>0 && x<y && x>z){
                break;///we find our sequence
            }
        }
        cout<<x<<" "<<y<<" "<<z<<endl;
    }
    return 0;
}