// scanf, printf (�Ҽ��� ���� 9�ڸ� ǥ��)
#include <stdio.h>
using namespace std;
double a, b;
int main() {
	scanf("%lf %lf",&a,&b);
	printf("%.9lf",a/b);
	return 0;
}

// cin, cout (precision 9�� ���� ����, 10���ʹ� ������ ��)
#include <iostream>
using namespace std;
double a, b;
int main() {
	cin >> a >> b;
	cout.precision(12);
	cout << a / b;
	return 0;
}