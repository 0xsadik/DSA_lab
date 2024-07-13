// class method outside example 

#include<bits/stdc++.h>
using namespace std;

class mout {
    public:
        void say();
};

// method outta class 

void mout::say() {
    cout << "hello, there!!\n";
}

int main() {
    mout obj;

    obj.say();

    return 0;
}
