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
        int diff[n];
        diff[0]=abs(a[1]-a[0]);
        diff[n-1]=abs(a[n-1]-a[n-2]);

        for(int i=1;i<=n-2;i++){
            int d1=abs(a[i+1]-a[i]);
            int d2=abs(a[i]-a[i-1]);
            diff[i]=max(d1,d2);
        }
        int *ans=min_element(diff,diff+n);
        cout<<*ans<<endl;
    }

    return 0;
}