//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main() {
//	int n;
//	int currentSum = 0, answer = 0;
//	std::cin >> n;
//	std::vector<int> numCollect(n, 0);
//	// 注意避免重复计数，计数过的数字进行标记
//	std::vector<int> numIsCounted(n, 0);
//	for (int i = 0; i < n; i++) {
//		std::cin >> numCollect[i];
//	}
//	std::sort(numCollect.begin(), numCollect.end());
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			currentSum = numCollect[i] + numCollect[j];
//			for (int k = 0; k < n; k++) {
//				if (currentSum == numCollect[k] && numIsCounted[k] == 0) {
//					answer++;
//					numIsCounted[k] = 1;
//				}
//			}
//		}
//	}
//	std::cout << answer;
//}