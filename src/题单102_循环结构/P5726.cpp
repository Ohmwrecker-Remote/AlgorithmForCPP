//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <iomanip>
//
//int main() {
//	int n;
//	double finalScore = 0;
//	std::cin >> n;
//	std::vector<int> score(n, 0);
//	for (int i = 0; i < n; i++) {
//		std::cin >> score[i];
//	}
//	std::sort(score.begin(), score.end());
//	// erase给入迭代器位置
//	score.erase(score.end()-1);
//	score.erase(score.begin());
//	for (std::vector<int>::iterator it = score.begin(); it != score.end(); it++) {
//		finalScore += *it;
//	}
//	std::cout << std::fixed << std::setprecision(2) << finalScore / (n - 2) << std::endl;
//}