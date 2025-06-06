// Temperature Converter: Fahrenheit to Celsius
#include <bits/stdc++.h>
using namespace std;
double FtoC(double F) {
  double C = (F-32)*5/9;
  return C;
}
int main() {

    double tempF = 98.0;
    cout << "Temperature in Fahrenheit: " << tempF << endl;
    cout << fixed << setprecision(2) << "Temperature in Celcius: " << FtoC(tempF) << endl;

  return 0;
} 