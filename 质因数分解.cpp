#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			cout<<max(n/i,i);
		}
	}
	return 0;
}


/*
已知正整数 n 是两个不同的质数的乘积，试求出较大的那个质数。
每个合数都可以写成几个质数（也可称为素数）相乘的形式
*/ 
