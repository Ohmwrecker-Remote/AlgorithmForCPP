//#include <iostream>
//#include <string>
//
//void elevenPoint(std::string& str) {
//    int W = 0, L = 0;
//    for (int i = 0; i < str.length(); i++) {
//        if (str[i] == 'W') {
//            W++;
//        }
//        if (str[i] == 'L') {
//            L++;
//        }
//        if ((W >= 11 || L >= 11 || i == str.length() - 1 ) && std::abs(W - L) >= 2) {
//            std::cout << W << ":" << L << std::endl;
//            W = 0;
//            L = 0;
//        }
//    }
//    if (W != 0 || L != 0) {
//        std::cout << W << ":" << L << std::endl;
//    }
//    if (W == 0 && L == 0 && str.length() == 0) {
//        std::cout << W << ":" << L << std::endl;
//    }
//}
//
//void twentyOnePoint(std::string& str) {
//    int W = 0, L = 0;
//    for (int i = 0; i < str.length(); i++) {
//        if (str[i] == 'W') {
//            W++;
//        }
//        if (str[i] == 'L') {
//            L++;
//        }
//        if ((W >= 21 || L >= 21 || i == str.length() - 1 ) && std::abs(W - L) >= 2) {
//            std::cout << W << ":" << L << std::endl;
//            W = 0;
//            L = 0;
//        }
//    }
//    if (W != 0 || L != 0) {
//        std::cout << W << ":" << L << std::endl;
//    }
//    if (W == 0 && L == 0 && str.length() == 0) {
//        std::cout << W << ":" << L << std::endl;
//    }
//}
//
//int main() {
//    char c;
//    std::string str;
//    // 一个字符一个字符读入
//    while (std::cin >> c) {
//        if (c == 'E') {
//            break;
//        }
//        str += c;
//    }
//    elevenPoint(str);
//    std::cout << std::endl;
//    twentyOnePoint(str);
//}