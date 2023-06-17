#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;  cin>>n;
    while(true)
    {
        n++;
        int a=(n/1000);//first
        int b=(n/100)%10;//second 
        int c=(n/10)%10;///third
        int d=(n%10);//last

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            break;
        }
    }
    cout<<n<<endl;
    return 0;
}