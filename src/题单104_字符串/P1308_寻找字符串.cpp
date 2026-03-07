//#include <iostream>
//#include <string>
//
//int main() {
//	std::string word, text;
//	int count = 0, firstPlace = 0;
//	std::cin >> word;
//	// 忽略掉换行符
//	std::getchar();
//	// 使用getline读取进空格
//	std::getline(std::cin, text);
//	// 为首尾加上空格，方便之后进行整个单词的匹配
//	word = " " + word + " ";
//	text = " " + text + " ";
//	for (std::string::iterator it = word.begin(); it != word.end(); it++) {
//		// toupper函数将输入转换为大写字母
//		*it = std::toupper(*it);
//	}
//	for (std::string::iterator it = text.begin(); it != text.end(); it++) {
//		*it = std::toupper(*it);
//	}
//	int pos = text.find(word);
//	firstPlace = pos;
//	if (pos == -1) {
//		count = -1;
//		std::cout << count;
//		return 0;
//	}
//	while (pos != -1) {
//		count++;
//		// 有下个不等于-1的位置，就将pos更新并从下一位置继续匹配
//		pos = text.find(word, pos + 1);
//	}
//	std::cout << count << " " << firstPlace;
//}