#include <iostream>
using namespace std;

class student {
    public:
    string name;
    int roll;

    void go() {
        cout << name + " goes to uiniversity" << endl;
    }
};

class Dog {
    public:
    // way 1
    // void berk() {
    //     cout << "woof!" << endl;
    // }

    // way 2
    // void berk();

    // way3
    // void berk(string b);

    // way4
    string berk(string b);
};
// way 2
// void Dog::berk() {
//     cout << "woof!" <<endl;
// }

string Dog::berk(string b) {
    return b;
}

int main() {

    student s1;
    s1.name = "Samiul";
    s1.roll = 1;
    s1.go();

    Dog d;
    // way 1, 2
    // d.berk();

    // way 3
    // d.berk("woof!");
    
    // way 4
    cout << d.berk("woof!") << endl;

    return 0;
}