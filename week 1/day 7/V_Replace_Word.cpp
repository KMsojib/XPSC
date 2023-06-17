#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;
    int len=s.size();
    for(int i=0;i<len;i++){
        if(s[i]=='E' && s[i+1]=='G' && s[i+2]=='Y'
                && s[i+3]=='P' && s[i+4]=='T'){
            i+=4;
            cout<<" ";
        }
        else{
            cout<<s[i];
        }
    }
    return 0;
}