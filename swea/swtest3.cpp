#include <iostream>
using namespace std;
int main() {

	int T;
	int n;
	int mid;
	int result;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> n;
		int abc[3] = { 0, };
		int check[3] = { 0, };
		result = 0;
		for (int j = 0; j < 3; j++) {
			cin >> abc[j];
		}

		mid = abc[0] + abc[1];
		if (mid > (abc[0] + abc[2])) {
			mid = abc[0] + abc[2];
		}
		if (mid > (abc[1] + abc[2])) {
			mid = abc[1] + abc[2];
		}
		result += mid;


	}
	


	return 0;
}
