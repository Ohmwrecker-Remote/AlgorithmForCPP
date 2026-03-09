//#include <iostream>
//#include <string>
//
//int main() {
//	int num = 0, score1 = 0, score2 = 0, score3 = 0, highest_score_Int = 0;
//	std::string name, highest_name, highest_score;
//	std::cin >> num;
//	for (int i = 0; i < num; i++) {
//		std::cin >> name >> score1 >> score2 >> score3;
//		if (score1 + score2 + score3 > highest_score_Int) {
//			highest_name = name;
//			highest_score_Int = score1 + score2 + score3;
//			highest_score.clear();
//			highest_score = std::to_string(score1) + " " + std::to_string(score2) + " " + std::to_string(score3);
//		}
//	}
//	if (highest_name == "") {
//		std::cout << name << " " << score1 << " " << score2 << " "  << score3 << std::endl;
//	}
//	std::cout << highest_name << " " << highest_score << std::endl;
//}