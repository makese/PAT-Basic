#include <iostream>
#include <string>
#include <vector>
using namespace std;
string map[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu","shi"};
int main(){
	string a;
	vector<int> r;
	cin >> a;
	int sum = 0;
	for(int i = 0; a[i]; i ++){
		sum += a[i] - '0';
	}
	
	if(sum == 0){
		cout << map[0];
		return 0;
	}
	
	while(sum != 0){
		r.push_back(sum % 10);
		sum /= 10;
	}
	
	for(int i = r.size() - 1; i >= 0 ; i --){
		cout << map[r[i]];
		if(i != 0){
			cout << " ";
		}
	}
}
