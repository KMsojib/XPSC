#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;  cin>>t;
    for(int i=1;i<=t;i++){
        int n,k;    cin>>n>>k;
        string all="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string ans,flag;
        ans=all.substr(0,n);//to take n length string in all string

        flag=ans;//not repeat the string agian
        cout<<"Case "<<i<<":"<<"\n";
        for(int i=1;i<=k;i++){
            cout<<ans<<endl;
            next_permutation(ans.begin(),ans.end());//to genrated all permutation
            if(ans==flag){
                break;//it repeat again
            }
        }

    }
    
    return 0;
}