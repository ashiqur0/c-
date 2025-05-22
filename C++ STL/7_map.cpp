#include <iostream>
#include <map>
using namespace std;
int main() {

    // Create map
    map<string, int> people = {{"Arif", 22}, {"Joy", 24}};

    // Access map: get the value by using key
    cout << people["Arif"] << endl;
    cout << people.at("Arif") << endl;

    // Change Values:
    people["Arif"] = 23;
    people.at("Joy") = 25;

    // Add elements:
    people["Sabid"] = 21;
    people["Raisa"] = 21;
    people["Soma"] = 22;

    people.insert({"Pollob", 22});
    people.insert({"Roktim", 23});
    people.insert({"Rabbi", 30});

    // Elements with equals keys: equals vlaue does not change
    map<string, int> student = {{"Nahrul", 36}, {"Tanzid", 48}};
    student.insert({"Nahrul", 50});
    student.insert({"Tasbiha", 36});

    cout << student.at("Tanzid") << endl;

    // Remove element:    
    people.erase("Joy");
    people.clear();

    // Find the size of the map
    cout << student.size() << endl;

    // Check if a map is empty
    student.empty();

    // Loop through a map
    for(auto stu : student) {
        cout << stu.first << " is: " << stu.second << endl;
    }

    return 0;
}