#include<iostream>
#include<string>
using namespace std;
class vehicle{
	public:
	 string make;
	 string model;
	 int year;
};
 class car: public vehicle{
 	public:
 	int seatingcapacity;
 	string fueltype;
 };
  class bike: public vehicle{
  	public:
  	int seatingcapacity;
  	string fueltype;
  };
  int main(){
  	car mycar;
  	mycar.make = "audi";
  	mycar.model =" audi++";
  	mycar. year =1900;
  	mycar.seatingcapacity = 5;
  	mycar.fueltype ="diesel";
    
    bike mybike;
    mybike.make ="hero";
    mybike.model =" splendor +";
    mybike.year = 1987;
    mybike.seatingcapacity = 3;
    mybike.fueltype = "petrol";
     cout<<"car\n"<<"model:"<<mycar.make<<mycar.model<<mycar.year<<mycar.seatingcapacity<<mycar.fueltype<<endl;
     cout<<"bike\n"<<mybike.make<<mybike.model<<mybike.year<<mybike.seatingcapacity<<mycar.fueltype<<endl;
     return 0;
     
  }
