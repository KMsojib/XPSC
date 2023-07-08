/*
    Creator:
        MD.Kawsar Mahmud
        kawsarmahmud822@gmail.com

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    for(;t--;)
    {
        int b1,b2,b3,b4,b5,b6,b7;
        cin>>b1>>b2>>b3>>b4>>b5>>b6>>b7;

        int a1=b1;
        int a2=b2;
        int a3=b7-a1-a2;

        cout<<a1<<" "<<a2<<" "<<a3<<endl;
    }
    return 0;
}