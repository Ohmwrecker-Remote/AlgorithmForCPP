//#include <iostream>
//#include <vector>
//
//int main() {
//	int time{}, A{}, B{}, A_Score{}, B_Score{};
//	std::cin >> time >> A >> B;
//	std::vector<int> A_out(A, 0), B_out(B, 0);
//	for (int i = 0; i < A; i++) {
//		std::cin >> A_out[i];
//	}
//	for (int i = 0; i < B; i++) {
//		std::cin >> B_out[i];
//	}
//	std::vector<std::vector<int>> result(5, std::vector<int>(0));
//	// æÿ’Û¥Ú¥Ì¡À
//	result = {  {0, -1 , 1, 1, -1},
//				{1,  0, -1, 1, -1},
//				{-1, 1,  0, -1,  1},
//				{-1,-1,  1, 0,  1},
//				{1,  1, -1,-1,  0}
//	};
//	for (int i = 0; i < time; i++) {
//		if (result[A_out[i % A]][B_out[i % B]] == -1) {
//			B_Score++;
//		}
//		if (result[A_out[i % A]][B_out[i % B]] == 0) {
//			continue;
//		}
//		if (result[A_out[i % A]][B_out[i % B]] == 1) {
//			A_Score++;
//		}
//	}
//	std::cout << A_Score << " " << B_Score << std::endl;
//}