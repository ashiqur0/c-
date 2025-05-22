#include <iostream>
using namespace std;

struct student {
    string name;
    int roll;
};

int main() {

    student s1, s2, s3;
    s1.name = "Samiul";
    s1.roll = 1;

    s2.name = "Nawshin";
    s2.roll = 2;

    s3.name = "Simanto";
    s3.roll = 3;

    cout << s3.name << " " << s3.roll << endl;

    return 0;
}