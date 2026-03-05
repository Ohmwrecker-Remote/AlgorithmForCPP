//#include <iostream>
//#include <algorithm>
//#include <string>
//
//int main() {
//	int num[3] = { 0 };
//	std::string ch;
//	std::cin >> num[0] >> num[1] >> num[2];
//	std::cin >> ch;
//	std::sort(num, num + 3);
//	if (ch == "ABC") {
//		std::cout << num[0] << " " << num[1] << " " << num[2] << std::endl;
//	}
//	else if (ch == "ACB") {
//		std::cout << num[0] << " " << num[2] << " " << num[1] << std::endl;
//	}
//	else if (ch == "BAC") {
//		std::cout << num[1] << " " << num[0] << " " << num[2] << std::endl;
//	}
//	else if (ch == "BCA") {
//		std::cout << num[1] << " " << num[2] << " " << num[0] << std::endl;
//	}
//	else if (ch == "CAB") {
//		std::cout << num[2] << " " << num[0] << " " << num[1] << std::endl;
//	}
//	else if (ch == "CBA") {
//		std::cout << num[2] << " " << num[1] << " " << num[0] << std::endl;
//	}
//}