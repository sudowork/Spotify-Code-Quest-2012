#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
	unsigned long long a,b;
	while(std::cin >> a >> b)
	{
		if (a > b)
			std::cout << a-b << std::endl;
		else
			std::cout << b-a << std::endl;
	}
	return 0;
}
