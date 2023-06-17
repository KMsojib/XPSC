/*
.....#..
#...#...
.#.#....
..#.....
.#.#....
#...#...
.....#..
......#.

i=5,j=3
i-1, j-1 ==# and i-1, J+1=#
i+1, j-1 ==# and i+1, j+1=#
ans=i,j

*/
#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;  cin>>t;
    while(t--)
    {
    char a[8][8];
    int i=0,j=0,x=0,y=0;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            cin>>a[i][j];
        }
        //cout<<endl;
    }
    for(i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(a[i][j]=='#')
            {
                if(a[i+1][j-1]=='#' and a[i-1][j+1]=='#' and a[i+1][j-1]=='#' and a[i+1][j+1]=='#')
                {
                    x=i+1;
                    y=j+1;
                    break;
                }
            }
        }
    }
    cout<<x<<" "<<y<<endl;
    }
    return 0;
}