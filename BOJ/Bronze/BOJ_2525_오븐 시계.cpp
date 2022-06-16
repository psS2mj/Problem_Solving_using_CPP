#include <iostream>
using namespace std;
int a, b, c, quo, mod;
int main() {
	cin >> a >> b;
	cin >> c;

	quo = c / 60;
	mod = c % 60;

	a += quo;
	b += mod;

	if (b >= 60) {
		a++;
		b -= 60;
	}

	if (a >= 24) {
		a -= 24;
	}

	cout << a << " " << b;

	return 0;
}