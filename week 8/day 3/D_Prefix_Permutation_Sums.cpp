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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll total=(n*(n+1)/2);
        if(a[n-2]>total){
            cout<<"NO"<<endl;
            continue;
        }

        if(a[n-2]!= total){
            a[n-1]=total;
            vector<ll>arr;
            for(int i=n-2;i>=0;i--){
                arr.push_back(a[i+1]-a[i]);
            }
            arr.push_back(a[0]);
            bool ok=true;
            vector<bool> visited(n+1,false);
            vector<ll> sums;
            for(int i=0;i<=n-2;i++){
            if(i==0){
                sums.push_back(a[i]);
                if(a[i]<=n){
                visited[a[i]]=true;
                }
            }
            else{
                sums.push_back(a[i]-a[i-1]);
                if(a[i]-a[i-1]<=n){
                visited[a[i]-a[i-1]]=true;
                }
            }
         }
 
        vector<ll> missing;
        for(int i=1;i<=n;i++){
            if(!visited[i]){
                missing.push_back(i);
            }
        }
 
        if(missing.size()!=2){
            cout<<"NO"<<endl;
            continue;
        }
 
        bool ok=false;
 
        for(auto i:sums){
            if(missing[0]+missing[1]==i){
                ok=true;
                break;
            }
        }
 
        if(ok){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}