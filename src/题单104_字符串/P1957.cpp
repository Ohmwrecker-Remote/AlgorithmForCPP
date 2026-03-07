//#include <iostream>
//#include <string>
//
//int main() {
//	int times = 0, op = 0;
//	std::string a, b, judge, out;
//	std::cin >> times;
//	for (int i = times; i > 0; i--) {
//		std::cin >> judge;
//		if (judge == "a") {
//			op = 1;
//			std::cin >> a >> b;
//			out = a + "+" + b + "=" + std::to_string(std::stoi(a) + std::stoi(b));
//			std::cout << out << std::endl;
//			std::cout << out.size() << std::endl;
//		}
//		else if (judge == "b") {
//			op = 2;
//			std::cin >> a >> b;
//			out = a + "-" + b + "=" + std::to_string(std::stoi(a) - std::stoi(b));
//			std::cout << out << std::endl;
//			std::cout << out.size() << std::endl;
//		}
//		else if (judge == "c") {
//			op = 3;
//			std::cin >> a >> b;
//			out = a + "*" + b + "=" + std::to_string(std::stoi(a) * std::stoi(b));
//			std::cout << out << std::endl;
//			std::cout << out.size() << std::endl;
//		}
//		else {
//			a = judge;
//			if (op == 1) {
//				op = 1;
//				std::cin  >> b;
//				out = a + "+" + b + "=" + std::to_string(std::stoi(a) + std::stoi(b));
//				std::cout << out << std::endl;
//				std::cout << out.size() << std::endl;
//			}
//			else if (op == 2) {
//				op = 2;
//				std::cin >> b;
//				out = a + "-" + b + "=" + std::to_string(std::stoi(a) - std::stoi(b));
//				std::cout << out << std::endl;
//				std::cout << out.size() << std::endl;
//			}
//			else if (op == 3) {
//				op = 3;
//				std::cin >> b;
//				out = a + "*" + b + "=" + std::to_string(std::stoi(a) * std::stoi(b));
//				std::cout << out << std::endl;
//				std::cout << out.size() << std::endl;
//			}
//		}
//	}
//}