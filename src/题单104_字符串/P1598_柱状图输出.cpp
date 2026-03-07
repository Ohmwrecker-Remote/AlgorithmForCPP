//#include <iostream>
//#include <string>
//#include <vector>
//
//int main() {
//	std::string word;
//	int max = 0;
//	std::vector<int> alphabet(26);
//	for (int i = 0; i < 4; i++) {
//		std::getline(std::cin, word);
//		for (int j = 0; j < word.size(); j++) {
//			if (word[j] >= 'A' && word[j] <= 'Z') {
//				alphabet[word[j] - 'A']++;
//			}
//		}
//	}
//	for (std::vector<int>::iterator it = alphabet.begin(); it != alphabet.end(); it++) {
//		if (*it > max) {
//			max = *it;
//		}
//	}
//	for (int i = 0; i < max; i++) {
//		for (int j = 0; j < 26; j++) {
//			if ( i < max - alphabet[j]) {
//				std::cout << "  ";
//			}
//			else {
//				std::cout << "* ";
//			}
//		}
//		std::cout << std::endl;
//	}
//	std::cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z";
//	return 0;
//}