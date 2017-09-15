#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct T{
	int sc;
	int all;
	int tr;
	char in[5];
};

int count[105];
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	vector<T> a(m);
	for(int i = 0 ; i < m ; i ++){
		scanf("%d%d%d",&a[i].sc,&a[i].all,&a[i].tr);
		getchar();
		for(int j = 0; j <a[i].tr; j ++){
			char temp[2];
			scanf("%s",temp);
			a[i].in[j] = temp[0];
		}
		getchar();
	}
	for(int i = 0; i < n; i ++){
		int sum = 0;	
		for(int j = 0; j < m; j ++){
			int all;
			char in[10];
			scanf("(%d ",&all);
			for(int k = 0; k < all; k ++){
				char temp[2];
				scanf("%s",temp);
				in[k] = temp[0];
			}
			getchar();
			if (all > a[j].all || all < a[j].tr){
				count[j] ++;
			} else{
				bool flag = true;
				for(int x = 0; x < all ; x ++){
					if(a[j].in[x] != in[x]){
						flag = false;
						break;
					}
				}
				if(flag){
					sum += a[j].sc;
				}else{
					count[j] ++;
				}
			}
		}
		cout << sum << endl;
	}
	int max = 0;
	for(int i = 0; i < m; i ++){
		if(count[i] > max){
			max = count[i];
		}
	}
	if(max == 0){
		cout << "Too simple";
	} else {
		cout << max << " ";
		vector<int> r;
		for(int i = 0; i < m; i ++){
			if(count[i]== max){
				r.push_back(i + 1);
			}
		}
		for(int i = 0; i < r.size(); i ++){
			cout << r[i];
			if(i != r.size() - 1){
				cout << " ";
			}
		}
	}
	
}		
