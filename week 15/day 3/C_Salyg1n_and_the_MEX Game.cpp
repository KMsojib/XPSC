/*
||-----------------------------------||
||        MD.Kawsar Mahmud           ||
||-----------------------------------||
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;


void solve()
{
    int n;  cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int req=-1;
    for(int i=0;i<n;i++){
        if(a[i]>i){
            req=i;
            break;
        }
    }
    if(req==-1){
        req=n;
    }

    int bob_pic=INT_MAX;
    int tr=0;
    bool alice=true;
    while (true){
        if(tr>(2*n)+1 || bob_pic == -1){
            break;
        }
        if(alice){
            if(bob_pic<=req){
                cout<<bob_pic<<"\n";
                cout.flush();
            }
            else{
                cout<<req<<endl;
                cout.flush();
            }
        }
        else{
            cin>>bob_pic;
        }
        alice^=true;
    }
}

int main()
{
    int t;  cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
