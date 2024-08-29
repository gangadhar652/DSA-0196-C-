#include<iostream>
using namespace std;
class shape{
	public:
		int height,width;
		int area,perimeter;
};
class rectangle: public shape{
	public:
		void  method(){
		height =3;
		width=4;
		area=height*width;
		perimeter=(height+width)/2;
		cout<<area<<endl<<perimeter;
		}
};
class triangle: public shape{
	public:
		void mymethod(){
		height=5;
		width=6;
		area=0.5*(height*width);
		cout<<area;
		}
};
int main(){
	rectangle myobj;
	myobj.method();	
}
