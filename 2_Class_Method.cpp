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

int main() {

    student s1, s2, s3;
    s1.name = "Samiul";
    s1.roll = 1;

    s2.name = "Nawshin";
    s2.roll = 2;

    s3.name = "Simanto";
    s3.roll = 3;

    s1.go();
    s2.go();
    s3.go();

    return 0;
}