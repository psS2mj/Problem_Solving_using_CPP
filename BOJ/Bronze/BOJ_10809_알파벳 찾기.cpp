#include <iostream>
#include <string.h> // memset
#include <algorithm>
using namespace std;
string s;
int arr[26];
int main() {
	cin >> s;

	memset(arr, -1, sizeof(arr));
	for (int i = 0; i < s.length(); i++) {
		arr[s[i] - 'a'] = s.find(s[i]);
	}

	for (int i : arr) cout << i << " ";

	return 0;
}