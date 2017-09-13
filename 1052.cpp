#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> s;
vector<string> y;
vector<string> k;

void print(){
	int a[5];
	for(int i = 0; i < 5; i ++){
		cin >> a[i];
	}
	for(int i = 0; i < 5; i ++){
		if(a[i] < 1){
			cout << "Are you kidding me? @\\/@" << endl;
			return;
		}
	}
	if(a[0] > s.size() || a[4] > s.size() || a[1] > y.size() || a[3] > y.size() || a[2] > k.size()){
		cout << "Are you kidding me? @\\/@" << endl;
	} else {
		cout << s[a[0] - 1] << '(' << y[a[1] - 1] << k[a[2]- 1] << y[a[3] - 1] << ')' << s[a[4] - 1] << endl;
	}
	
}

int main(){
	
	string ss;
	string ys;
	string ks;
	getline(cin,ss);
	getline(cin,ys);
	getline(cin,ks);
	for(int i = 0; i < ss.length(); i ++){
		if(ss[i] == '['){
			for(int j = i; j < ss.length(); j ++) {	
				if(ss[j] == ']') {
					s.push_back(ss.substr(i + 1,j - i - 1));
					break;
				}	
			}
		}
	}
	for(int i = 0; i < ys.length(); i ++){
		if(ys[i] == '['){
			for(int j = i; j < ys.length(); j ++){
				if(ys[j] == ']') {
					y.push_back(ys.substr(i + 1,j - i - 1));
					break;
				}	
			}
		}
	}
	for(int i = 0; i < ks.length(); i ++){
		if(ks[i] == '['){
			for(int j = i; j < ks.length(); j ++){
				if(ks[j] == ']') {
					k.push_back(ks.substr(i + 1,j - i - 1));
					break;
				}	
			}
		}
	}
	int n;
	cin >> n;
	for(int i = 0; i < n; i ++){
		print();
	}
}
