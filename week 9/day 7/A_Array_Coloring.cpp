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
        int od = 0, ev = 0;
        for(int i = 0; i < n; i++){
            int x;  cin>>x;
            if(x & 1){
                od++;
            }
            else{
                ev++;
            }   
    }
        if((od % 2 == 0) && (ev > 0)){
            cout<< "YES"<< endl;
        }
        else if((od & 1) && (ev > 0)){
            cout<< "NO"<< endl;
        }
        else if((od <= 0) && (ev > 0)){
            cout<< "YES"<< endl;
        }
        else{
            if(od & 1){
                cout<< "NO"<< endl;
            }
            else{
                cout<< "YES"<< endl;
            }
        }
    }   
    return 0;
}