#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string a, b;
int main() {
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	stoi(a);
	stoi(b);
	if (a > b) cout << a;
	else cout << b;
	return 0;
}