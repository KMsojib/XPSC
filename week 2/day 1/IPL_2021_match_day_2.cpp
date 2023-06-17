#include<bits/stdc++.h>
using namespace std;

/*
    *we use dequeue for maximum element for particular sub array
    int O(1)
*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,k;    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=0,j=0,mx=0;
    vector<int>ans;
    while(j<n)
    {
        if(j<k){
            mx=max(mx,a[j]);
            j++;
        }
        else{
            //ans.push_back(mx);
            mx=max(mx,a[j]);
            //ans.push_back(mx);
            ///cout<<mx<<" ";
            i++;
            j++;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}