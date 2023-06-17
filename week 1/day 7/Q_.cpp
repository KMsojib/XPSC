#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    getline(cin,s);
    string word;
    int l=0,r=0;
    string ans="";
    while(l<s.size()){
        while (r<s.size() && s[r]!=' ')
        {
            r++;
        }
        reverse(s.begin()+l, s.begin()+r);
        l=r+1;
        r=l;
    }
    cout<<s<<endl;
    return 0;
}