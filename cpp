
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
  double x, y, r1, r2, xp, xk, dx;
  double inside = true;
  double outside = false;

cout << "x = "; cin >> x;
cout << "y = "; cin >> y;
cout << "r1 = "; cin >> r1;
cout << "r2 = "; cin >> r2;
cout << "xp = "; cin >> xp;
cout << "xk = "; cin >> xk;
cout << "dx = "; cin >> dx;

cout << fixed;
cout << "---------------------------" << endl;
cout << "|" << setw(5) << "x" << " |"
<< setw(7) << "y" << " |" << endl;
cout << "--------------------------- " << endl;
x = xp;
while (x <= xk) {
if (x >= 0 && y >= 0 && (sqrt(x * x + y * y) <= r2 * r2) && (sqrt(x * x + y * y) >= r1 * r1)) {
inside = true;
}
else if (x <= 0 && y <= 0 && (sqrt(x * x + y * y) <= r2 * r2)) {
inside = true;
}
else outside = false;
cout << "|" << setw(7) << setprecision(2) << x
<< " |" << setw(10) << setprecision(3) << y
<< " |" << endl;
x += dx;
cout << "---------------------------" << endl;
if (inside) {
  cout << "yes" << inside << endl;
} else
  cout << "not " << outside << endl;
}
cin.get();
    return 0;
}
