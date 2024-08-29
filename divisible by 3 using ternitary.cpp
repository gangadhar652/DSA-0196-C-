#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter a number:";
	cin>>num;
	cout<<(( num%3==0) ? "divisible": "not divisible")<<endl;
	return 0;
}
