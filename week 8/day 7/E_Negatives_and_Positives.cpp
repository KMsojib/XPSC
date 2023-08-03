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
        ll n;  cin>>n;
        vector<ll>a(n);
        ll neg=0,sum=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<0){
                neg++;
                a[i]=-a[i];
            }
            sum+=a[i];
        }
        sort(a.begin(),a.end());
        if(neg & 1){
            sum-=2*a[0];
        }
        cout<<sum<<endl;
    }

    return 0;
}