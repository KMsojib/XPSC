#include<bits/stdc++.h>
using namespace std;

long long solve()
{
    long long n,m;
        cin>>n>>m;
        long long max_move=0;
        vector<vector<long long>> a(n,vector<long long>(m,0));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        //traverse the grid
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                long long crn_s=0;
                //initial bishop
                crn_s+=a[i][j];
                long long idx1=i-1,idx2=j-1;
                while(idx1>=0 && idx2>=0){
                    crn_s+=a[idx1][idx2];
                    idx1--;
                    idx2--;
                }
                idx1=i-1;
                idx2=j+1;
                while(idx1>=0 && idx2<m){
                    crn_s+=a[idx1][idx2];
                    idx1--;
                    idx2++;
                }
                idx1=i+1;
                idx2=j-1;
                while(idx1<n && idx2>=0){
                    crn_s+=a[idx1][idx2];
                    idx1++;
                    idx2--;
                }
                idx1=i+1;
                idx2=j+1;
                while(idx1<n && idx2<m){
                    crn_s+=a[idx1][idx2];
                    idx1++;
                    idx2++;
                }
                max_move=max(max_move,crn_s);
                ///cout<<max_move<<" "<<crn_s<<endl;
            }
        }
        cout<<max_move<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
