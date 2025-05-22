#include <iostream>
#include <stack>
using namespace std;
int main() {

    // Create stack
    stack<string> cars;

    // Add stack element
    cars.push("Ford");
    cars.push("BMW");
    cars.push("Mazda");
    cars.push("Toyota");

    // Access top element
    cout << cars.top() << endl;

    // Change top element
    cars.top() = "Lamborgini";

    // Remove stack element
    cars.pop();

    // Get the size of the stack
    cars.size();

    // Check if stack is empty
    cars.empty();

    return 0;
}