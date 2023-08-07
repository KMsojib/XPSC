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
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        if(n%2){
            cout<<-1<<endl;
            continue;
        }
        else{
            int j=1;
            for(int i=n;i>0;i--){
                if(i&1){
                    cout<<j<<" ";
                    j+=2;
                }
                else{
                    cout<<i<<" ";
                }
            }
            cout<<endl;
        }
    }

    return 0;
}