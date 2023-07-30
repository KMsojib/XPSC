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
        int n,k;    cin>>n>>k;
        if(k>30){
            cout<<"0"<<endl;
            continue;
        }
        int ans=0;
        for(int i=0;i<=n;i++){
            int second=n;
            int first=i;
            bool ok=true;

            for(int j=1;j<=k-2;j++){
                int temp=second-first;
                second=first;
                first=temp;

                if(first<=second && first>-1){
                    continue;
                }else{
                    ok=false;
                    break;
                }
            }
            if(ok){
                ans++;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}