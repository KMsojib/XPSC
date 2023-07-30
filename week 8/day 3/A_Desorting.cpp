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
        ll n;  cin>>n;
        vector<ll>a(n),b(n);
        for(int i=0; i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        bool f= false;
        sort(b.begin(),b.end());
        for(ll i=0;i<n;i++){
            if(a[i]!=b[i]){
                f=true;
                break;
            }
        }
        if(f){
            cout<<"0"<<endl;
        }
        else{
            ll ans=0;
            ll index=0;
            ll musu = INT_MAX;
            for(ll i=0;i<n-1;i++){
                if(a[i+1]-a[i] < musu){
                    musu = a[i+1]-a[i];
                    index=i;
                }
            }
            ans=(a[index+1]-a[index])/2;
            cout<<ans+1<<endl;
        }
            
    }
 
    return 0;
}