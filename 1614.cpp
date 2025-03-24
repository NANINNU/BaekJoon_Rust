#include <iostream>

using namespace std;

int main() {
	int finger, availcnt;
	int cnt = 0;
	cin >> finger;
	cin >> availcnt;
	switch (finger) {
		//엄지 손가락
	case 1:
		if (availcnt == 0) 
			cout << 0 << endl;
		else {
			cnt = 1 + 8 * availcnt - 1;
			cout << cnt << endl;
		}
		return 0;
		//검지 손가락
	case 2:
		if (availcnt == 0)
			cout << 1 << endl;
		else {
			if (availcnt % 2 == 0)
				cnt = 2 + 6 * (availcnt / 2) + 2 * (availcnt / 2) - 1;
			else
				cnt = 2 + 6 * (availcnt / 2 + 1) + 2 * (availcnt / 2) - 1;
			cout << cnt << endl;
		}
		return 0;
		//중지 손가락
	case 3:
		if (availcnt == 0)
			cout << 2 << endl;
		else {
			cnt = 3 + 4 * availcnt - 1;
			cout << cnt << endl;
		}
		return 0;
		//약지 손가락
	case 4:
		if (availcnt == 0)
			cout << 3 << endl;
		else {
			if (availcnt % 2 == 0)
				cnt = 4 + 2 * (availcnt / 2) + 6 * (availcnt / 2) - 1;
			else
				cnt = 4 + 2 * (availcnt / 2 + 1) + 6 * (availcnt / 2) - 1;
			cout << cnt << endl;
		}
		return 0;
		//새끼 손가락
	case 5:
		if (availcnt == 0)
			cout << 4 << endl;
		else {
			cnt = 5 + 8 * availcnt - 1;
			cout << cnt << endl;
		}
		return 0;

	}
}
