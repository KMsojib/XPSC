#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool flag=true;
        if(s.length()%2==0)
        {
            for(int i=0; i<(s.length()/2); i++)
            {
                if(s[i]!=s[(s.length()/2)+i])
                {
                    flag=false;
                }
            }
        }
        else
        {
            flag=false;
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}