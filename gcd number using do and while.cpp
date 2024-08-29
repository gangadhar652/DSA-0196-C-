#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter two integers:";
	cin>>a>>b;
	do{
		int remainder =  a % b;
		a = b;
		b = remainder;
	}
	while(b!=0);
		cout<<"gcd is:"<<a;
	
	return 0;
}
