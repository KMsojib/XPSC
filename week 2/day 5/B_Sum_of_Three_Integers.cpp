#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int s,k;
    cin>>k>>s;
    int ans=0;
    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            int rem=s-i-j;
            //cout<<rem<<endl;
            if(rem>=0 && rem<=k){
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int s, k;
//     cin>>k >> s;
//     int ans=0;
//     for(int x=0; x<=k; ++x)
//     {
//         for(int y=0; y<=k;++y)
//         {
//             int z = s - x - y;
//             if(z>=0 && z<=k)
//             {
//                 ans++;
//             }
//         }
//     }
//     cout<<ans<<endl;
// }

