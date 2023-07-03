#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test;   cin>>test;
    while (test--)
    {
        /* code */
        int a,b,c;  cin>>a>>b>>c;
        int ans1=abs(a-1);
        int ans2=abs(b-c)+abs(c-1);

        if(ans1==ans2){
            cout<<"3"<<endl;
        }else if(ans1<ans2){
            cout<<"1"<<endl;
        }else{
            cout<<"2"<<endl;
        }
    }
    
    return 0;
}