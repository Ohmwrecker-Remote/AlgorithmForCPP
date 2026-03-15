//#include <iostream>
//#include <vector>
//#include <string>
//
//int main() {
//	int a, b, c, count{}, num1{}, num2{}, num3{};
//	std::vector<std::string> result;
//	std::cin >> a >> b >> c;
//	for (int i = 1; i < 1000; i++) {
//		// 修改版，使用i乘以比例，抛弃三重循环寻找
//		num1 = a * i;
//		num2 = b * i;
//		num3 = c * i;
//		if (num3 < 1000) {
//			std::string temp = std::to_string(num1) + std::to_string(num2) + std::to_string(num3);
//			std::vector<int> nums(9, 0);
//			// 0 == 48
//			if (temp.find('0') != std::string::npos) {
//				continue;
//			}
//			for (int l = 0; l < temp.size(); l++) {
//				nums[temp[l] - 49] += 1;
//			}
//			for (int l = 0; l < 9; l++) {
//				if (nums[l] != 1) {
//					break;
//				}
//				if (l == 8) {
//					std::string temp2 = std::to_string(num1) + " " + std::to_string(num2) + " " + std::to_string(num3);
//					result.push_back(temp2);
//					count++;
//				}
//			}
//		}
//	}
//	if (count == 0) {
//		std::cout << "No!!!" << std::endl;
//	}
//	else {
//		for (int i = 0; i < result.size(); i++) {
//			std::cout << result[i] << std::endl;
//		}
//	}
//}