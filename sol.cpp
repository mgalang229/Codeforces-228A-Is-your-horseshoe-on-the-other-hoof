#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll s[1000000], cnt = 0;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	for(ll i = 0; i < 4; i++){
		cin >> s[i];
	}
	sort(s, s+4);
	for(ll i = 0; i < 4-1; i++){
		if(s[i] == s[i+1]){
			cnt++;
		}
	}
	cout << cnt << "\n";
	return 0;
}
