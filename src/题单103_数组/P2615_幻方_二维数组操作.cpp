//#include <iostream>
//#include <vector>
//
//int main() {
//	int n = 0;
//	std::cin >> n;
//	int row = 0, col = 0;
//	// 外层vector类型应为std::vector<int>
//	std::vector<std::vector<int>> cube(n, std::vector<int>(n, 0));
//	col = n / 2;
//	cube[row][col] = 1;
//	for (int i = 2; i <= n * n; i++) {
//		if (row == 0 && col != n - 1) {
//			row = n - 1;
//			col++;
//			cube[row][col] = i;
//			continue;
//		}
//		if (row != 0 && col == n - 1 && row >= 0) {
//			col = 0;
//			row--;
//			cube[row][col] = i;
//			continue;
//		}
//		if (row == 0 && col == n - 1 && row < n - 1) {
//			row++;
//			cube[row][col] = i;
//			continue;
//		}
//		if (row != 0 && col != n - 1) {
//			if (cube[row - 1][col + 1] == 0 && row > 0 && col < n - 1) {
//				row--;
//				col++;
//				cube[row][col] = i;
//				continue;
//			}
//			else if (row < n - 1) {
//				row++;
//				cube[row][col] = i;
//				continue;
//			}
//		}
//	}
//	for (std::vector<std::vector<int>>::iterator it = cube.begin(); it != cube.end(); it++) {
//		for (std::vector<int>::iterator it2 = it->begin(); it2 != it->end(); it2++) {
//			if (it2 == it->end() - 1) {
//				std::cout << *it2 << std::endl;
//			}
//			else {
//				std::cout << *it2 << " ";
//			}
//		}
//	}
//}