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
��֪������ n ��������ͬ�������ĳ˻���������ϴ���Ǹ�������
ÿ������������д�ɼ���������Ҳ�ɳ�Ϊ��������˵���ʽ
*/ 
