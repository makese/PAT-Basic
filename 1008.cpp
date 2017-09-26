#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	if(m > n){
		m = m % n;
	}
	vector<int> a(n);
	for(int i = 0; i < n; i ++){
		cin >> a[i];
	}
	reverse(a.begin(),a.begin() + n - m);
	reverse(a.begin() + n - m,a.end());
	reverse(a.begin(),a.end());
	for(int i = 0; i < a.size(); i ++){
		cout << a[i];
		if(i != a.size() - 1){
			cout << " ";
		}
	}
}
