#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string ans="1999";
    while (true)
    {
        /* code */
        string s; cin>>s;
        if(s!=ans){
            cout<<"Wrong"<<endl;
        }
        if(s==ans){
            cout<<"Correct"<<endl;
            break;
        }
    }
    
    return 0;
}