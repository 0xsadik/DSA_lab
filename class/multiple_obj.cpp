// let's create multiple objects

#include<bits/stdc++.h>
using namespace std;

class car {
    public: 
        string brand;
        string model;
        int year;
};

int main() {
    car obj1; // obj from car 
    // set attributes their values 
    obj1.brand = "BMW";
    obj1.model = "X5";
    obj1.year = 1999;

    // another object 

    car obj2; 

    obj2.brand = "Ford";
    obj2.model = "Mustang";
    obj2.year = 1969;

    // printing obj1 
    cout << "printing obj1:\n" << obj1.brand << '\n' << obj1.model << '\n' << obj1.year << '\n';
    // printing obj2 
    cout << "printing obj2:\n" << obj2.brand << '\n' << obj2.model << '\n' << obj2.year << '\n';

    return 0;


}
