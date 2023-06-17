// #include<bits/stdc++.h>
// using namespace std;


// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);
    
//     int n,k;  cin>>n>>k;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
    
//     int sum=0,i=0,j=0,ans=0;
//     while(j<n)
//     {
//         sum+=a[j];
//         /*
//             if sum is greater then k then remove left 
//             most element untill (sum >=k)
//         */
//         if(sum>k){
//             while(sum>k){
//                 sum-=a[i];
//                 i++;
//             }
//         }
//         /*
//             if sum==k then update ans
//             (j-i+1) it give the sub array element
//             how many element in the subarray
//         */
//         if(sum==k){
//             ans=max(ans,j-i+1);
//             //cout<<ans<<endl;
            
//         }
//         j++;
//     }
//     cout<<ans<<endl;
//     return 0;
// }
int longestSubarrayWithSumK(vector<int> a, long long k) {
    int i=0,j=0;
    int n=a.size();
    long long sum=0;
    int ans=0;
    while(j<n)
    {
        sum+=a[j];
        
        if(sum>k){
            while(sum>k){
                sum-=a[i];
                i++;
            }
        }
        if(sum==k){
            ans=max(ans,j-i+1);
        }
        j++;
    }
    return ans;
}