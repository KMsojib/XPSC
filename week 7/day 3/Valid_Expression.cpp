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
        int lim=0;
        if(k<0){
            lim=n-1;
        }else{
            lim=n+1;
        }
        if(abs(k)>lim){
            cout<<"-1"<<endl;
        }else{
            if(k<=0){
                int cn=1;
                while (n--)
                {
                    /* code */
                    if(cn==k){
                        cout<<"*";
                    }else{
                        cout<<"-";
                        cn--;
                    }
                }
                
            }
            else{
                int cn=1;
                while (n--)
                {
                    /* code */
                    if(cn==k){
                        cout<<"*";
                    }else{
                        cout<<"+";
                        cn++;
                    }
                }
                
            }
            cout<<endl;
        }
    }

    return 0;
}