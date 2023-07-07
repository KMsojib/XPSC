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
        /* code */
        string s;   cin>>s;
        
        if((s.back()-'0')%2==0){
            cout<<'0'<<endl;
            continue;
        }
        if((s[0]-'0')%2==0){
            cout<<"1"<<endl;
            continue;
        }
        int cn_2=count(s.begin(),s.end(),'2');
        int cn_4=count(s.begin(),s.end(),'4');
        int cn_6=count(s.begin(),s.end(),'6');
        int cn_8=count(s.begin(),s.end(),'8');
        if(cn_2>0 or cn_4>0 or cn_6>0 or cn_8>0){
            cout<<"2"<<endl;
            continue;
        }
        cout<<"-1"<<endl;
    }
    
    return 0;
}