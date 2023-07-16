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

// bool is_ap_here(vector<int>seq, int n){
//     unordered_set<int>ap(seq.begin(),seq.end());
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             int dif=seq[j]-seq[i];
//             if(ap.find(seq[j]+dif)!=ap.end()){
//                 return false;
//             }
//         }
//     }
//     return true;
// }
bool is_ap_here(vector<int>seq, int n){
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(seq[j]-seq[i] == seq[k]-seq[j]){
                    return false;
                }
            }
        }
    }
    return true;
}

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
        //bool ok=is_ap_here(a,n);
        if(is_ap_here(a,n)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }

    return 0;
}