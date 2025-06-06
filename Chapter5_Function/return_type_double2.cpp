// Temperature Converter: Celsius to Fahrenheit
#include <bits/stdc++.h>
using namespace std;
double CtoF(double C) {
  double F = C*9/5+32;
  return F;
}
int main() {

    double tempC = 36.66;
    cout << "Temperature in Fahrenheit: " << tempC << endl;
    cout << fixed << setprecision(2) << "Temperature in Celcius: " << CtoF(tempC) << endl;

  return 0;
}