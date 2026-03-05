//#include <iostream>
//#include <vector>
//
//bool isOk(int row, int col, std::vector<std::vector<int>>& map) {
//	if (row < 1 || row >= map.size() || col < 1 || col >= map.size()) {
//		return false;
//	}
//	else {
//		return true;
//	}
//}
//
//void torchLight(int row, int col, std::vector<std::vector<int>>& map) {
//	for (int i = row - 1; i < row + 2; i++) {
//		for (int j = col - 1; j < col + 2; j++) {
//			if (isOk(i, j, map)) {
//				map[i][j] = 1;
//			}
//		}
//	}
//	if (isOk(row, col - 2, map)) {
//		map[row][col - 2] = 1;
//	}
//	if (isOk(row, col + 2, map)) {
//		map[row][col + 2] = 1;
//	}
//	if (isOk(row - 2, col, map)) {
//		map[row - 2][col] = 1;
//	}
//	if (isOk(row + 2, col, map)) {
//		map[row + 2][col] = 1;
//	}
//}
//
//void stoneLight(int row, int col, std::vector<std::vector<int>>& map) {
//	for (int i = row - 2; i < row + 3; i++) {
//		for (int j = col - 2; j < col + 3; j++) {
//			if (isOk(i, j, map)) {
//				map[i][j] = 1;
//			}
//		}
//	}
//}
//
//int main() {
//	int n = 0, torch = 0, stone = 0, monster = 0;
//	int row = 0, col = 0;
//	std::cin >> n >> torch >> stone;
//	std::vector<std::vector<int>> map(n + 1, std::vector<int>(n + 1, 0));
//	for (int i = 0; i < torch; i++) {
//		std::cin >> row >> col;
//		map[row][col] = 2;
//		torchLight(row, col, map);
//	}
//	for (int i = 0; i < stone; i++) {
//		std::cin >> row >> col;
//		map[row][col] = 3;
//		stoneLight(row, col, map);
//	}
//	for (std::vector<std::vector<int>>::iterator it = map.begin(); it != map.end(); it++) {
//		for (std::vector<int>::iterator jt = it->begin(); jt != it->end(); jt++) {
//			if (*jt == 0) {
//				monster++;
//			}
//		}
//	}
//	std::cout << monster - 2 * n - 1;
//}