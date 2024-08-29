#include<iostream>
using namespace std;
int main(){
	int temp, a,b;
	cout<<"enter the number of(a):";
	cin>>a;
	cout<<"enter the number of (b):";
	cin>>b;
	temp=a;
	a=b;
	b=temp;
	cout <<"ater swapping\n";
	cout <<"a= "<<a<<endl;
	cout <<"b= "<<b<<endl;
	return 0;
}
