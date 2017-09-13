#include <iostream>

using namespace std;

long long gcd(long long a,long long b){
	return b == 0 ? a : gcd(b, a % b);
}
long long labs(long long a){
	if(a < 0){
		return -a;
	} else {
		return a;
	}
}


void toNum(long long a,long long b){
	if(b == 0){
		cout << "Inf";
		return ;
	}
	if(a == 0){
		cout << "0";
		return ;
	}
	if(a % b == 0){
		long long x = a / b;
		if(x < 0){
			cout <<'(' << x << ')';
		} else {
			cout << x;
		}
	}else {
		bool flag = false;
		if( a < 0 && b > 0 || a > 0 && b < 0 ){
			cout <<"(-";
			flag = true;
		}
		a = labs(a);
		b = labs(b);
		long long x = a / b;
		long long y = a % b;
		if(x != 0){
			cout << x << " ";
		}
		long long g = gcd(y,b);
		y /= g;
		b /= g;
		cout << y << "/" << b;
		if(flag){
			cout << ")";
		}
	}
	
}


int main(){
	long long a,b,c,d;
	scanf("%lld/%lld%lld/%lld",&a,&b,&c,&d);
	
	long long x,y;
	x = a * d + b * c;
	y = b * d;
	toNum(a,b);
	cout << " + ";
	toNum(c,d);
	cout << " = ";
	toNum(x,y);
	cout << endl;
	
	x = a * d - b * c;
	toNum(a,b);
	cout << " - ";
	toNum(c,d);
	cout << " = ";
	toNum(x,y);
	cout << endl;
		
	x = a * c;
	toNum(a,b);
	cout << " * ";
	toNum(c,d);
	cout << " = ";
	toNum(x,y);
	cout << endl;
	
	x = a * d;
	y = b * c;
	toNum(a,b);
	cout << " / ";
	toNum(c,d);
	cout << " = ";
	toNum(x,y);
	cout << endl;
	
}
