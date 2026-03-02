//#include <iostream>
//
//int main (){
//	int year, month;
//	bool isLeapYear = false;
//	std::cin >> year >> month;
//	if (year % 4 == 0 && year % 100 != 0) {
//		isLeapYear = true;
//	}
//	if (year % 100 == 0 && year % 400 == 0) {
//		isLeapYear = true;
//	}
//	if (month == 2 && isLeapYear) {
//		std::cout << "29\n";
//		return 0;
//	}
//	if (month == 2) {
//		std::cout << "28\n";
//	}
//	if (month == 4 || month == 6 || month == 9 || month == 11) {
//		std::cout << "30\n";
//	}
//	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
//		std::cout << "31\n";
//	}
//}