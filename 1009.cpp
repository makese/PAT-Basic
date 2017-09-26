#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	stack<string> r;
	string temp;
	while(cin >> temp){
		r.push(temp);
	}
	while(!r.empty()){
		cout << r.top();
		r.pop();
		if(!r.empty()){
			cout << " ";
		}
	}
}
