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
        int c=1,d=2,e=n*n;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                if(c<=e){
                    cout<<c<<" ";
                    c+=2;
                }
                else{
                    cout<<d<<" ";
                    d+=2;
                }
            }
            cout<<endl;
        }
    }

    return 0;
}