//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//int main() {
//	int n{}, num{};
//	std::cin >> n;
//	std::vector<int> a(n),b;
//	for (int i = 0; i < n; i++) {
//		std::cin >> a[i];
//	}
//	std::sort(a.begin(), a.end());
//	for (int i = 0; i < n; i++) {
//		if (a[i] == num) {
//			continue;
//		}
//		b.push_back(a[i]);
//		num = a[i];
//	}
//	std::cout << b.size() << std::endl;
//	for (int i = 0; i < b.size(); i++) {
//		std::cout << b[i] << " ";
//	}
//}