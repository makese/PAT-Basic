#include <iostream>
#include <vector>
using namespace std;

bool isp(int a){
	for(int i = 2; i * i <= a; i++){	
		if(a % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n,m;
	cin >> n >> m;
	vector<int> r;
	for(int i = 2; i < 10000000; i ++){
		if(isp(i)){
			r.push_back(i);
		}
		if(r.size() > m){
			break;
		}
	}
	vector<int> r1;
	for(int i = n; i <= m; i ++){
		r1.push_back(r[i - 1]);
	}
	for(int i = 1; i <= r1.size(); i ++){
		cout << r1[i - 1];
		if(i % 10 == 0 && i != 1){
			cout << endl;
		}else if(i != r1.size()) {
			cout << " ";
		}
	}
}
