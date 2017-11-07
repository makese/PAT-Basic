#include <iostream>
using namespace std;
int main(){
	int in[1000];
	int n = 0;
	int a[5] = {0};
	bool has[5] = {false};
	bool a2 = false;
	int a4 = 0;
	cin >> n;
	for(int i = 0; i < n; i ++) {
		cin >> in[i];
	}
	for(int i = 0; i < n; i ++){
		switch(in[i] % 5){
			case 0:
				if(in[i] % 2 == 0) {
					a[0] += in[i];
					has[0] = true;
				}
				break;
			case 1:
				if(!a2){
					a[1] += in[i];
					a2 = true;
					has[1] = true;
				} else {
					a[1] -= in[i];
					a2 = false;
				}
				break;
			case 2:
				a[2] ++;
				has[2] = true;
				break;
			case 3:
				has[3] = true;
				a[3] += in[i];
				a4 ++;
				break;
			case 4:
				has[4] = true;
				if(a[4] < in[i]){
					a[4] = in[i];
				}
				break;
		}
	}
	for(int i = 0; i < 4; i ++){
		if(has[i] == true){
			if(i == 3){
				float temp = a[i] / (float)a4;
				printf("%.1f ",temp);
			} else
			{
				printf("%d ",a[i]);
			}
		} else {
			printf("%c ",'N');
		}
	}
	if(has[4] == true){
			printf("%d",a[4]);
		} else {
			printf("%c",'N');
		}
}
