#include <iostream>
#include <queue>
using namespace std;
int main() {

    // create queue
    queue<string> cars;

    // Add element
    cars.push("Ford");
    cars.push("Tesla");
    cars.push("BMW");
    cars.push("Mazda");

    // Access element
    cout << cars.front() << endl;
    cout << cars.back() << endl;

    // Change element
    cars.front() = "Toyora";
    cars.back() = "Marcedees";

    // Remove element 
    cars.pop();

    // Queue size
    cars.size();

    // Check if queue is empty
    cars.empty();

    return 0;
}