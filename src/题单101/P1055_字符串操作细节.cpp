#include <iostream>

int main() {
	// 要比实际字符串多一位，以存下“\0”终止字符串，否则会发生越界访问
	char ISBN[14];
	// 使用该函数确保不额外读入
	std::cin.getline(ISBN,14);
	int sum = 0;
	char ISBNNUM[10];
	ISBNNUM[0] = ISBN[0];
	ISBNNUM[1] = ISBN[2];
	ISBNNUM[2] = ISBN[3];
	ISBNNUM[3] = ISBN[4];
	ISBNNUM[4] = ISBN[6];
	ISBNNUM[5] = ISBN[7];
	ISBNNUM[6] = ISBN[8];
	ISBNNUM[7] = ISBN[9];
  ISBNNUM[8] = ISBN[10];
	ISBNNUM[9] = ISBN[12];
	for (int i = 0; i < 9; i++) {
		sum += (int)(ISBNNUM[i] - 48) * (i + 1);
	}
	int identifier = sum % 11;
	if (identifier != 10 && identifier == (int)(ISBN[12] - 48) || identifier == 10 && ISBN[12] == 'X') {
		std::cout << "Right" << std::endl;
	}
	else if (identifier != 10){
		ISBN[12] = (char)(identifier + 48);
		std::cout << ISBN << std::endl;
	}
	else {
		ISBN[12] = 'X';
		std::cout << ISBN << std::endl;
	}
}