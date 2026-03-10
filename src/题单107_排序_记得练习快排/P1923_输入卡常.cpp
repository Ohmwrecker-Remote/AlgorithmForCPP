//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//int main() {
//
//	// cpp卡常技巧，关闭同步
//	std::ios::sync_with_stdio(false);
//	// 解绑流
//	std::cin.tie(0); std::cout.tie(0);
//	int n{},k{};
//	std::cin >> n >> k;
//	std::vector<int> a(n);
//	for (int i = 0; i < n; ++i) {
//		std::cin >> a[i];
//	}
//	// 将数组排序为两部分，前k个元素和后n-k个元素，第k大的元素位于第k个位置
//	std::nth_element(a.begin(), a.begin() + k, a.end());
//	std::cout << *(a.begin() + k) << std::endl;
//}