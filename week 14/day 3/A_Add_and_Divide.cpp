#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 +5;
typedef pair<int,int> pii;



void TEST_CASES()
{
    ll a,b,c,cnt=0,mn=1e9;
    cin>>a>>b;
    for(int i=0;i<100;i++,b++){
        cnt=0;
        c=a;
        if(b==1){
            continue;
        }
        while (c){
            c/=b;
            cnt++;
        }
        mn=min(mn,cnt+i);
    }
    cout<<mn<<endl;
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t=1;
    cin>>t;
    while(t--)
    {
        TEST_CASES();
    }
    return 0;
}
