/*
vector : Declare Different Type of vectors
*/

#include <iostream>
#include <vector>                                   // Header file of vector
using namespace std;

int main() {

    vector<int> marks;                              // Declare

    vector<char> grade = {'a', 'b', 'c', 'd', 'e'}; // Declare and Initialize with value

    vector<bool> isPassed(5, true);                 // size 5, all value initialize as true

    vector<string> student(5);                      // Declare
    student[0] = "Samiul";                          // Initialize through index
    student[1] = "Nawshin";
    student[2] = "Simanto";
    cin >> student[3];                              // Input 
    vector<double> gpa = {3.88, 3.40, 3.42};        // Declare and Initialize with value


    for (char c : grade) {                          // Access vector elements through loop
        cout << c << endl;
    }

  return 0;
}