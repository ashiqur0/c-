#include <iostream>
#include <list>
using namespace std;
int main() {

    // Create a list
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Access list
    cars.front();
    cars.back();

    // Change list element
    cars.front() = "Toyota";
    cars.back() = "Tesla";

    // Add list element
    cars.push_front("Ferary");
    cars.push_back("Lamborgini");

    // Remove list element
    cars.pop_front();
    cars.pop_back();

    // List size
    cars.size();

    // Check if list is empty
    cars.empty();

    // Loop through a list
    for(string car : cars) {
        cout << car << endl;
    }

    return 0;
}