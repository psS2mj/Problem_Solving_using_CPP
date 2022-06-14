// scanf, printf (소수점 이하 9자리 표기)
#include <stdio.h>
using namespace std;
double a, b;
int main() {
	scanf("%lf %lf",&a,&b);
	printf("%.9lf",a/b);
	return 0;
}

// cin, cout (precision 9일 때는 오답, 10부터는 정답인 듯)
#include <iostream>
using namespace std;
double a, b;
int main() {
	cin >> a >> b;
	cout.precision(12);
	cout << a / b;
	return 0;
}