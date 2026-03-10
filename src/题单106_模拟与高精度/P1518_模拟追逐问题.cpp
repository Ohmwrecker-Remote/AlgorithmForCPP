//#include <iostream>
//#include <vector>
//#include <string>
//
//void move(std::vector<std::string>& map, int& row, int& col, std::string& direction, char name, int& flag) {
//	if (direction == "N") {
//		if (row > 0 && map[row - 1][col] == 'C'){
//			flag = 1;
//			return;
//		}
//		else {
//			if (row > 0 && map[row - 1][col] != '*') {
//				map[row - 1][col] = name;
//				map[row][col] = '.';
//				row--;
//			}
//			else {
//				direction = "E";
//				return;
//			}
//		}
//	}
//	if (direction == "E") {
//		if (col < 9 && map[row][col + 1] == 'C') {
//			flag = 1;
//			return;
//		} else{
//			if (col < 9 && map[row][col + 1] != '*') {
//				map[row][col + 1] = name;
//				map[row][col] = '.';
//				col++;
//			}
//			else {
//				direction = "S";
//				return;
//			}
//		}
//	}
//	if (direction == "S") {
//		if (row < 9 && map[row + 1][col] == 'C') {
//			flag = 1;
//			return;
//		}
//		else {
//			if (row < 9 && map[row + 1][col] != '*') {
//				map[row + 1][col] = name;
//				map[row][col] = '.';
//				row++;
//			}
//			else {
//				direction = "W";
//				return;
//			}
//		}
//	}
//	if (direction == "W") {
//		if (col > 0 && map[row][col - 1] == 'C') {
//			flag = 1;
//			return;
//		}
//		else {
//			if (col > 0 && map[row][col - 1] != '*') {
//				map[row][col - 1] = name;
//				map[row][col] = '.';
//				col--;
//			}
//			else {
//				direction = "N";
//				return;
//			}
//		}
//	}
//}
//
//int main() {
//	int F_row, F_col, C_row, C_col, time_Cost{}, flag{};
//	std::string F_direction = "N", C_direction = "N";
//	std::vector<std::string> map(10, "");
//	for (int i = 0; i < 10; i++) {
//		std::getline(std::cin, map[i]);
//	}
//	for (int i = 0; i < 10; i++) {
//		for (int j = 0; j < 10; j++) {
//			if (map[i][j] == 'F') {
//				F_row = i;
//				F_col = j;
//			}
//			if (map[i][j] == 'C') {
//				C_row = i;
//				C_col = j;
//			}
//		}
//	}
//	while (time_Cost <= 200) {
//		move(map, F_row, F_col, F_direction, 'F', flag);
//		// 如过F的下一位置就是C,那么就要让C先走一步,因为是设定上是同时行进,所以如果F走过了C的位置，但是C还没行动过,就不算相遇
//		if (flag == 1) {
//			move(map, C_row, C_col, C_direction, 'C', flag);
//			move(map, F_row, F_col, F_direction, 'F', flag);
//			time_Cost++;
//			flag = 0;
//			if (F_row == C_row && F_col == C_col) {
//				break;
//			}
//			continue;
//		}else
//		{
//			move(map, C_row, C_col, C_direction, 'C', flag);
//			time_Cost++;
//			if (F_row == C_row && F_col == C_col) {
//				break;
//			}
//		}
//	}
//	if (time_Cost > 200){
//		std::cout << 0 << std::endl;
//	}
//	else {
//		std::cout << time_Cost << std::endl;
//	}
//}