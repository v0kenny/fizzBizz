#include <iostream>
#include <string>

int main() {
	int i = 1;
	while(i < 101) {
		if (i % 3 == 0 && i % 5 == 0) {
			std::cout << "FizzBuzz\n";
			i++;
		}
		else if (i % 5 == 0) {
			std::cout << "Buzz\n";
			i++;
		}
		else if (i % 3 == 0) {
			std::cout << "Fizz\n";
			i++;
		}
		else {
			std::cout << i << "\n";
			i++;
		}
	}
}