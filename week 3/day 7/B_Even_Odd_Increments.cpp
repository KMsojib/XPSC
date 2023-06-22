#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        long long O=0,E=0,sumO=0,sumE=0;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                sumE+=a[i];
                E++;
            }
            else
            {
                sumO+=a[i];
                O++;
            }
        }
        while(q--)
        {
            int type,val;
            cin>>type>>val;

            if(type)
            {
                //ODD+EVEN=ODD
                if(val%2==0)
                {
                    sumO+=(val*O);
                }

                //ODD+ODD=EVEN
                else
                {
                    sumE+=(sumO+val*O);
                    //odd+odd==even then all elements now even
                    E+=O;
                    O=0;
                    sumO=0;
                }
            }
            else
            {
                if(val%2==0)
                {
                    //Even+Even==Even
                    sumE+=(val*E);
                }
                else
                {
                    //odd+Even==ODD
                    sumO+=(sumE+val*E);
                    O+=E;
                    E=0;
                    sumE=0;
                }
            }
            cout<<sumE+sumO<<endl;
        }
    }
    return 0;
}