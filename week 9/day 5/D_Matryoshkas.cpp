/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/

// #include<bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>
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
        vector<ll>a(n);
        map<ll,ll>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        sort(a.begin(), a.end());
        // for(int i=0;i<n;i++){
        //     cout<<a[i]<<" ";
        // }
        // cout<<endl;
        // for(auto it = mp.begin();it!=mp.end();it++){
        //     cout<<it->first<<" ";
        // }
        ll ans=0;
        for(int i=0;i<n;i++){
            ll val=a[i];
            if(mp[a[i]]!=0){
                ans++;
                while(mp[val]>0){
                    mp[val]--;
                    val++;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}