#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);

        int t_sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            t_sum+=a[i];
        }
        //base case
        if(t_sum==n){
            cout<<"0"<<endl;
        }
        //if total sum less then n
        else if(t_sum<n){
            cout<<"1"<<endl;
        }
        else{
            cout<<t_sum-n<<endl;
        }
    }
    return 0;
}