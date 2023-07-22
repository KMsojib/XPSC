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
        vector<int>a(n+1,0);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int l;
            cin>>l;
            if(l<=n){
                mp[l]++;
            }
        }
        for(int i=1;i<=n;i++){
            if(mp[i] == 0){
                continue;
            }
            for(int j=i;j<=n;j+=i){
                a[j]+=mp[i];
            }
        }
        
        cout<<*max_element(a.begin(),a.end())<<endl;
         mp.clear();
    }

    return 0;
}