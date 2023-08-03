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
        string a;   cin>>a;

        vector<int> pref(n,0),suff(n,0);
        set<char> s;
        for(int i=0;i<n;i++){
            s.insert(a[i]);
            pref[i]=s.size();
        }
        s.clear();
        for(int i=n-1;i>-1;i--){
            s.insert(a[i]);
            suff[i]=s.size();
        }
        int ans=0;
        for(int i=0;i<n-1;i++){
            ans=max(ans,pref[i]+suff[i+1]);
        }
        cout<<ans<<endl;
        
    }

    return 0;
}