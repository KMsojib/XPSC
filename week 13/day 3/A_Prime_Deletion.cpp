#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
#define in_range(a,b)    for(int i=a;i<b;i++)
#define read(x) int x; cin >> x
int main()
{
    fast_io;
    int t;  cin>>t;
    while(t--){
        string s;   cin>>s;
        if(s[0]=='1'){
            cout<<"13\n";
        }
        else if(s[0]=='2'){
            cout<<"29\n";
        }
        else if(s[0]=='3'){
            cout<<"31\n";
        }
        else if(s[0]=='4'){
            cout<<"41\n";
        }
        else if(s[0]=='5'){
            cout<<"53\n";
        }
        else if(s[0]=='6'){
            cout<<"61\n";
        }
        else if(s[0]=='7'){
            cout<<"71\n";
        }
        else if(s[0]=='8'){
            cout<<"83\n";
        }
        else{
            cout<<"97\n";
        }
    }

    return 0;
}