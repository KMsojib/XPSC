// #include<bits/stdc++.h>
// using namespace std;

// bool is_palindrome(string s)
// {
//     int l=0,r=4;
//     while(l<r)
//     {
//         if(s[l]!=s[r])return false;
//         l++,r++;
//     }
//     return true;
// }

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     int t;  cin>>t;
//     while(t--)
//     {
//         string s;   cin>>s;
//         int x;  cin>>x;

//         int h=x/60,m=x%60;
  
//         int ans=0;

//         map<string,bool>visited;

//         while(!visited[s])
//         {
//             ans+=(is_palindrome(s));
//             visited[s]=true;

//             int H=((s[0]-'0')*10)+(s[1]-'0');
//             int M=((s[3]-'0')*10)+(s[4]-'0');

//             M+=m;
//             if(M>59){
//                 H++;
//             }
//             M%=60;

//             H+=h;
//             H%=24;

//             s[0]=('0'+(H/10));
//             s[1]=('0'+(H%10));

//             s[3]=('0'+(M/10));
//             s[4]=('0'+(M%10));
//         }
//         cout<<ans<<endl;
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

bool is_palindrome(string s){
    int l=0,r=4;
    while(l<r){
        if(s[l]!=s[r])return false;
        l++,r--;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;                  cin>>t;
    while(t--){
        string s;           cin>>s;// h h : m m
        int x;              cin>>x;
 
        int h=x/60,m=x%60;
 
        int ans=0;
 
        map<string,bool>visited;
 
        while(!visited[s]){
            ans+=(is_palindrome(s));
            visited[s]=true;
 
            int hh=((s[0]-'0')*10)+(s[1]-'0');
            int mm=((s[3]-'0')*10)+(s[4]-'0');
 
            mm+=m;
            if(mm>59){
                hh++;
            }
            mm%=60;
 
            hh+=h;
            hh%=24;
 
            s[0]=('0'+(hh/10));
            s[1]=('0'+(hh%10));
 
            s[3]=('0'+(mm/10));
            s[4]=('0'+(mm%10));
        }
 
        cout<<ans<<endl;
    }
    return 0;
}