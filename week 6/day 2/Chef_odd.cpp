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

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll odd=(n/2)+(n%2);// to find how many odd btw 1 to n
    ll xtra_odd=odd-k;
    if(n<2*k){
        cout<<"NO"<<endl;
    }
    else if(n==2*K){
        cout<<"YES"<<endl;
    }
    else{
        if(xtra_odd%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}