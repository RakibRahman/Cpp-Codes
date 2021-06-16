#include <iostream> 

using std::cout;
using std::endl;

//Two or more functions having same name but different argument(s) are known as overloaded functions.

void output(int i) {
	cout << " Here is int " << i << endl;
}
void output(double f) {
	cout << " Here is float " << f << endl;
}
void output(char const* c) {
	cout << " Here is char* " << c << endl;
}

int main() {
	output(10);
	output(10.10);
	output("ten");
	return 0;
}
