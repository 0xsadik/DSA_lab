#include<bits/stdc++.h>
using namespace std;

// creating a basic class

class myclass {
    public:
        string name;
        int age;
};

int main() {
    // now i have to create an object 
    myclass obj;

    // let's access attributes and set their value

    obj.name = "torikus sadik";
    obj.age = 23;

    // let's print these attribute in terminal

    cout << obj.name << '\n' << obj.age << '\n';
}