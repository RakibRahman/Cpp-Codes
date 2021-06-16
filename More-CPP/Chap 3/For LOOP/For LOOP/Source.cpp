//counter
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
	cout << "Counting Forward:" << endl;
	int	r;
	for (r = 1; r < 11; r++) {
		cout << r << endl;
	}
	cout << "Counting Backward:" << endl;
	
	for (r = 10; r >= 1; r--) {
		cout << r << endl;
	}
	cout << "Counting by five:" << endl;
	for (r = 0; r <= 50; r += 5) {
		cout << r << endl;

	}
	for (r = 1; r <= 100; r += 12) {
		cout <<"Increment by 12:" << endl;
		cout << r << endl;
	}
	for (r = 200; r >= 0; r -= 20) {
		cout << "Decrement by 20: " << endl;
		cout << r << endl;
	}
	int t;
	cout << "Enter a number(1-100) to increment by 3:";
		cin >> t;
		for (t; t <= 100; t += 3) {
			cout << t << endl;
		}
		cout << "Enter a number(1-100) to decrement by 3:";
		cin >> t;
		for (t; t>=0; t -= 3) {
			cout << t << endl;
		}
		cout << "\n\nCounting with null statements:\n";
		int cnt = 1;
		for (; cnt < 11; )
		{
			cout << cnt << " ";
			++cnt;
		}
		cout << "\n\nCounting Backward with null statements:\n";
		int count = 10;
		for (; count >=1; )
		{
			cout << count << " ";
			--count;
		}
		cout << "\n\nNested For Loop:" << endl;
		const int RAWS = 5;
		const int COLUMNS = 3;
		for (int i = 0; i < RAWS; ++i) {
			for (int j = 0; j < COLUMNS; ++j) {
				cout << i << " , " << j << " ";
			}
			cout << endl;
		}
		return 0;
}

