#include <iostream>
#include <deque>
using namespace std;
int main() {

    // Create deque
    deque<string> cars = {"volvo", "BMW", "ford", "mazda"};

    // Access the deque element
    cout << cars[0] << endl;
    cout << cars.at(1) << endl;
    cout << cars.front() << endl;
    cout << cars.back() << endl;

    // Change deque element
    cars[0] = "Toyota";
    cars.at(2) = "Tesla";
    cars.front() = "Mazda";
    cars.back() = "Ferary";

    // Add deque element
    cars.push_back("Lamborgini");
    cars.push_front("Ferary");

    // Remove element
    cars.pop_front();
    cars.pop_back();

    // Deque size
    cars.size();

    // Check if deque is empty
    cars.empty();

    // Loop Through a Deque
    for(int i=0; i<cars.size(); i++) {
        cout << cars[i] << cars.at(i) << endl;
    }

    for(string car : cars) {
        cout << car << endl;
    }

    return 0;
}