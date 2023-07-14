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
        vector<int>a(3);
        int cn=0;
        for(int i=0;i<3;i++){
            cin>>a[i];
            if(a[i]==1){
                cn++;
            }
        }
        // if(cn>=2){
        //     cout<<"Not now"<<endl;
        // }else{
        //     cout<<"Water filling time"<<endl;
        // }
        if (!(a[0] & a[1]) & !(a[0] & a[2]) & !(a[1] & a[2]))
                 cout << "Water filling time" << '\n'; 
        else
                cout << "Not now" << '\n';
    }

    return 0;
}
/*
1 1 1
0 1 0
!(a&b)= 0 & 1 =0
!(a&c)=0 & 0 = 0
!(b&c)= 1 & 0 =0
if (!(a[0] & a[1]) & !(a[0] & a[2]) & !(a[1] & a[2]))
                 cout << "Water filling time" << '\n'; 
        else
                cout << "Not now" << '\n';

*/