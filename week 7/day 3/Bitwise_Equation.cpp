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
        if(n == 0)cout<<4<<" "<<6<<" "<<3<<" "<<7<<"\n";
        else{
            int a=1,b=2,c=0,d=0;
            for(ll i=3;i<=1000000;i++){
                int temp=n^i;
                if(i == temp || temp<=2){
                    continue;
                }
                else{
                    c = i;
                    d = temp;
                    break;
                }
            }
        if(c==0){
            cout<<-1<<endl;
        }else{
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        }
        }
    }

    return 0;
}