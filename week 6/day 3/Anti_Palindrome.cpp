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
        
        vector<int>frq(27,0);
        for(int i=0;i<n;i++){
            frq[s[i]-96]++;
        }
        int odd=0,even=0;
        for(int i=1;i<27;i++){
            if(frq[i]%2!=0){
                odd++;
            }
            else if(frq[i]%2==0 && frq[i]>0){
                even++;
            }
        }
        if(odd>1 or (n%2==0 and odd==1)){
            cout<<0<<endl;
        }else if(n%2!=0 and odd==1 and even==0){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }
    }
    return 0;
}