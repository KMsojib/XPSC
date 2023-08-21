/*
    Aproach:
        predicated + binay search

        predicated: true of false retunr kore
        monotonic predicated function: F F F T T T 
            two types of               T T T F F F 

            first true and last flase find mid == false then true right side
            first false and last trure find mid == false then true left side


        lets function
        // H=height = 0 1 2...... any position we find (wood<=m) then we get false
            f(height){
                if(wood>=m){
                    return true;
                }
                else{
                    false;
                }
            }

*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const int N=1e6+10;
ll m;
int n;
ll trees[N];

bool is_wood_sufficient(int h){
    ll wood=0;
    for(int i=0;i<n;i++){
        if(trees[i]>=h){
            wood+=(trees[i]-h);
        }
    }
    return wood>=m;
    // if(wood>=m)
    //     return true;
    // else
    //     return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>trees[i];
    }
    ll lo=0,hi=1e9,mid;
    while (hi-lo>1)
    {
        mid=(hi+lo)/2;
        if(is_wood_sufficient(mid)){
            lo=mid;
        }
        else{
            hi=mid-1;
        }
    }
    if(is_wood_sufficient(hi)){
        cout<<hi<<endl;
    }else{
        cout<<lo<<endl;
    }
    return 0;
}   