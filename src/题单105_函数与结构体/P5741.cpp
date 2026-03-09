//#include <iostream>
//#include <string>
//#include <vector>
//
//struct Student {
//	std::string name;
//	int score1 = 0, score2 = 0, score3 = 0;
//	int totalScore = 0;
//};
//
//int main() {
//	int n;
//	std::cin >> n;
//	std::vector<Student> students(n);
//	for (int i = 0; i < n; i++) {
//		std::cin >> students[i].name >> students[i].score1 >> students[i].score2 >> students[i].score3;
//		students[i].totalScore = students[i].score1 + students[i].score2 + students[i].score3;
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (std::abs(students[i].totalScore - students[j].totalScore) <= 10) {
//				if (std::abs(students[i].score1 - students[j].score1) <= 5 && std::abs(students[i].score2 - students[j].score2) <= 5 && std::abs(students[i].score3 - students[j].score3) <= 5) {
//					std::cout << students[i].name << " " << students[j].name << std::endl;
//				}
//			}
//		}
//	}
//}