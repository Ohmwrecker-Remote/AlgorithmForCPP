//#include <iostream>
//#include <vector>
//#include <cmath>
//
//void listOut(std::vector<std::vector<int>> &a) {
//	for (int i = 0; i < a.size(); i++) {
//		for (int j = 0; j < a[0].size(); j++) {
//			std::cout << a[i][j] << " ";
//		}
//		std::cout <<  "\n";
//	}
//
//}
//
//int pardon(std::vector<std::vector<int>> &a, int startRow, int startCol, int size) {
//	if (size == 2) {
//		a[startRow][startCol] = 0;
//		return 0;
//	}
//	for (int i = startRow; i < startRow + (size / 2); i++) {
//		for (int j = startCol; j < startCol + (size / 2); j++) {
//			if (i >= 0 && i < a.size() && j >= 0 && j < a[0].size()){
//				a[i][j] = 0;
//			}
//		}
//	}
//	// срио
//	pardon(a, startRow, startCol + (size / 2), size / 2);
//	// вСоб
//	pardon(a, startRow + (size / 2), startCol, size / 2);
//	// сроб
//	pardon(a, startRow + (size / 2), startCol + (size / 2), size / 2);
//}
//
//int main() {
//	int n = 0;
//	std::cin >> n;
//	n = std::pow(2, n);
//	std::vector<std::vector<int>> a(n, std::vector<int>(n, 1));
//	pardon(a, 0, 0, n);
//	listOut(a);
//}