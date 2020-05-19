// Problem - Integer Sequence Dividing
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n, s;
	cin >> n;
	s = n*(n+1)/2;
	if(s&1)
		cout << 1 << endl;
	else
		cout << 0 << endl;
 
}
