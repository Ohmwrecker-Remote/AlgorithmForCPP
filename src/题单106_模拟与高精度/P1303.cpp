#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string num1, num2;
    std::cin >> num1 >> num2;
    int cd = 0;
    std::vector<int> num1_vec(num1.size(),0), num2_vec(num2.size(),0), result(num1_vec.size() + num2_vec.size(),0);
    for (int i = 0; i < num1.size(); i++) {
        num1_vec[i] = num1[i] - '0';
    }
    for (int i = 0; i < num2.size(); i++) {
        num2_vec[i] = num2[i] - '0';
    }
    if (num1_vec.size() <= num2_vec.size()) {
        for (int j = num1_vec.size() - 1; j >= 0; j--) {
            for (int i = num2_vec.size() - 1; i >= 0; i--) {
                result[result.size() - (num2.size() - i)] += num1_vec[j] * num2_vec[i];
            }
        }
    }
    for (int i = result.size() - 1; i >= 0; i--) {
        if (cd != 0) {
            result[i] += cd;
            cd = 0;
        }
        cd = result[i] / 10;
        result[i] %= 10;
    }
    for (std::vector<int>::iterator it = result.begin(); it != result.end(); it++) {
        std::cout << *it;
    }
    return 0;
}