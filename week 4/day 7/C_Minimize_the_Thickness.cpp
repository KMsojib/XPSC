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
        int n;  cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long sum=0;
        for(auto x: a){
            sum+=x;
        }

        int temp=0,count=0,len=n;
        for(int i=0;i<n;i++)
        {
            temp+=a[i];
            count++;
            int temp_maxo=0;
            if(sum%temp==0)
            {
                temp_maxo=count;
                int temp_sum=0,temp_cn=0;
                for(int j=i+1;j<n;j++)
                {
                    temp_sum+=a[j];
                    temp_cn++;
                    if(temp_sum==temp)
                    {
                        temp_maxo=max(temp_maxo,temp_cn);
                        temp_sum=0;
                        temp_cn=0;
                    }
                }
                if(temp_sum==0)
                {
                    len=min(len,temp_maxo);
                }
            }
        }
        cout<<len<<endl;
    }
    
    return 0;
}
