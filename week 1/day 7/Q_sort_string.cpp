#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int a[26]={0};
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch;
        cin>>ch;
        a[(int)ch-97]++;
    }
    for(int i=0;i<=25;i++){
        while(a[i]!=0){
            cout<<(char)(i+97);
            a[i]--;
        }
    }
    return 0;
}