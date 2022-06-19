#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
	vector<int> answer;

	for (vector<int> v : commands) {
		vector<int> temp;
		int i = v[0];
		int j = v[1];
		int k = v[2];

		for (int m = i; m <= j; m++) {
			temp.push_back(array[m - 1]);
		}
		sort(temp.begin(), temp.end());
		answer.push_back(temp[k - 1]);
	}

	return answer;
}