//#include <iostream>
//#include <vector>
//#include <iomanip>
//
//int main() {
//	int n, k;
//	double sumA = 0, sumB = 0;
//	std::cin >> n >> k;
//	std::vector<int> a, b;
//	for (int i = 1; i <= n; i++) {
//		if (i % k == 0) {
//			// 使用vector自带的push_back方法添加元素
//			a.push_back(i);
//		}
//		else {
//			b.push_back(i);
//		}
//	}
//	for (std::vector<int>::iterator it = a.begin(); it != a.end(); it++) {
//		sumA += *it;
//	}
//	std::cout << std::fixed << std::setprecision(1) << sumA / a.size() << "";
//	for (std::vector<int>::iterator it = b.begin(); it != b.end(); it++) {
//		sumB += *it;
//	}
//	std::cout << " " << std::fixed << std::setprecision(1) << sumB / b.size();
//}