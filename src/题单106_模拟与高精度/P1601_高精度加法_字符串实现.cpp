//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <vector>
//
//// 高精度加法
//std::string calc(std::string num1, std::string num2) {
//	std::vector<int> res(std::max(num1.size(), num2.size() + 1), 0), num1_vec(num1.size(), 0), num2_vec(num2.size(), 0);
//	std::string res_str;
//	int cd = 0;
//	for (int i = 0; i < num1.size(); i++) {
//		num1_vec[i] = num1[i] - '0';
//	}
//	for (int i = 0; i < num2.size(); i++) {
//		num2_vec[i] = num2[i] - '0';
//	}
//	std::reverse(num1_vec.begin(), num1_vec.end());
//	std::reverse(num2_vec.begin(), num2_vec.end());
//	if (num1_vec.size() < num2_vec.size()) {
//		while (num1_vec.size() < num2_vec.size()) {
//			num1_vec.push_back(0);
//		}
//	}
//	if (num1_vec.size() > num2_vec.size()) {
//		while (num1_vec.size() > num2_vec.size()) {
//			num2_vec.push_back(0);
//		}
//	}
//	for (int i = 0; i < num1_vec.size(); i++) {
//		if ((num1_vec[i] + num2_vec[i]) >= 10){
//			res[i] += (num1_vec[i] + num2_vec[i]) % 10;
//			res[i + 1] += (num1_vec[i] + num2_vec[i]) / 10;
//			continue;
//		}
//		else {
//			res[i] += (num1_vec[i] + num2_vec[i]);
//		}
//	}
//	for (int i = 0; i < res.size(); i++) {
//		if (res[i] >= 10) {
//			res[i] = 0;
//			res[i + 1] += 1;
//		}
//	}
//	std::reverse(res.begin(), res.end());
//	while (res[0] == 0 && res.size() > 1) {
//		res.erase(res.begin());
//	}
//	for (int i = 0; i < res.size(); i++) {
//		res_str += std::to_string(res[i]);
//	}
//	return res_str;
//}
//
//int main() {
//	std::string num1, num2;
//	//int carry = 0;
//	std::cin >> num1 >> num2;
//	//std::string result(std::max(num1.size(), num2.size()) + 1, '0');
//	//// 加入前导零，将两个字符串等长可以简化代码
//	//std::reverse(num1.begin(), num1.end());
//	//std::reverse(num2.begin(), num2.end());
//	//for (int i = 0; i < std::min(num1.size(), num2.size()); i++) {
//	//	// 可以通过(int)num - ‘0’，再将数字放入数组进行计算
//	//	if (((int)num1[i] + (int)num2[i] - 96) + carry >= 10) {
//	//		result[i] = (char)(((int)num1[i] - 58 + (int)num2[i] + carry));
//	//		carry = 1;
//	//	}
//	//	else {
//	//		result[i] = (char)(((int)num1[i] + (int)num2[i]) + carry - 48);
//	//		carry = 0;
//	//	}
//	//}
//	//if (num1.size() == num2.size()) {
//	//	if (carry == 1) {
//	//		result[num1.size()] = '1';
//	//		carry = 0;
//	//	}
//	//}
//	//else if (num1.size() > num2.size()){
//	//	for (int i = num2.size(); i < num1.size(); i++) {
//	//		if ((int)num1[i] + carry - 48 >= 10) {
//	//			result[i] = (char)((int)num1[i] + carry - 10);
//	//			carry = 1;
//	//		}
//	//		else {
//	//			result[i] = (char)((int)num1[i] + carry);
//	//			carry = 0;
//	//		}
//	//	}
//	//	if (carry == 1) {
//	//		result[num1.size()] = '1';
//	//		carry = 0;
//	//	}
//	//}
//	//else if (num1.size() < num2.size()) {
//	//	for (int i = num1.size(); i < num2.size(); i++) {
//	//		if ((int)num2[i] + carry - 48 >= 10) {
//	//			result[i] = (char)((int)num2[i] + carry - 10);
//	//			carry = 1;
//	//		}
//	//		else {
//	//			result[i] = (char)((int)num2[i] + carry);
//	//			carry = 0;
//	//		}
//	//	}
//	//	if (carry == 1) {
//	//		result[num2.size()] = '1';
//	//		carry = 0;
//	//	}
//	//}
//	//while (result[result.size() - 1] == '0' && result.size() > 1) {
//	//	result.pop_back();
//	//}
//	//std::reverse(result.begin(), result.end());
//	std::cout << calc(num1, num2) << std::endl;
//}