//#include <iostream>
//#include <vector>
//
///* 1  2  3  4  5  11 6 1  4  5  3 8 13
//   6  7  8  9 10  12 7 2  9 10  2 7 12
//  11 12 13 14 15  13 8 3 14 15  1 6 11
//  16 17 18 19 20
//  21 22 23 24 25
//*/
//
//std::vector<std::vector<int>> rotate(std::vector<std::vector<int>> num, int row, int col, int size, int direction) {
//	std::vector<std::vector<int>> temp = num;
//	int start_row = row - 1 - size;
//	int start_col = col - 1 - size;
//	if (direction == 0){
//		for (int i = col - 1 - size; i <= col - 1 + size; i++) {
//			for (int j = row - 1 + size; j >= row - 1 - size; j--) {
//				temp[start_row][start_col] = num[j][i];
//				start_col++;
//				if (start_col > col - 1 + size) {
//					start_col = col - 1 - size;
//					start_row++;
//				}
//			}
//		}
//		return temp;
//	}
//	else {
//		for (int k = 0; k < 3; k++) {
//			for (int i = col - 1 - size; i <= col - 1 + size; i++) {
//				for (int j = row - 1 + size; j >= row - 1 - size; j--) {
//					temp[start_row][start_col] = num[j][i];
//					start_col++;
//					if (start_col > col - 1 + size) {
//						start_col = col - 1 - size;
//						start_row++;
//					}
//				}
//			}
//			num = temp;
//			start_row = row - 1 - size;
//			start_col = col - 1 - size;
//		}
//		return temp;
//	}
//}
//
//int main() {
//	int n{}, m{}, t{1};
//	int row{}, col{}, size{}, direction{};
//	std::cin >> n >> m;
//	std::vector<std::vector<int>> num(n, std::vector<int>(n));
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			num[i][j] = t;
//			t++;
//		}
//	}
//	for (int i = 0; i < m; ++i) {
//		std::cin >> row >> col >> size >> direction;
//		num = rotate(num, row, col, size, direction);
//	}
//	for (int i = 0; i < n; ++i) {
//		for (int j = 0; j < n; ++j) {
//			std::cout << num[i][j];
//			if (j == n - 1) {
//				std::cout << std::endl;
//			}
//			else {
//				std::cout << " ";
//			}
//		}
//	}
//}