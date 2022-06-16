#include <iostream>
#include <string>
#include <string.h> // 백준 'memset' was not declared in this scope 컴파일 에러나서 추가
using namespace std;
int a, b, c, temp;
int arr[10];
int main() {
	cin >> a >> b >> c;
	temp = a * b * c;

	memset(arr, 0, sizeof(arr));
	string str = to_string(temp);
	for (int i = 0; i < str.length(); i++) {
		arr[str[i] - '0']++; // str[i]는 char type
	}
	for (int i : arr) cout << i << "\n";

	return 0;
}