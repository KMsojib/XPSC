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
        int zero=0,non_zero=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i] == 0){
                zero++;
            }
        }
        non_zero=n-zero;
        int res=0;
        if(zero == 0){
            res=0;
        }
        else{
            if(non_zero>=zero-1){
                res=0;
            }else{
                int maxi=*max_element(a.begin(),a.end());
                if(maxi == 1){
                    res=2;
                }else{
                    res=1;
                }
            }
        }
        cout<<res<<endl;
    }

    return 0;
}