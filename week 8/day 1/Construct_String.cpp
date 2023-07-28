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
        string ans="";
        int temp=1;
        char ch = s[0];
        for(int i=1;i<n;i++){
            if(ch == s[i]){
                temp++;
            }
            else{
                if(temp%2==0){
                    ans+=ch;
                    ans+=ch;
                }else{
                    ans+=ch;
                }
                temp=1;
                ch=s[i];
            }
        }
        if(temp%2==0){
            ans+=ch;
            ans+=ch;
        }else{
            ans+=ch;
        }
        cout<<ans<<endl;
    }

    return 0;
}