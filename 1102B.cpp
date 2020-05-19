// Array-K Coloring
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	int a[n], temp[n];
	map<int, int> m;
	for(int i=0; i<n; i++){
		cin >> a[i];
		m[a[i]]++;
	}
	if(k > n){
		cout << "NO\n";
		return 0;
	}
	for(int i=0; i<n; i++){
		if(m[a[i]] > k){
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	vector<pair<int, int>> v[k];
	set<int> s[k];
	for(int i=0; i<k; i++)
		v[i].push_back({a[i], i}), s[i].insert(a[i]), a[i] = 0;
	for(int j=0; j<k; j++){	
		for(int i=0; i<n; i++){
			if(s[j].find({a[i]}) == s[j].end() && a[i]!=0)	// If not find
				s[j].insert(a[i]), v[j].push_back({a[i], i}), a[i] = 0;
		}
	}
	for(int i=0; i<k; i++){
		for(int j=0; j<v[i].size(); j++){
			temp[v[i][j].second] = i+1;
		//	cout << v[i][j].second << " ";
		}
	}
	for(auto &x : temp)
		cout << x << " ";
}
