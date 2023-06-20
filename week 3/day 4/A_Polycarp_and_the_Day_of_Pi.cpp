#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int t;
    cin>>t;
    while(t--)
    {
        string pi="314159265358979323846264338327";
        string s;
        cin>>s;
        int counter=0;
        for(int i=0;i<30;i++)
        {
            if(s[i]==pi[i])
            {
                counter++;
            }
            else
            {
                break;
            }
        }
        cout<<counter<<endl;
    }
    return 0;
}
