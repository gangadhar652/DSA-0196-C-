#include <iostream>
using namespace std;


class Number {
protected:
    int num;
public:
    void setNumber(int x) {
        num = x;
    }
};


class Square : public Number {
public:
    int getSquare() {
        return num * num;
    }
};


class Cube : public Number {
public:
    int getCube() {
        return num * num * num;
    }
};

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    Square sq;
    Cube cb;

    sq.setNumber(number);
    cb.setNumber(number);

    cout << "Square of " << number << " is: " << sq.getSquare() << endl;
    cout << "Cube of " << number << " is: " << cb.getCube() << endl;

    return 0;
}

