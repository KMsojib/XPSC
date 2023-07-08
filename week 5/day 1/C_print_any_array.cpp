#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    if(a%b==0){
        return b;
    }
    return gcd(b,a%b);
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
        long long n;     cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long g=0;
        //for odd value
        g=a[0];
        for(int i=2;i<n;i+=2){
            g=gcd(g,a[i]);
        
        }   
        if(g>1){
            bool f=false;
            for(int i=1;i<n;i+=2){
                if(a[i]%g==0){
                    f=true;
                    break;
                }
            }
            if(f==false){
                cout<<g<<endl;
                continue;
            }
        }
        //for even value
        g=a[1];
        for(int i=3;i<n;i+=2){
            g=gcd(g,a[i]);
        }

        if(g>1){
            bool f=false;
            for(int i=0;i<n;i+=2){
                if(a[i]%g==0){
                    f=true;
                    break;
                }
            }
            if(f==false){
                cout<<g<<endl;
                continue;
            }
        }
        cout<<0<<endl;
    }
    
    return 0;
}
