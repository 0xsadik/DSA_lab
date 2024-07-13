// constructor parameter 

#include<bits/stdc++.h>
using namespace std;

class car  {
    public:
        string brand;
        string model;
        int year;
        car(string x, string y, int z) {
            brand = x;
            model = y;
            year = z;
        }
};

int main() {
    car obj1("BMW", "X5", 1999);
    car obj2("Ford", "Mustang", 1969);

    cout << "Car 1 stuff: \n" << obj1.brand << '\n' << obj1.model << '\n' << obj1.year << '\n';
    cout << "\nCar 2 stuff: \n" << obj2.brand << '\n' << obj2.model << '\n' << obj2.year << '\n';

    return 0;
}