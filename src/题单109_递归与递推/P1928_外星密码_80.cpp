//#include <iostream>
//#include <string>
//#include <vector>
//
//// 80分解答
//// 获取[]内的字符并展开,不包括[]外的字符
//std::string unZip(std::string text) {
//	int times{}, start{}, end{};
//	if (text[0] >= 49 && text[0] <= 57 && text[1] >= 48 && text[1] <= 57) {
//		times = (text[0] - 48) * 10 + (text[1] - 48);
//		text = text.substr(2);
//	}
//	else {
//		times = text[0] - 48;
//		text = text.substr(1);
//	}
//	std::string result{}, temp{};
//	if (text.find('[') != std::string::npos){
//		temp = text.substr(0, text.find_first_of('[')) + unZip(text.substr(text.find('[') + 1, (text.find_last_of(']') - text.find_first_of('[') - 1))) + text.substr(text.find_last_of(']') + 1);
//	}
//	else {
//		for (int i = 0; i < times; i++) {
//			result += text;
//		}
//		return result;
//	}
//	for (int i = 0; i < times; i++) {
//		result += temp;
//	}
//	return result;
//}
//
//int main() {
//	std::string text{};
//	std::vector<std::string> result;
//	std::getline(std::cin, text);
//	int bracket{}, start{}, end{};
//	for (int i = 0; i < text.length(); i++) {
//		if (text.find_first_of('[') == std::string::npos) {
//			result.push_back(text);
//			break;
//		}
//		if (text[i] == '[') {
//			bracket++;
//			if (bracket == 1) {
//				start = i;
//			}
//		}
//		else if (text[i] == ']') {
//			bracket--;
//		}
//		if (bracket == 0 && text[i] == ']') {
//			end = i;
//			result.push_back(text.substr(0, start));
//			result.push_back(unZip(text.substr(start + 1, end - start - 1)));
//			text = text.substr(end + 1);
//			bracket = 0;
//			start = 0;
//			end = 0;
//			i = -1;
//		}
//	}
//	for (auto str : result) {
//		std::cout << str;
//	}
//}