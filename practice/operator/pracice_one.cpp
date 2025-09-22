#include <iostream>


//* Toán tử quan hệ
//* < > >= <= == !=
//* Toán tử logic
//* (&& - AND) (|| - OR) (! - NOT)


int main()
{
	int a, b;
	std::cin >> a >> b;
	// Toán tử quan hệ
	std::cout << (a < b) << std::endl;   // a nhỏ hơn b
	std::cout << (a > b) << std::endl;   // a lớn hơn b
	std::cout << (a <= b) << std::endl;  // a nhỏ hơn hoặc bằng b
	std::cout << (a >= b) << std::endl;  // a lớn hơn hoặc bằng b
	std::cout << (a == b) << std::endl;  // a bằng b
	std::cout << (a != b) << std::endl;  // a khác b
	// Toán tử logic
	std::cout << ((a < b) && (a != 0)) << std::endl; // AND
	std::cout << ((a < b) || (a != 0)) << std::endl; // OR
	std::cout << !(a < b) << std::endl;               // NOT

	bool a = true && true; // true
	bool b = true && false; // false
	bool c = true || false; // true
	bool d = false || false; // false
	bool e = !true; // false
	bool f = !false; // true

	return 0;
}