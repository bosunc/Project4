#include <iostream>

using namespace std;

int main() {
	int count;
	cout << "fibonacci sequence input (1~20) : ";
	cin >> count;

	if (count < 1 || count > 20) {
		cout << "input error" << endl;
		return 1;

	}

	int fib[20];

	fib[0] = 1;
	fib[1] = 1;

	for (int i = 2; i < count; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (int i = 0; i < count; i++) {
		cout << fib[i];
		if (i != count - 1)
			cout << " ";

	}
	cout << endl;
	return 0;

}