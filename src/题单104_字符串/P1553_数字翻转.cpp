//#include <iostream>
//#include <string>
//#include <algorithm>
//
//std::string eraseZero(std::string str) {
//	while (str[0] == '0') {
//		str.erase(0, 1);
//	}
//	return str;
//}
//
//std::string eraseZeroR(std::string str) {
//	while (str[str.size() - 1] == '0') {
//		str.erase(str.size() - 1, 1);
//	}
//	return str;
//}
//
//int main() {
//	std::string num;
//	std::string firstPart, secondPart;
//	std::cin >> num;
//	// std::string::npos为find未找到返回的值，被定义为size_t的最大值
//	if (num.find(".") != std::string::npos) {
//		if(num.find(".") != 0)
//		{
//			firstPart = num.substr(0, num.find("."));
//			firstPart = eraseZero(firstPart);
//			std::reverse(firstPart.begin(), firstPart.end());
//			firstPart = eraseZero(firstPart);
//			if (firstPart == "") {
//				firstPart = "0";
//			}
//		}
//		else {
//			firstPart = "0";
//		}
//		secondPart = num.substr(num.find(".") + 1, num.size() - num.find("."));
//		secondPart = eraseZeroR(secondPart);
//		std::reverse(secondPart.begin(), secondPart.end());
//		secondPart = eraseZeroR(secondPart);
//		if (firstPart == "0" && secondPart == "0") {
//			std::cout << "0";
//			return 0;
//		}
//		std::cout << firstPart << "." << secondPart;
//		return 0;
//	}
//	else if (num.find("/") != std::string::npos) {
//		if (num.find("/") != 0)
//		{
//			firstPart = num.substr(0, num.find("/"));
//			firstPart = eraseZero(firstPart);
//			std::reverse(firstPart.begin(), firstPart.end());
//			firstPart = eraseZero(firstPart);
//			if (firstPart == "") {
//				firstPart = "0";
//			}
//		}
//		else {
//			firstPart = "0";
//		}
//		secondPart = num.substr(num.find("/") + 1, num.size() - num.find("/"));
//		secondPart = eraseZeroR(secondPart);
//		std::reverse(secondPart.begin(), secondPart.end());
//		secondPart = eraseZeroR(secondPart);
//		if (firstPart == "0" && secondPart == "0") {
//			std::cout << "0";
//			return 0;
//		}
//		std::cout << firstPart << "/" << secondPart;
//		return 0;
//	}
//	else if (num.find("%") != std::string::npos){
//		if (num.find("%") != 0)
//		{
//			firstPart = num.substr(0, num.find("%"));
//			firstPart = eraseZero(firstPart);
//			std::reverse(firstPart.begin(), firstPart.end());
//			firstPart = eraseZero(firstPart);
//			if (firstPart == "") {
//				firstPart = "0";
//			}
//		}
//		else {
//			firstPart = "0";
//		}
//		std::cout << firstPart << "%";
//		return 0;
//	}
//	else {
//		num = eraseZero(num);
//		std::reverse(num.begin(), num.end());
//		num = eraseZero(num);
//		if (num == "") {
//			num = "0";
//		}
//		std::cout << num << std::endl;
//		return 0;
//	}
//}