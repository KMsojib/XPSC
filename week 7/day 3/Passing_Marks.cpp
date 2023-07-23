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
        int n,k;    cin>>n>>k;
        vector<int>a(n);
        int ans=0,f=k;
        for(int i=0;i<n;i++)    cin>>a[i];
        sort(a.begin(),a.end(),greater<int>());
        //for(int i=0;i<n;i++)    cout<<a[i]<<" ";
        for(int i=0;i<n;i++){
            f--;
            if(f==0){
                ans=a[k-1]-1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}