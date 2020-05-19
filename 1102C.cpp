// Problem - Doors Breaking and Repairing
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, x, y;
	cin >> n >> x >> y;
	int ar[n], tot = 0;
	for(int i=0; i<n; i++){
		cin >> ar[i];
		if(ar[i] <= x)
			tot++;
	}
	if(x > y){
		cout << n << endl;
		return 0;
	}
	if(x == y || x < y){
		if(tot&1)
			cout << tot/2+1 << endl;
		else
			cout << tot/2 << endl;
	}
}
