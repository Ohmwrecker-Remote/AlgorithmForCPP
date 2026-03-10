//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//void replace_(std::string &word, int position, int p1, int p2 , int p3) {
//	std::string replacement;
//	if (word[position - 1] >= word[position + 1]) {
//		return;
//	}
//	else {
//		// 注意-两边都是字母或者数字，才可以替换
//		if (word[position - 1] >= 'a' && word[position - 1] <= 'z' && word[position + 1] >= 'a' && word[position + 1] <= 'z') {
//			for (int i = (int)(word[position - 1] + 1); i < (int)(word[position + 1]); i++) {
//				for (int j = 0; j < p2; j++) {
//					if (p1 == 1){
//						replacement += (char)(i);
//					}
//					else if (p1 == 2) {
//						replacement += (char)(i - 32);
//					}
//					else if (p1 == 3) {
//						replacement += '*';
//					}
//				}
//			}
//			if (p3 == 2) {
//				std::reverse(replacement.begin(), replacement.end());
//			}
//			word = word.substr(0, position) + replacement + word.substr(position + 1, word.size() - position - 1);
//		}
//		else if (word[position - 1] >= '0' && word[position - 1] <= '9' && word[position + 1] >= '0' && word[position + 1] <= '9') {
//			for (int i = (int)(word[position - 1] + 1); i < (int)(word[position + 1]); i++) {
//				for (int j = 0; j < p2; j++) {
//					if (p1 == 3) {
//						replacement += '*';
//					}
//					else {
//						replacement += (char)(i);
//					}
//				}
//			}
//			if (p3 == 2) {
//				std::reverse(replacement.begin(), replacement.end());
//			}
//			word = word.substr(0, position) + replacement + word.substr(position + 1, word.size() - position - 1);
//		}
//	}
//}
//
//int main() {
//	int p1 = {}, p2 = {}, p3 = {};
//	std::cin >> p1 >> p2 >> p3;
//	std::string word, dummy;
//	std::getline(std::cin, dummy);
//	std::getline(std::cin, word);
//	for (int i = 0; i < word.size(); i++) {
//		if (word[i] == '-') {
//			replace_(word, i, p1, p2, p3);
//		}
//	}
//	std::cout << word << std::endl;
//}