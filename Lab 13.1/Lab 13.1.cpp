#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
	cout << "xp = "; cin >> x_p;
	cout << "xk = "; cin >> x_k;
	cout << "dx = "; cin >> dx;
	cout << "e = "; cin >> e;
	cout << endl;
	cout << fixed;
	cout << "-----------------------------------------------------" << endl;
	cout << "|" << setw(7) << setprecision(2) << "x" << " |"
		<< setw(22) << setprecision(5) << "s" << " |"
		<< setw(10) << setprecision(5) << "exp(x)" << " |"
		<< setw(5) << "n" << " |"
		<< endl;

	cout << "-----------------------------------------------------" << endl;
	x = x_p;
	while (x <= x_k) {
		nsSum::sum();
		cout << "|" << setw(7) << setprecision(2) << x << " |"
			<< setw(22) << setprecision(5) << s << " |"
			<< setw(10) << setprecision(5) << exp(x) << " |"
			<< setw(5) << n << " |"
			<< endl;
		// тут слід використовувати форматний вивід
		x += dx;
	}
	cout << "-----------------------------------------------------" << endl;
	cin.get();
	return 0;
}
