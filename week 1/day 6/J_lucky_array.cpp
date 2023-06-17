//don't solve

#include<bits/stdc++.h>
using namespace std;
const int n=10e5;
int freq[n];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;     cin>>n;
    int a[n];

    int M=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        M=max(M,a[i]);
        freq[a[i]]++;
    }
    int cn=0;
    for(int i=1;i<=M;i++){
        cn=min(cn,freq[i]);
    }
    if(cn%2!=0){
        cout<<"Lucky"<<endl;
    }
    else{
        cout<<"Unlucky"<<endl;
    }
    return 0;
}