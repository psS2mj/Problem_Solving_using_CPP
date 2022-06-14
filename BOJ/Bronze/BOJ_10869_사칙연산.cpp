// cin, cout
#include <iostream>
using namespace std;
int a, b;
int main() {
	cin >> a >> b;
	cout << a+b << "\n" << a-b << "\n" << a*b << "\n" << a/b << "\n" << a%b;
	return 0;
}

// scanf, printf
#include <stdio.h>
using namespace std;
int a, b;
int main() {
	scanf("%d %d",&a,&b);
	printf("%d\n%d\n%d\n%d\n%d",a+b,a-b,a*b,a/b,a%b);
	return 0;
}