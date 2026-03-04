//#include <iostream>
//
//// 高精度相关，暂时不用
//unsigned long long calc(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	else {
//		return n * calc(n - 1);
//	}
//}
//
//int main() {
//	unsigned long long  sum = 0;
//	int n = 0;
//	std::cin >> n;
//	for (int i = 1; i <= n; i++) {
//		sum += calc(i);
//	}
//	std::cout << sum;
//}