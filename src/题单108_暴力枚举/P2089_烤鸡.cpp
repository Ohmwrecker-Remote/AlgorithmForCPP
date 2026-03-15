//#include <iostream>
//#include <vector>
//#include <string>
//
//int main() {
//	std::vector<std::string> result;
//	int n, m{};
//	std::cin >> n;
//	for (int a = 1; a < 4; a++) {
//		for (int b = 1; b < 4; b++) {
//			for (int c = 1; c < 4; c++) {
//				for (int d = 1; d < 4; d++) {
//					for (int e = 1; e < 4; e++) {
//						for (int f = 1; f < 4; f++) {
//							for (int g = 1; g < 4; g++) {
//								for (int h = 1; h < 4; h++) {
//									for (int i = 1; i < 4; i++) {
//										for (int j = 1; j < 4; j++) {
//											if (a + b + c + d + e + f + g + h + i + j == n) {
//												std::string temp = std::to_string(a) + " " + std::to_string(b) + " " + std::to_string(c) + " " + std::to_string(d) + " " + std::to_string(e) + " " + std::to_string(f) + " " + std::to_string(g) + " " + std::to_string(h) + " " + std::to_string(i) + " " + std::to_string(j);
//												result.push_back(temp);
//												m++;
//											}
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	std::cout << m << std::endl;
//	for (int i = 0; i < m; ++i) {
//		std::cout << result[i] << std::endl;
//	}
//}