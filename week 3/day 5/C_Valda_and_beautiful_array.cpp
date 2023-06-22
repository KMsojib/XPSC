/*

    make odd=even-odd
    make even=odd-odd
*/

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
        int n;  cin>>n;
        vector<int>a(n);
        int oddnum=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2!=0){
                oddnum=min(oddnum,a[i]);
            }
        }
        bool make_even=true,make_odd=true;
        //for making odd number
        for(int i=0;i<n;i++){
            if((a[i]%2==0)&& (a[i]<=oddnum)){
                make_odd=false;
            }
        }
        //for making even number
        for(int i=0;i<n;i++){
            if((a[i]%2!=0)&& (a[i]<=oddnum)){
                make_even=false;
            }
        }
        if(make_odd || make_even){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
//Another solution
#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        if(a[0]%2==1){
            cout<<"YES"<<endl;
            return;
        }
        for(int i=0;i<n;i++){
            if(a[i]%2==1){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}