#include <iostream>
#include <vector>
using namespace std;
int main() {

    // create vector
    vector<string> cars = {"volvo", "bmw", "ford", "mazda"};

    // print vector elements:
    for(string car: cars) {
        cout << car << endl;
    }
    
    // access vector element
    cout << cars.front() << endl;
    cout << cars.back() << endl;

    cout << cars[0] << endl;
    cout << cars.at(0) << endl; // .at() preffered over []

    // Change vector element
    cars[0] = "Tesla";
    cars.at(0) = "Tesla";

    // Add vector element
    cars.push_back("toyota");

    // Remove vector element
    cars.pop_back();

    // Vector size
    cars.size();

    // Check if vector is empty
    cars.empty();

    // Loop through a vector
    for(int i=0; i<cars.size(); i++) {
        cout << cars.at(i) << endl;
    }

    for(string car: cars) {
        cout << car << endl;
    }

    return 0;
}