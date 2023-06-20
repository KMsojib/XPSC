#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    string str;
    for (int i = 0; i < 50; i++){
        str += "Yes";
    }
    while (t--){
        string s;
        cin >> s;
        if (str.find(s, 0) != -1)///string _ name.find(substring _ name,start _ index);
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}