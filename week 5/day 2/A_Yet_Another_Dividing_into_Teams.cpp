#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;  cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // sort(a.begin(),a.end());
    // int i=0,j=1;
    // while (i<n or j<n)
    // {
    //     /* code */
    //     if(i==n or j==n){
    //         break;
    //     }
    //     int f=abs(a[i]-a[j]);
    //     if(f<=1){
    //         f=true;
    //         break;
    //     }
        
    //     i+=2;
    //     j+=2;
    // }
    bool ans=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            ans&=abs(a[i]-a[j])!=1;
        }
    }
    cout<<2-ans<<endl;
    /**
     * @brief
     * either it give 0 or 1
     * if the contdition if satisfy then it give 0 
     * if not then give 1 
     * so initially we deivide it two team then we just subtract the ans by 2
     * we find the ans
     */
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;  cin>>t;
    while (t--)
    {
        /* code */
        solve();
    }
    
    return 0;
}