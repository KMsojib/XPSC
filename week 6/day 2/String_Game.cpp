//even hole jalaton ar odd hole ramos
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
        string s;   cin>>s;
        int zero=0,one=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                zero++;
            }else{
                one++;
            }
        }
        int ans=min(zero,one);
        if(ans%2==0){
            cout<<"Ramos\n";
        }else{
            cout<<"Zlatan\n";
        }
    }

    return 0;
}