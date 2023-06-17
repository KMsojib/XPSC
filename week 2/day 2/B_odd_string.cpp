// /*
//     a t c o d e r
//     0 1 2 3 4 5 6

//     print the odd index character
//     so, 
//     first 0%2==0 so we handel this case and print it first
//     second we start traversign 1 because we already print 0 index
//     and we print odd index but we think that 0 is our odd index then even indext
//     if (0+1)==1 our odd
//     that means odd is our even index 
//     and even is our odd index
//     explanation:
//     a t c o d e r
//     1 2 3 4 5 6 7

//     a t c o d e r
//     0 1 2 3 4 5 6

//     see our odd index are acdr
//     but string start 0 so our odd index start from 0
//     and even index start from 1



// */
// #include<bits/stdc++.h>
// using namespace std;


// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(0);
//     cout.tie(0);

//     string s;//atcoder
//     cin>>s;
//     cout<<s[0];//a
//     for(int i=1;i<s.size();i++){
//         if(i==1){// 1 index t
//             continue;
//         }
//         if(i%2==0){
//             cout<<s[i];
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    cin>>s;
    cout<<s[0];
    for(int i=1; i<s.size(); i++)
    {
        if(i%2==0)
        {
            cout<<s[i];
        }
    }
    return 0;
}