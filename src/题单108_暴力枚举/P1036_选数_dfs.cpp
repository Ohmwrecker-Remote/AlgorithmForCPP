//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cmath>
//
//static int result = 0;
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
//// dfsË¼Ïë
//void dfs(int need_num, int current_sum, int current_start, std::vector<int>& num) {
//	int c = current_sum + num[current_start];
//	if (isPrime(c) && need_num == 1) {
//		result++;
//		return;
//	}
//	for (int i = current_start + 1; i < num.size(); i++) {
//		dfs(need_num - 1, c, i, num);
//	}
//}
//
//int main() {
//	int n, k;
//	std::cin >> n >> k;
//	std::vector<int> num(n);
//	for (int i = 0; i < n; i++) {
//		std::cin >> num[i];
//	}
//	for (int i = 0; i < num.size(); i++) {
//		dfs(k, 0, i, num);
//	}
//	std::cout << result << std::endl;
//}