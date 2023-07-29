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

bool compare(pair<int,int>a, pair<int,int>b)
{
    if(a.first < b.first){
        return false;
    }
    else if(a.first > b.first){
        return true;
    }
    return a.second < b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while(t--){
        int n,k;    cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            a[i]%=k;
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(a[i] == 0){
                ans.push_back(i+1);
            }
        }

        vector<pair<int,int>>l(n);
        for(int i=0;i<n;i++){
            l.push_back({a[i],i+1});
        }

        sort(l.begin(),l.end(),compare);
        for(auto i : l){
            if(i.first != 0){
                ans.push_back(i.second);
            }
        }
        for(auto f : ans){
            cout<<f<<" ";
        }
        cout<<endl;
    }

    return 0;
}