#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin>>s;

    int freq[26]={0};
    for(int i=0;i<s.size();i++){
        freq[s[i]-97]++;
    }
    for(int i=0;i<26;i++){
        if(freq[i]==0){
            char ch=i+97;
            cout<<ch<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;
    return 0;
}