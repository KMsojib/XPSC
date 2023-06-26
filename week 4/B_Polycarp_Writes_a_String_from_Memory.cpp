/*
    Creator:
        MD.Kawsar Mahmud
        kawsarmahmud822@gmail.com

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        int ans=0;
        set<char>a;
        for(int i=0;i<s.size();i++)
        {
            a.insert(s[i]);
            if(a.size()>3)
            {
                ans++;
                a.clear();
                a.insert(s[i]);
            }
        }
        if(!a.empty())ans++;
        cout<<ans<<endl;
    }

    return 0;
}
/*
    Explanation:
    stringology

    set->(str)
    if(size()>3) ans++; so ans=1
    set.clear()
    set-->(empty)

    ingology
    set->(ing)
    if(size>3)ans++; so ans=1+1
    set.clear()
    set-->(empty)

    ology
    set->(olg)//set igonore repeat character
    if(size>3)ans++; so ans=1+1+1;
    set.clear()
    set-->empty()

    y 
    set->(y)
    so size now not greater then 3
    so we calculate that the remaining string ch as a remind the next day
    so, ans=1+1+1+1
    final ans = 4



*/