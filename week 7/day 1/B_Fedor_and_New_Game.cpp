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

        int n,m,k;  cin>>n>>m>>k;
        int a[m+1];
        for(int i=0;i<=m;i++){
            cin>>a[i];
        }
        int ans=0;
        for(int i=0;i<m;i++){
            if(__builtin_popcount(a[i] ^ a[m])<=k){
                ans++;
            }
        }
        cout<<ans<<endl;
    return 0;
}