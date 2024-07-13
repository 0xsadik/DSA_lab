// constructors outside the class 

#include<bits/stdc++.h>
using namespace std;

class car {
    public:
        string brand;
        string model;
        int year;
        car(string x, string y, int z);
};

// let's create method
car::car(string x, string y, int z) {
    brand = x;
    model = y;
    year = z;
}

int main() {
    car obj1("BMW", "X5", 1999);
    car obj2("Ford", "Mustang", 1969);

    cout << "printing obj1:-\n";
    cout << obj1.brand << '\n' << obj1.model << '\n' << obj1.year << '\n';
    cout << "\nprinting obj2:-\n";
    cout << obj2.brand << '\n' << obj2.model << '\n' << obj2.year << '\n';

    return 0;
}