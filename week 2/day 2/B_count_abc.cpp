
#include <bits/stdc++.h>
using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;  cin>>n;
    string sentence;    cin>>sentence;
    string f = "ABC";

    size_t count = 0;//count the occurance
    size_t pos = sentence.find(f);//it find the position

    while (pos !=string::npos) {// it run the immideated of pos
        count++;
        pos = sentence.find(f, pos + 1);//goto the next occurance
    }

    cout<<count<<endl;
    return 0;
}
