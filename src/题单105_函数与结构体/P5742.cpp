//#include <iostream>
//#include <vector>
//
//struct Student {
//	int ID = 0;
//	int score1 = 0, score2 = 0;
//	int totalScore() {
//		return score1 + score2;
//	}
//};
//
//void isExcellent(Student& s) {
//	if (s.totalScore() > 140 && s.score1 * 7 + s.score2 * 3 >= 800) {
//		std::cout << "Excellent\n";
//	}
//	else {
//		std::cout << "Not excellent\n";
//	}
//}
//
//int main() {
//	int n;
//	std::cin >> n;
//	std::vector<Student> students(n);
//	for (int i = 0; i < n; i++) {
//		std::cin >> students[i].ID >> students[i].score1 >> students[i].score2;
//		isExcellent(students[i]);
//	}
//}