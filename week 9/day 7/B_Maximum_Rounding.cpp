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

void solve()
{
        ll k=0;
        string n; cin>>n;
        ll l=n.length();    n='0'+n;
        reverse(n.begin(), n.end());
        for(ll i=0; i<l; i++)
        {
            if(n[i]>='5')
            {
                n[i+1]++;
                for(ll j=i; j>=k; j--)
                {
                    n[j]='0';
                }
                k=i;
            }
        }
        reverse(n.begin(), n.end());//reverese
        //or
        if(n[0]=='0')
        {
          for(ll i=1; i<=l; i++)
          {
              cout<<n[i];
          }
          cout<<endl;
    }
    //either
    else
    {
      for(ll i=0; i<=l; i++)
          {
              cout<<n[i];
          }
          cout<<endl;
    }
      
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t; cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}