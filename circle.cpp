// Write a C++ program to implement a class called Circle that has private member variables for radius. Include member functions to calculate the circle's area and circumference.
// OOPs concept used:
// Encapsulation: Encapsulation refers to the bundling of data with the methods that operate on that data

#include <iostream>
#include <math.h>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::tolower;
// using namespace std;

const double PI = 3.14;

class Circle {
private:
    double radius;
public:
    Circle(double rad) : radius(rad){};

    double calcArea(){
        return PI * pow(radius,2);  // area of circle = pi*r^2
    }

    double calcCircum(){
        return 2 * PI * radius;
    }
};

int main(){
    double rad;
    int check=0;
    char choice;

    do{
        cout<<"Input the radius of the cirle: ";
        cin>>rad;

        Circle circ(rad);

        cout<<"Area of circle is: "<<circ.calcArea()<<endl;
        cout<<"Circumference of circle is: "<<circ.calcCircum()<<endl;

        cout<<"Do you wish to continue (y/n): ";
        cin>>choice;

        if(tolower(choice)=='y')
            check++;
        else
            check=0;
    }while(check!=0);

    cout<<"Have a great day!";

    return 0;
}