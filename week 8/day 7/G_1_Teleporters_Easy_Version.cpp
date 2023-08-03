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
        int n,c;  cin>>n>>c;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++){
            int x;
            cin>>x;
            a[i]=i+x;
        }
        int ans=0,tot=0;
        sort(a.begin(),a.end());
        for(int i=1;i<=n;i++){
            if(tot+a[i]>c){
                break;
            }
            else{
                tot+=a[i];
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}