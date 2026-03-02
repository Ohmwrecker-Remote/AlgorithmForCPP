//#include <iostream>
//
//int main() {
// 	int week[7][2] = {0};
//	int mostUnhappyDay = -1;
//	int mostUnhappyCount = 0;
//	std::cin >> week[0][0] >> week[0][1] >> week[1][0] >> week[1][1] >> week[2][0] >> week[2][1] >> week[3][0] >> week[3][1] >> week[4][0] >> week[4][1] >> week[5][0] >> week[5][1] >> week[6][0] >> week[6][1];
//	for (int i = 0; i < 7; i++) {
//		if (week[i][0] + week[i][1] > 8) {
//			if ((week[i][0] + week[i][1] - 8) > mostUnhappyCount) {
//				mostUnhappyCount = week[i][0] + week[i][1] - 8;
//				mostUnhappyDay = i;
//			}
//		}
//	}
//	std::cout << mostUnhappyDay + 1 << std::endl;
//}