// Write a C++ program to create a class called Person that has private member variables for name, age and country. Implement member functions to set and get the values of these variables.
// OOPs concept used
// Encapsulation: wrapping up data and information under a single unit

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;


class Person{
    private:
        string name, country;
        //char name[10],country[20];    this is correct
        //char name[],country[];    this is wrong, cannot leave the space empty unless you initialise it right away, char name[]="dhruv" this would be correct.

        int age;

    public:
        void setName(const string & n) {
            name = n;
            }

        void setAge(int a) {
            age = a;
        }

        void setCountry(const string & c) {
            country = c;
        }

        // Getter functions
        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }

        string getCountry() {
            return country;
        }
};

int main() {
  // Create a person object
  Person person;

  // Set the person's details
  person.setName("Dhruv Kargwal");
  person.setAge(20);
  person.setCountry("Canada");

  // Get and display the person's details
  cout << "Name: " << person.getName() << endl;
  cout << "Age: " << person.getAge() << endl;
  cout << "Country: " << person.getCountry() << endl;

  return 0;
}