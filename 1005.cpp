#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isT[105];

bool cmp(const int a,const int b){
	return 	a > b;
}

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i ++){
		cin >> a[i];
	}
	for(int i = 0; i < a.size(); i ++){
		int temp = a[i];
		while(temp != 1 && temp != 0){
			if(temp % 2 == 0){
				temp /=2;
			} else {
				temp = (temp * 3 + 1) / 2;
			}
			for(int j = 0; j < a.size(); j ++){
				if(a[j] == temp && j != i){
					a[j] = 0;
				}
			}
		}
	}
	vector<int> r;
	for(int i = 0; i < a.size(); i ++){
		if(a[i] != 0){
				r.push_back(a[i]);
		}
	}
	sort(r.begin(),r.end(),cmp);
	for(int i = 0; i < r.size(); i ++){
		cout << r[i];
		if(i != r.size() - 1){
			cout << " ";
		}
	}
}
