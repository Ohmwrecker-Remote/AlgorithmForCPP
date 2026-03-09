//#include <iostream>
//#include <string>
//#include <vector>
//
//int main() {
//    std::string num1, num2;
//    std::cin >> num1 >> num2;
//    int cd = 0;
//    std::vector<int> num1_vec(num1.size(),0), num2_vec(num2.size(),0), result(num1_vec.size() + num2_vec.size(),0);
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
//    }else if (num1_vec.size() > num2_vec.size()) {
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
//        std::cout << result[i];
//    }
//    return 0;
//}