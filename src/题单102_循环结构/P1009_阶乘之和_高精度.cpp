//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <chrono>
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
//		if ((num1_vec[i] + num2_vec[i]) >= 10) {
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
//// 高精度乘法
//std::string time(std::string num1, std::string num2) {
//    int cd = 0;
//    std::vector<int> num1_vec(num1.size(), 0), num2_vec(num2.size(), 0), result(num1_vec.size() + num2_vec.size(), 0);
//    std::string res_str;
//    // 将字符串转换为整数数组
//    for (int i = 0; i < num1.size(); i++) {
//        num1_vec[i] = num1[i] - '0';
//    }
//    for (int i = 0; i < num2.size(); i++) {
//        num2_vec[i] = num2[i] - '0';
//    }
//    if (num1_vec.size() <= num2_vec.size()) {
//        for (int j = num1_vec.size() - 1; j >= 0; j--) {
//            for (int i = num2_vec.size() - 1; i >= 0; i--) {
//                result[result.size() - (num2.size() - i) - (num1_vec.size() - j - 1)] += (num1_vec[j] * num2_vec[i]) % 10;
//                result[result.size() - (num2.size() - i) - 1 - (num1_vec.size() - j - 1)] += (num1_vec[j] * num2_vec[i]) / 10;
//            }
//        }
//    }
//    else if (num1_vec.size() > num2_vec.size()) {
//        for (int j = num2_vec.size() - 1; j >= 0; j--) {
//            for (int i = num1_vec.size() - 1; i >= 0; i--) {
//                result[result.size() - (num1.size() - i) - (num2_vec.size() - j - 1)] += (num2_vec[j] * num1_vec[i]) % 10;
//                result[result.size() - (num1.size() - i) - 1 - (num2_vec.size() - j - 1)] += (num2_vec[j] * num1_vec[i]) / 10;
//            }
//        }
//    }
//    for (int i = result.size() - 1; i >= 0; i--) {
//        if (cd != 0) {
//            result[i] += cd;
//            cd = 0;
//        }
//        cd = result[i] / 10;
//        result[i] %= 10;
//    }
//    while (result[0] == 0 && result.size() > 1) {
//        result.erase(result.begin());
//    }
//    for (int i = 0; i < result.size(); i++) {
//        res_str += std::to_string(result[i]);
//    }
//    return res_str;
//}
//
//std::string jieCheng(std::string num) {
//	std::string res = num;
//	for (int i = std::stoi(num) - 1; i > 1; i--) {
//		res = time(res,std::to_string(i));
//	}
//	return res;
//}
//
//
//int main() {
//	std::chrono::high_resolution_clock::time_point start, end;
//	std::string num, res;
//	std::cin >> num;
//	start = std::chrono::high_resolution_clock::now();
//	for (int i = std::stoi(num); i >= 1; i--) {
//		res = calc(res, jieCheng(std::to_string(i)));
//	}
//	end = std::chrono::high_resolution_clock::now();
//	std::cout << res << std::endl;
//	std::cout << "Time used: " << std::chrono::duration_cast<std::chrono::milliseconds>(end - start).count() << " milliseconds" << std::endl;
//}