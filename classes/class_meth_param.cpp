// parameters

#include<bits/stdc++.h>
using namespace std;

class car {
    public:
        int speed(int maxspeed); // which is a method with a parameter 
};

int car::speed(int maxspeed) {
    return maxspeed;
}

int main() {
    car obj;
    car obj2;

    cout << obj.speed(300) << '\n' << obj2.speed(250) << '\n';
}