//#include <iostream>
//#include <vector>
//#include <cmath>
//
//bool isPrime(int n) {
//	if (n == 0 || n == 1) {
//		return false;
//	}
//	for (int i = 2; i <= sqrt(n); i++) {
//		if (n % i == 0 && i != n) {
//			return false;
//		}
//	}
//	return true;
//}
//
//int main() {
//	int n = 0;
//	std::cin >> n;
//	std::vector<int> num(n);
//	for (int i = 0; i < n; i++) {
//		std::cin >> num[i];
//	}
//	for (std::vector<int>::iterator it = num.begin(); it != num.end(); it++) {
//		if (!isPrime(*it)) {
//			*it = 0;
//		}
//	}
//	for (std::vector<int>::iterator it = num.begin(); it != num.end(); it++) {
//		if (*it != 0){
//			std::cout << *it << " ";
//		}
//	}
//}