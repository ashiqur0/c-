#include <iostream>
#include <set>
using namespace std;
int main() {

    // Create set: Sort automatically, indexing not allowed,
    set<string> cars = {"Volvo", "Ford", "BMW", "Mazda"};

    // Sort Descending order: greater<type>
    set<int, greater<int>> num = {1, 7, 3, 2, 5, 9};
    for(int n : num) {
        cout << n << endl;
    }

    // Unique element: duplicate value remove automatically
    set<string> cars2 = {"Volvo", "BMW", "Ford", "BMW", "Mazda"};
    for(string car : cars2) {
        cout << car << endl;
    }

    // Add element:
    cars2.insert("Toyota");

    // Remove element:
    cars2.erase("Toyota");
    cars2.clear(); // to remove all the element

    // Size of the set:
    set<string> cars3 = {"Lamborgini", "Ferary", "Rols Roys"};
    cars3.size();

    // Check if set is empty:
    cars3.empty();

    // Looping through set
    for(string car : cars3) {
        cout << car << endl;
    }

    return 0;
}