#include <iostream>
#include <algorithm>
#include <string>
#include <cctype>
using namespace std;

int main(){
	int n;
	cin >> n;
	int count = 0;
	double sum = 0.0;
	for(int i = 0; i < n; i ++){
		string a;
		cin >> a;
		double b = atof(a.c_str());
		bool flag = true;
		if( b < - 1000 || b > 1000){
			flag = false;
		}
		int len = a.length();
		int pnum = 0;
		for(int i = 0; a[i]; i ++){
			if(a[i] == '-'&&i!=0){
				flag = false;
				break;
			}
			if(a[i] != '.'){
				if(!isdigit(a[i])&&a[i]!='-'){
					flag = false;
					break;
				}
			}else{
				pnum ++;
			}
			if(pnum == 1){
				if(len - i - 1 > 2){
					flag = false;
					break;
				}
			}else{
				if(pnum > 1){
					flag = false;
					break;
				}
			}
		}
		if(!flag){
			printf("ERROR: %s is not a legal number\n",a.c_str());
		}else {
			sum += b;
			count ++;
		}
	}
	if(count == 0){
		printf("The average of 0 numbers is Undefined");
	}
	if(count == 1){
		printf("The average of 1 number is %0.2lf",sum);
	}
	if(count > 1){
		printf("The average of %d numbers is %0.2lf",count,sum / count);
	}
}
