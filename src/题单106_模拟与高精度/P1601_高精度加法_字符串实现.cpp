//#include <iostream>
//#include <string>
//#include <algorithm>
//
//int main() {
//	std::string num1, num2;
//	int carry = 0;
//	std::cin >> num1 >> num2;
//	std::string result(std::max(num1.size(), num2.size()) + 1, '0');
//	// 加入前导零，将两个字符串等长可以简化代码
//	std::reverse(num1.begin(), num1.end());
//	std::reverse(num2.begin(), num2.end());
//	for (int i = 0; i < std::min(num1.size(), num2.size()); i++) {
//		// 可以通过(int)num - ‘0’，再将数字放入数组进行计算
//		if (((int)num1[i] + (int)num2[i] - 96) + carry >= 10) {
//			result[i] = (char)(((int)num1[i] - 58 + (int)num2[i] + carry));
//			carry = 1;
//		}
//		else {
//			result[i] = (char)(((int)num1[i] + (int)num2[i]) + carry - 48);
//			carry = 0;
//		}
//	}
//	if (num1.size() == num2.size()) {
//		if (carry == 1) {
//			result[num1.size()] = '1';
//			carry = 0;
//		}
//	}
//	else if (num1.size() > num2.size()){
//		for (int i = num2.size(); i < num1.size(); i++) {
//			if ((int)num1[i] + carry - 48 >= 10) {
//				result[i] = (char)((int)num1[i] + carry - 10);
//				carry = 1;
//			}
//			else {
//				result[i] = (char)((int)num1[i] + carry);
//				carry = 0;
//			}
//		}
//		if (carry == 1) {
//			result[num1.size()] = '1';
//			carry = 0;
//		}
//	}
//	else if (num1.size() < num2.size()) {
//		for (int i = num1.size(); i < num2.size(); i++) {
//			if ((int)num2[i] + carry - 48 >= 10) {
//				result[i] = (char)((int)num2[i] + carry - 10);
//				carry = 1;
//			}
//			else {
//				result[i] = (char)((int)num2[i] + carry);
//				carry = 0;
//			}
//		}
//		if (carry == 1) {
//			result[num2.size()] = '1';
//			carry = 0;
//		}
//	}
//	while (result[result.size() - 1] == '0' && result.size() > 1) {
//		result.pop_back();
//	}
//	std::reverse(result.begin(), result.end());
//	std::cout << result << std::endl;
//}