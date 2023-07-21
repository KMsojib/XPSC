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
        for(int i=0;i<n;i++)    cin>>a[i];
        int x=0;
        for(int i=0;i<n;i++){
            x^=a[i];
        }
        for(int i=0;i<n;i++){
            a[i]^=x;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans^=a[i];
        }
        if(ans==0){
            cout<<x<<endl;
        }else{
            cout<<"-1"<<endl;
        }
    }

    return 0;
}