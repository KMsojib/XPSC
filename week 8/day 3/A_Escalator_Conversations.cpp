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
        int n,m,k,H;
        cin>>n>>m>>k>>H;
        vector<int>a(n);
 
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int ans=0;
        
        for(int i=0;i<n;i++){
            bool f=false;
            for(int x=1;x<=m;x++){
                for(int y=x+1;y<=m;y++){
                    if(x==y)   continue;
                    int hdif=abs(a[i]-H);
                    int sdif=y-x;
                    sdif*=k;
                    if(sdif == hdif){
                        f=true;
                    }
                }
            }
            ans+=(f);
        }
        cout<<ans<<endl;
    }
 
    return 0;
}