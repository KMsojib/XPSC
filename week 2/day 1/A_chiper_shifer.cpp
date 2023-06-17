/*
    Creator:
    Name: MD.Kawsar Mahmud
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);   

    int t;  cin>>t;
    while(t--)
    {
        int n;  cin>>n;
        string s,ans="";
        cin>>s;
        char ch=s[0];
        for(int i=1;i<n;i++){
            if(s[i]==ch){
                ans+=ch;
                ch=s[i+1];//point the next char
                i++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}