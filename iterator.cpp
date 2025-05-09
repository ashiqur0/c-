#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
int main() {

    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
    // Create iterator of vector string
    vector<string>::iterator it;
    for(it=cars.begin(); it != cars.end(); it++) {
        cout << *it << endl;
    }

    // auto keyword
    auto it2 = cars.begin();
    cout << *it2 << endl;

    // iterator is a pointer
    for(it=cars.begin(); it != cars.end(); it++) {
        if(*it=="BMW") {
            cars.erase(it);
        }
    }

    for(const string &car : cars) {
        cout << car << endl;
    }

    // iterator in reverse: rbegin() and rend()
    for(auto it=cars.rbegin(); it != cars.rend(); it++) {
        cout << *it << endl;
    }

    // iterate through other data structure: 
    list<int> num = {1, 2, 3, 4};
    for(auto it3=num.begin(); it3 != num.end(); it3++) {
        cout << *it3 << endl;
    }

    deque<bool> mydeque = {true, false, true, false};
    for(auto it4=mydeque.begin(); it4 != mydeque.end(); it4++) {
        cout << *it4 << endl;
    }

    set<string> fruits = {"apple", "banana", "cherry"};
    for(auto it5=fruits.begin(); it5 != fruits.end(); it5++) {
        cout << *it5 << endl;
    }

    map<string, int> student = {{"Arif", 29}, {"Tanzid", 48}};
    for(auto it6=student.begin(); it6 != student.end(); it6++) {
        cout << it6->first << " is: " << it6->second << endl;
    }

    // Algorithm
    vector<string> fruits2 = {"Apple", "Orange", "Cherry", "Banana", "Melon", "Kiwi"};
    sort(fruits2.begin(), fruits2.end());
    for(string fruit : fruits2) {
        cout << fruit << endl;
    }

    return 0;
}