//#include <iostream>
//#include <map>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//int main() {
//    std::vector<int> num;
//    std::string word;
//    std::map<std::string, int> strToInt = {
//        {"a",         1},
//        {"one",       1},
//        {"first",     1},
//        {"another",   1},
//        {"two",       2},
//        {"second",    2},
//        {"both",      2},
//        {"three",     3},
//        {"third",     3},
//        {"four",      4},
//        {"five",      5},
//        {"six",       6},
//        {"seven",     7},
//        {"eight",     8},
//        {"nine",      9},
//        {"ten",       10},
//        {"eleven",    11},
//        {"twelve",    12},
//        {"thirteen",  13},
//        {"fourteen",  14},
//        {"fifteen",   15},
//        {"sixteen",   16},
//        {"seventeen", 17},
//        {"eighteen",  18},
//        {"nineteen",  19},
//        {"twenty",    20}
//    };
//    for (int i = 6; i > 0; i--) {
//        std::cin >> word;
//        for (std::string::iterator it = word.begin(); it != word.end(); it++) {
//            *it = std::tolower(*it);
//        }
//        if (strToInt.count(word)) {
//            num.push_back((strToInt[word] * strToInt[word]) % 100);
//        }
//    }
//    if (num.size() == 0) {
//        std::cout << 0;
//        return 0;
//    }
//    std::sort(num.begin(), num.end());
//    word.clear();
//    for (std::vector<int>::iterator it = num.begin(); it != num.end(); it++) {
//        // 非常重要
//        if (*it < 10 && !word.empty())
//        {
//            word += "0";//加先导零
//        }
//        word += std::to_string(*it);
//    }
//    while (word[0] == '0') {
//        word.erase(0, 1);
//    }
//    if (word.size() == 0) {
//        std::cout << 0;
//        return 0;
//    }
//    std::cout << word;
//}