#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long n; cin>>n;
        long long Ncn=0, Tsum=0,i=0,a[n];
        
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        for(i=0;i<n;i++)
        {
            if(a[i]<0)
            {
                Ncn++;
                while(i<n && a[i]<=0)
                {
                    a[i]=(-1)*a[i];
                    Tsum+=a[i];
                    i++;
                }
                i--;
                
            }
            else{
                Tsum+=a[i];
            }
        }
        cout<<Tsum<<" "<<Ncn<<endl;
    }

    return 0;
}