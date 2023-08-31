#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;  cin>>n;
    vector<int>a;
    set<int>st;
    for(int i=0;i<n;i++){
        int x;  cin>>x;
        st.insert(x);
    }
    for(auto it : st){
        a.push_back(it);
    }
    // cout<<a.size()<<endl;
    // for(auto i : a){
    //     cout<<i<<" ";
    // }
    if(a.size()>3){
        cout<<-1<<endl;
    }
    else if(a.size()==3){
        if(a[2]-a[1]==a[1]-a[0]){
            cout<<a[1]-a[0]<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    else if(a.size()==2){
        if((a[1]-a[0])%2==0){
            cout<<(a[1]-a[0])/2<<endl;
        }else{
            cout<<a[1]-a[0]<<endl;
        }
    }
    else{
        cout<<0<<endl;
    }
}
//find the unique element
//a.resize(unique(a.begin(), a.end()) - a.begin());