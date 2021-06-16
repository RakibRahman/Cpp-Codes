// Finicky Counter
#include <iostream>
using std::cout;
using std::endl;

int main() {
	int count = 0;
	while (true) {
		count++;
		//count +=2; increment by two
		//end loop if number is greater than 10
		if (count > 10) {
			break;
		}
		//skip number 5
		if (count == 5) {
			continue;
		}
		cout << count << endl;

	}
}