#include <iostream>
#include <string>
#include <algorithm>  
using namespace std;


void reverseString(string& str) {
    reverse(str.begin(), str.end());  
}

int main() {
	string str = "ganga";

    reverseString(str); 
    

    cout << "Reversed string: "<< str << endl;
    
    return 0;
}
