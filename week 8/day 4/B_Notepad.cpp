/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; 

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        string s;   cin>>s;
        bool f=false;
        unordered_map<string,ll>mp;
        string s1;
        for(int i=0;i<n-1;i++){
            s1=s[i];
            s1+=s[i+1];

            if(mp.find(s1) == mp.end()){
                mp[s1]=i;
            }
            else{
                if(mp[s1]!=i-1){
                    f=true;
                    break;
                }
            }
        }
        // for(auto it : mp){
        //     cout<<it.first<<" "<<it.second<<endl;
        // }
        if(f){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }

    return 0;
}