#include <iostream>
using namespace std;
int main() {

	int T;
	int n;
	int mid;
	int result;
	char feature;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> n;
		int abc[3] = { 0, };
		int check[3] = { 0, };
		result = 0;
		for (int k = 0; k < n; k++) {
			for (int j = 0; j < 3; j++) {
				cin >> abc[j];
			}

			mid = abc[0] + abc[1];
			feature = 'a';
			if (mid >= (abc[0] + abc[2])) {
				mid = abc[0] + abc[2];
				if (mid == (abc[0] + abc[2]) && check[2] != 1 && check[1] != 1) {
					feature = 'b';
				}
			}
			if (mid >= (abc[1] + abc[2])) {
				mid = abc[1] + abc[2];
				if (mid == (abc[0] + abc[2]) && check[2] != 1 && check[0] != 1) {
					feature = 'c';
				}
			}

			if (feature == 'a') {
				check[2] = 1;
			}
			else if (feature == 'b') {
				check[1] = 1;
			}
			else if (feature == 'c') {
				check[0] = 1;
			}
			result += mid;
		}


		if (check[0] == 1 && check[1] == 1 && check[2] == 1) {
			cout << "#" << i + 1 << " " << result << "\n";
		}
		else {
			cout << "#" << i + 1 << " -1" << "\n";
		}
	}
	


	return 0;
}
