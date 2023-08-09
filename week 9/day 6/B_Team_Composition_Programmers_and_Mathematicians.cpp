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
        int a,b;    cin>>a>>b;
        int d=min(min(a,b),(a+b)/4);
        cout<<d<<endl;
    }

    return 0;
}
/*
TLE:

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while (t--)
    {
        int a,b;    cin>>a>>b;
        int c=0;
        if(a==0 && b==0){
            cout<<"0\n";
            continue;
        }
        if(a>4 && b<4){
            cout<<b<<endl;
            continue;
        }
        if(a<4 && b>4){
            cout<<a<<endl;
            continue;
        }
        while (true){
            if(a>b){
                a-=3;
                b-=1;
                c++;
            }
            if(b>a){
                b-=3;
                a-=1;
                c++;
            }
            if(a==b){
                a-=2;
                b-=2;
                c++;
            }
            if(a+b<=3){
                break;
            }
        }
        cout<<c<<endl;
    }
    
    return 0;
}
*/