//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iomanip>
//
//int main() {
//	// n行每行m个数
//	int n = 0, m = 0;
//	double highestScore = 0.0,currentScore = 0.0;
//	std::cin >> n >> m;
//	std::vector<double> score(m);
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			std::cin >> score[j];
//		}
//		std::sort(score.begin(), score.end());
//		score[0] = 0;
//		score[m - 1] = 0;
//		for (std::vector<double>::iterator it = score.begin(); it != score.end(); it++) {
//			currentScore += *it / (m - 2);
//		}
//		if (currentScore > highestScore) {
//			highestScore = currentScore;
//		}
//		currentScore = 0;
//	}
//	std::cout << std::fixed << std::setprecision(2) << highestScore;
//}