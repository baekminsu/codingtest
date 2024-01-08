#include <iostream>
using namespace std;
int main() {

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		int result = 0;
		int capacity[3];
		int mincapacity[50][3];
		int min = 0;
		for (int j = 0; j < n; j++) {
			int capacity[3] = {0,};

			for (int k = 0; k < 3; k++) {
				cin >> capacity[k];
			}
			if (n < 3) {
				break;
			}
			else {
				mincapacity[j][0] = capacity[0] + capacity[0];
				mincapacity[j][1] = capacity[0] + capacity[1];
				mincapacity[j][2] = capacity[1] + capacity[2];
			}
		}
		if (n < 3) {
			cout << "#" << i + 1 << " " << -1;
			continue;
		}
		
		for (int j = 0; j < n; j++) {
			min = mincapacity[j][0];
			for (int k = 0; k < 3; k++) {
				

			}
		}


	}


	return 0;
}
