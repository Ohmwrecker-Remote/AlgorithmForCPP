//#include <iostream>
//#include <string>
//
//int main() {
//	int opTime = 0, strBegin = 0, strLen = 0;
//	std::string str, op, tempo;
//	std::cin >> opTime >> str;
//	for (int i = opTime; i > 0; i--) {
//		std::cin >> op;
//		if (op == "1") {
//			std::cin >> tempo;
//			str = str + tempo;
//			std::cout << str << std::endl;
//		}
//		else if (op == "2") {
//			std::cin >> strBegin >> strLen;
//			// 截取从strBegin位置开始，长度为strLen的字符串
//			str = str.substr(strBegin , strLen);
//			std::cout << str << std::endl;
//		}
//		else if (op == "3") {
//			std::cin >> strBegin >> tempo;
//			// 从strBegin位置开始，插入tempo
//			str.insert(strBegin , tempo);
//			std::cout << str << std::endl;
//		}
//		else if (op == "4") {
//			std::cin >> tempo;
//			// 查找tempo在str中的位置，rfind为从尾部开始查找
//			if (str.find(tempo) < 0 || str.find(tempo) >= str.size()) {
//				std::cout << -1 << std::endl;
//			}else
//			{
//				std::cout << str.find(tempo) << std::endl;
//			}
//		}
//		tempo.clear();
//	}
//}