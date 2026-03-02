//#include <iostream>
//
//int main() {
//	int m, t, s;
//	std::cin >> m >> t >> s;
//	if (t == 0) {
//		std::cout << 0 << std::endl;
//	}
//	else if (s % t != 0) {
//		if (m - (s / t) - 1 <= 0) {
//			std::cout << 0 << std::endl;
//			return 0;
//		}
//		std::cout << m - (s / t) - 1 << std::endl;
//		return 0;
//	}
//	else {
//		if (m - (s / t) <= 0) {
//			std::cout << 0 << std::endl;
//			return 0;
//		}
//		std::cout << m - (s / t) << std::endl;
//		return 0;
//	}
//}