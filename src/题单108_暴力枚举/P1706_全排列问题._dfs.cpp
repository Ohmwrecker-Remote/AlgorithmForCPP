//#include <iostream>
//#include <vector>
//#include <string>
//
//// dfs思想
//void dfs(int need_num,int start_num, std::vector<int> num, std::vector<std::string> res) {
//	res.push_back("    " + std::to_string(start_num));
//	num[start_num] = 0;
//	// 跳出条件
//	if (need_num == 1) {
//		for (int i = 0; i < res.size(); i++) {
//			std::cout << res[i];
//			if (i == num.size() - 2) {
//				std::cout << std::endl;
//			}
//		}
//		return;
//	}
//	for (int i = 1; i < num.size(); i++) {
//		if (num[i] != 0) {
//			dfs(need_num - 1, i, num, res);
//		}
//	}
//}
//
//int main() {
//	int n;
//	std::cin >> n;
//	std::vector<std::string> res;
//	std::vector<int> num(n + 1, 1);
//	for (int i = 1; i <= n; i++) {
//		dfs(n, i, num, res);
//	}
//}