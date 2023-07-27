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
      int n;    cin>>n;
      vector<int>a(n);
      int mini=INT_MAX;
      for(int i=0;i<n;i++){
        cin>>a[i];
        mini=min(mini,a[i]);
      }

        int cn=0;
      for(int i=0;i<n;i++){
        if(a[i] == mini){
            cn++;
        }
      }

      cout<<n-cn<<endl;
    }

    return 0;
}