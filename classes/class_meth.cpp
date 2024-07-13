// class methods 

/**
 
 * methods are functions that belongs to the class 

   There are two ways to define functions that belongs to a class 

   - inside class definition 
   - outside class definition

    Note : you access methods just like you access attributes;
            by creating an objet of the class and using the dot syntax(.);

*/

#include<bits/stdc++.h>
using namespace std;

class example {
    public:
        void prnt_something() {
            cout << "Hey this is 'something' i am printing\n";
        }
};

int main() {
    example obj;
    obj.prnt_something();

    return 0;
}