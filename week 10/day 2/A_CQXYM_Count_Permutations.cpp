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
        ll n,h;
       cin>>n>>h;
       ll ar[n+2];
       for(int i=0;i<n;i++)cin>>ar[i];
       sort(ar,ar+n);
 
       ll sum=ar[n-1]+ar[n-2];
 
       if(h<=ar[n-1])cout<<1<<endl;
       else if(h<=sum)cout<<2<<endl;
       else{
           if(h%sum==0)cout<<(h/sum)*2<<endl;
           else
           {
               ll ans=(h/sum)*2;
               if(h%sum>ar[n-1])ans+=2;
               else ans++;
               cout<<ans<<endl;
           }
       }
    }

    return 0;
}