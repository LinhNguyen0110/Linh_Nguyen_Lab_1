#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double a, b, c;
	cin >> a >> b >> c;
	if (b * b - 4 * a * c < 0) {
		cout << "No result" << endl;
	}
	else if (b * b - 4 * a * c == 0) {
		double p = (-1) * b / (2 * a);
			cout << "Result is :" << p << endl;
	}
	else if (b * b - 4 * a * c > 0) {
		double delta = sqrt(b * b - 4 * a * c);
		double p1 = (delta - b) / (2 * a);
		double p2 = (delta + b) / (2 * a);
		cout << "Result is :" << p1 << " " << p2 << endl;
	}
}