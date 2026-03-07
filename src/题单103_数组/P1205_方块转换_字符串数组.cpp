//#include <iostream>
//#include <string>
//#include <vector>
//
//void copy(std::vector<std::string>& blocks, std::vector<std::string>& tempo) {
//	for (int i = 0; i < blocks.size(); i++) {
//		for (int j = 0; j < blocks[i].size(); j++) {
//			blocks[i][j] = tempo[i][j];
//		}
//	}
//}
//
//bool compare(std::vector<std::string> blocks, std::vector<std::string>& tempo) {
//	for (int i = 0; i < blocks.size(); i++) {
//		for (int j = 0; j < blocks[i].size(); j++) {
//			if (blocks[i][j] == tempo[i][j]) {
//				continue;
//			}
//			else {
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//// 图案按顺时针转 90°
//bool rotate90(std::vector<std::string> blocks, std::vector<std::string> transformed_blocks) {
//	std::vector<std::string> tempo(blocks.size());
//	int count = 0;
//	for (int i = 0; i < blocks.size(); i++) {
//		for (int j = blocks.size() - 1; j >= 0; j--) {
//			tempo[count] += blocks[j][i];
//			if (j == 0) {
//				count++;
//			}
//		}
//	}
//	if (compare(tempo, transformed_blocks)) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//bool rotate180(std::vector<std::string> blocks, std::vector<std::string> transformed_blocks) {
//	std::vector<std::string> tempo(blocks.size());
//	int count = 0;
//	for (int i = blocks.size() - 1; i >= 0; i--) {
//		for (int j = blocks.size() - 1; j >= 0; j--) {
//			tempo[count] += blocks[i][j];
//			if (j == 0) {
//				count++;
//			}
//		}
//	}
//	if (compare(tempo, transformed_blocks)) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//bool rotate270(std::vector<std::string> blocks, std::vector<std::string> transformed_blocks) {
//	std::vector<std::string> tempo(blocks.size());
//	int count = 0;
//	for (int i = blocks.size() - 1; i >= 0; i--) {
//		for (int j = 0; j < blocks.size(); j++) {
//			tempo[count] += blocks[j][i];
//			if (j == blocks.size() - 1) {
//				count++;
//			}
//		}
//	}
//	if (compare(tempo, transformed_blocks)) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//// 图案在水平方向翻转（以中央铅垂线为中心形成原图案的镜像）
//// 第一次理解错了应该是左右翻转不是上下翻转
//bool reflect(std::vector<std::string> blocks, std::vector<std::string> transformed_blocks) {
//	std::vector<std::string> tempo(blocks.size());
//	int count = 0;
//	for (int i = 0; i < blocks.size(); i++) {
//		for (int j = blocks.size() - 1; j >= 0; j--) {
//			tempo[count] += blocks[i][j];
//			if (j == 0) {
//				count++;
//			}
//		}
//	}
//	if (compare(tempo, transformed_blocks)) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//std::vector<std::string> reflect(std::vector<std::string> blocks) {
//	std::vector<std::string> tempo(blocks.size());
//	int count = 0;
//	for (int i = 0; i < blocks.size(); i++) {
//		for (int j = blocks.size() - 1; j >= 0; j--) {
//			tempo[count] += blocks[i][j];
//			if (j == 0) {
//				count++;
//			}
//		}
//	}
//	return tempo;
//}
//
//int combinate(std::vector<std::string> blocks, std::vector<std::string> transformed_blocks) {
//	std::vector<std::string> tempo1 = reflect(blocks);
//	if (rotate90(tempo1, transformed_blocks)) {
//		return 1;
//	}
//	else if (rotate180(tempo1, transformed_blocks)) {
//		return 2;
//	}
//	else if (rotate270(tempo1, transformed_blocks)) {
//		return 3;
//	}
//	else {
//		return 0;
//	}
//}
//
//int main() {
//	int n = 0, result = 0;
//	std::cin >> n;
//	std::vector<std::string> original_blocks(n), transformed_blocks(n);
//	for (int i = 0; i < n; i++) {
//		std::cin >> original_blocks[i];
//	}
//	for (int i = 0; i < n; i++) {
//		std::cin >> transformed_blocks[i];
//	}
//	combinate(original_blocks, transformed_blocks);
//	if (rotate90(original_blocks, transformed_blocks)) {
//		std::cout << "1" << std::endl;
//		return 0;
//	}
//	if (rotate180(original_blocks, transformed_blocks)) {
//		std::cout << "2" << std::endl;
//		return 0;
//	}
//	if (rotate270(original_blocks, transformed_blocks)) {
//		std::cout << "3" << std::endl;
//		return 0;
//	}
//	if (reflect(original_blocks, transformed_blocks)) {
//		std::cout << "4" << std::endl;
//		return 0;
//	}
//	if (combinate(original_blocks, transformed_blocks) != 0) {
//		std::cout << "5" << std::endl;
//		return 0;
//	}
//	if (compare(original_blocks, transformed_blocks)) {
//		std::cout << "6" << std::endl;
//		return 0;
//	}
//	std::cout << "7" << std::endl;
//}