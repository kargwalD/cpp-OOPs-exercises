// Write a C++ program to create a class called Rectangle that has private member variables for length and width. Implement member functions to calculate the rectangle's area and perimeter.
// OOPs concept used
// Encapsulation: wrapping up data and information under a single unit
// Abstraction: displaying only essential information and hiding the details

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

class Rectangle{
    private:
        double length, width;
    public:
        Rectangle(double len, double wid):length(len), width(wid){}

        double calcArea(){
            return length*width;
        }

        double calcPerimeter(){
            return 2*(length+width);
        }
};

int main(){
    double l, w;
    int check=0;
    char choice;

    do{
        cout<<"Enter length and width of rectangle: ";
        cin>>l>>w;

        Rectangle rec(l,w);

        cout<<"Area of rectangle is: "<<rec.calcArea()<<endl;
        cout<<"Circumference of rectangle is: "<<rec.calcPerimeter()<<endl;

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