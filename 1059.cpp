#include <iostream>
#include <map>

bool par(int a){
	for(int i = 2; i <= a * a; i ++){
		if(a % i == 0 && a != i){
			return false;
		}
	}
	return true;
}

using namespace std;

int main(){
	map<int,int> a;
	int n;
	cin >> n;
	int gj = 0;
	for(int i = 0; i < n; i ++){
		int x;
		scanf("%d",&x);
		gj = x;
		a[x] = i + 1;
	}
	cin >> n;
	for(int i = 0; i < n; i ++){
		int x;
		cin >> x;
		if(a[x] != 0 && a[x] != -1){
			if(a[x] == 1){
				printf("%0.4d: Mystery Award\n",x);
			}else {
				if(par(a[x])){
					printf("%0.4d: Minion\n",x);
				}else {
					printf("%0.4d: Chocolate\n",x);
				}
			}
			a[x] = -1;
		}else{
			if(a[x] == -1){
				printf("%0.4d: Checked\n",x);
			} else{
				printf("%0.4d: Are you kidding?\n",x);	
			}
		}
	}
}
