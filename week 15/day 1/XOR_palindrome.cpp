#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int cnt = 0;
	for(int i = 0; i < n / 2; i ++)
		if(s[i] != s[n - 1 - i])
			cnt ++;
	string ans(n + 1, '0');
	for(int i = cnt; i <= n - cnt; i += (n % 2 == 0 ? 2: 1))
		ans[i] = '1';
	cout<<ans<<endl;
}

int main(){
	int t;
	cin >> t;
	while(t --){
		solve();
    }
}