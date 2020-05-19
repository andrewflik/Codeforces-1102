// Problem - Balanced Ternary String
#include<bits/stdc++.h>
using namespace std;
int h[3];
int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	// Hash Char
	for(int i=0; i<n; i++)
		h[s[i] - '0']++;
	if(h[1] == h[2] and h[2] == h[0]){
		cout << s << endl;
		return 0;
	}
	if(h[0] < n/3){
		// Less 0's
		for(int i=0; i<n; i++){
			if(h[0] == n/3)
				break;
			if(s[i]!='0' && h[s[i] -'0'] > n/3){
				h[s[i]-'0']--, h[0]++;
				s[i] = '0';
			}
		}
	}
	if(h[2] < n/3){
		// Less 2's
		for(int i=n-1; i>0; i--){
			if(h[2] == n/3)
				break;
			if(s[i]!='2' && h[s[i] - '0'] > n/3){
				h[s[i] -'0']--, h[2]++;
				s[i] = '2';
			}
		}
	}
	if(h[1] < n/3){
		// Less 1's
		for(int i=0; i<n; i++){
			if(h[2] <= n/3 || h[1] == n/3)
				break;
			if(s[i] == '2' && h[2] > n/3){
				h[1]++, h[2]--;
				s[i] = '1';
			}
		}
		for(int i=n-1; i>0; i--){
			if(h[0] <= n/3 || h[1] == n/3)
				break;
			if(s[i] == '0' && h[0] > n/3){
				h[1]++, h[0]--;
				s[i] = '1';
			}
		}
 
	}
	cout << s << endl;
}
