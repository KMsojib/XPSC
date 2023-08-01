/*
    Creator:
    Name: MD.Kawsar Mahmud
*/
//https://codeforces.com/problemset/problem/1807/C

#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;      cin>>n;
    string s;   cin>>s;

    bool flag = true;
    set<char>odd,even;

    for(int i=0;i<n;i++){
        if(i%2 == 1){
            odd.insert(s[i]);
        }
        else{
            even.insert(s[i]);
        }
    }

    for(auto a : odd){
        auto it = even.find(a);
            if(it != even.end()){
            flag = false;
            break;
            }
        }
    if(flag == false){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    for(;t--;)
    {
        solve();
    }

    return 0;
}