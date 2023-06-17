#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    /*
        array size N and positive int K subbarrya er size
        contiguous subarray
        k=2
           i  j
        -8 3 -6 10
         0 1  2  3 4
        q-(-8)
        if(a[i]==q.front())
        {
            q.pop();
        }
        i++; 
        j++;
        if(a[i] == q.front())
        {
            pop();
        }
       
    **/
   
    int N;   cin>>N;
    int A[N];
    for(int i=0;i<N;i++)     cin>>A[i];
    int K;   cin>>K;

    queue<int>q;
    int i=0,j=0;
    
while(j<N)//j last ar n size j=5 n=4
    {
        //negative control
        if(A[j]<0){
            q.push(A[j]);//-6 
        }
        //sub array complete
        if(j<K-1){// 1 < 1
            j++;
        }
        else{
            // 1 2 3 4 < 0
            //jodi na thake 
            if(q.empty()){//0
                //ans.push_back(0);
                cout<<0<<" ";
            }
            //jodi thake
            else{
                //ans.push_back(q.front());
                //first neg integer
                cout<<q.front()<<" ";
            }
            // jodi window samne agai dei ager je neg int ac
            //ota k korte hobe pop
            if(A[i] == q.front() ){
                q.pop();
            }
            i++;
            j++;
        }
    }
    return 0;
}