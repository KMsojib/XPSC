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
    string s;   cin>>s;
    int day=0,month=0;
    day = (s[0]-'0') * 10 + s[1]-'0';
    month = (s[3]-'0') * 10 + s[4]-'0';
    if(day > 12){
        cout<<"DD/MM/YYYY\n";
    }
    else if(month>12){
        cout<<"MM/DD/YYYY\n";
    }
    else{
        cout<<"BOTH"<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while(t--){
        // string s;   cin>>s;
        // string day="";
        // string mon="";
        // for(int i=0;i<2;i++){
        //     day+=s[i];
        // }
        // for(int i=3;i<5;i++){
        //     mon+=s[i];
        // }
        // int d=0;
        // int m=0;

        // d = stoi(day);
        // m = stoi(mon);
        // // cout<<d<<" "<<m<<endl;
        // if(d>12 && m<12){
        //     cout<<"DD/MM/YYYY"<<endl;
        // }
        // else if(d<12 && m<12){
        //     cout<<"BOTH"<<endl;
        // }else{
        //     cout<<"MM/DD/YYYY"<<endl;
        // }
        solve();
    }

    return 0;
}
/*
21/05/2001
        if21>12 DD/MM/YYYY
else if (4,5) >12    10/15/2069     MM/DD/YYYY
else BOTH

*/