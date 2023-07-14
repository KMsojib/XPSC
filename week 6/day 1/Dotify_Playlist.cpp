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

    ll t;  cin>>t;
    while(t--){
        int n,k,l;  cin>>n>>k>>l;
        multiset<int, greater<ll>>a;
        for(int i=0;i<n;i++){
            ll x,y;
            cin>>x>>y;
            if(y==l){
                a.insert(x);
            }
        }
        ll cn=k,ans=0;
        for(auto it : a){
            if(cn==0){
                break;
            }
            ans+=it;
            cn--;
        }

        if(cn==0){
            cout<<ans<<endl;
        }else{
            cout<<-1<<endl;
        }       
    }

    return 0;
}