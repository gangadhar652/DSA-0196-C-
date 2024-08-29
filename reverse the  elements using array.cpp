#include<iostream>
using namespace std;
int main(){
int n;
cout << "Enter the number of elements in the array: ";
    cin >> n;
	int array [n];
	cout<<"enter the elements of array:";
	for(int i = 0; i< n; i++){
		cin >> array[i];
		
	}
	for ( int i = 0; i <n/2;i++){
		int temp = array[i];
		array[i]= array[n-1-i];
		array[n-1-i] = temp;
	}
		cout<< "reversed array:";
		for(int i = 0;i<n;i++){
		cout<<array[i]<<" ";
		}
	
	cout<<endl;


	return 0;
}

