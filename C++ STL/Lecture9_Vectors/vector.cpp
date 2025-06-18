/*
Vector : All about vecto
*/ 

#include <iostream>
#include <vector>                                   // Header file of vector
using namespace std;

int main() {

    // Different ways to declare vector
    vector<int> marks;                              // Declare
    vector<char> grade = {'a', 'b', 'c', 'd', 'e'}; // Declare and Initialize with value
    vector<char> grade2(grade);                     // Create new vector with previous vector
    vector<bool> isPassed(5, true);                 // size 5, all value initialize as true
    vector<string> student(5);                      // Declare vector with size 5
    vector<double> gpa;                             // Declare

    // Initialize vector elements
    student[0] = "Samiul";                          // Initialize through index
    student[1] = "Nawshin";
    student[2] = "Simanto";
    
    student.at(3) = "Ruhi";                         // Initialize with index by .at() function
    student.at(4) = "Fahim";

    // Insert Value
    gpa.push_back(3.88);                            // Insert Value to the back
    gpa.push_back(3.40);
    gpa.push_back(3.42);

    marks.emplace_back(93);                         // Insert Value to the back
    marks.emplace_back(99);
    marks.emplace_back(97);

    marks.insert(marks.begin(), 100);               // insert at first index  
    marks.insert(marks.begin() + 1, 98);            // insert at specific index(2nd)
    marks.insert(marks.end(), 95);              // insert at last index

    // Input value                                  
    cin >> student[3];                              // input using index
    
    for (int i = 0; i < student.size(); i++) {      // input using for loop
      cin >> student[i];
    }
    
    for (string& name : student) {                  // input using for each loop
      cin >> name;   
    }

    // Access elements
    cout << student[0] << endl;                     // access 0th element
    cout << student.at(0) << endl;
    cout << student.front() << endl;                // access first element
    cout << student.back() << endl;                 // access last element

    for (char c : grade) {                          // Access vector elements through for each loop
        cout << c << endl;
    }

    for (int i = 0; i < student.size(); i++) {      // input using for loop
      cout << student[i];
    }

    // Update / Change
    student[0] = "Sam";
    student.at(0) = "Samiul Islam";
    student.front() = "Md. Samiul";
    student.back() = "Md. Fahim";

    *(student.begin()) = "Sam"; // as begin() and end() functions are iterator (pointer) it needs to dereference by * to access or update
    *(student.begin() + 1) = "Mst. Nawshin";    // update 2nd value 
    *(student.end()) = "Fahim";
    *(student.rbegin()) = "Fahim2";
    *(student.rend()) = "Sam2";

    // pop_back / erase / clear
    student.pop_back();             // remove last element

    grade.erase(grade.begin());     // erase first
    grade.erase(grade.end() - 1);   // erase last
    grade.erase(grade.begin() + 2); // erase 3rd
    grade.erase(grade.begin() + 1, grade.begin() + 3); // erase range (2nd to 3rd)

    grade.clear();                  // remove all elements

    // check vector is empty or not
    cout << student.empty() << endl;  // output : 0 (because student vector hase value in it)

    // Vector iterator 
    cout << *(student.begin()) << endl; // as iterator is a pointer so, we need to dereference them by * (asterisk) to get the value
    cout << *(student.end()) << endl;
    cout << *(student.rbegin()) << endl;
    cout << *(student.rend()) << endl;

    vector<int>::iterator it;
    for (it = marks.begin(); it != marks.end(); it++) { // access value ascending order 
      cout << *(it) << " ";
    }

    vector<int>::reverse_iterator it2;
    for (it2 = marks.rbegin(); it2 != marks.rend(); it2++) {
      cout << *(it2) << " ";
    }

    for (auto it3 = marks.rbegin(); it3 != marks.rend(); it3++) {
      cout << *(it3) << " ";
    }

    // size and capacity
    cout << marks.size() << endl;
    cout << marks.capacity() << endl;

  return 0;
}