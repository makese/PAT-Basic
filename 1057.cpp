#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main(){
	string a;
	getline(cin,a);
	int sum = 0;
	for(int i = 0; a[i]; i ++){
		if(isalpha(a[i])){
			char b = tolower(a[i]);
			sum += b - 'a' + 1;
		}
	}
	int l = 0,y = 0;
	while(sum !=0){
		if(sum % 2 == 1){
			y ++;
		}else {
			l ++;
		}
		sum /= 2;
	}
	cout << l << " " << y;
}
