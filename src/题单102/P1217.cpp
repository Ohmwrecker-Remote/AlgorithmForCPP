//#include <iostream>
//#include <cmath>
//#include <string>
//#include <chrono>
//
//bool isPrime(int n) {
//	if (n == 2 || n == 3 || n == 5 || n == 7 || n == 11 || n == 13) {//判断，如果没有那么下面的优化就是错的，因为它会把上面的数全部算成合数。（实在看不懂可以自己举几个例子）
//		return 1;
//	}
//	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0 || n % 11 == 0 || n % 13 == 0 || n == 1) {//优化，n=1也要return 0。
//		return 0;
//	}
//	for (int i = 2; i <= sqrt(n); i++) {//判断，判断一个数是否是质数只要判断到它的开方就可以了。
//		if (n % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main() {
//	int start = 0, end = 0;
//	int strStart = 0, strEnd = 0;
//	int isPalindrome = 1;
//	std::string judgeString;
//	std::cin >> start >> end;
//	auto timeStart = std::chrono::high_resolution_clock::now();
//	std::ios::sync_with_stdio(0);
//	// 先判断回文再判断质数，因为回文数数量小于质数
//	for (int i = start; i <= end; i++) {
//		if (i >= 100000 && i < 1000000) {
//			continue;
//		}
//		judgeString = std::to_string(i);
//		strStart = 0;
//		strEnd = judgeString.length() - 1;
//		while (strStart <= strEnd) {
//			if (judgeString[strStart] != judgeString[strEnd]) {
//				isPalindrome = 0;
//				break;
//			}
//			strStart++;
//			strEnd--;
//			isPalindrome = 1;
//		}
//		if (isPalindrome) {
//			if (isPrime(i)) {
//				std::cout << i << "\n";
//			}
//		}
//	}
//	auto timeEnd = std::chrono::high_resolution_clock::now();
//	std::chrono::duration<double, std::milli> timeCost = timeEnd - timeStart;
//	std::cout << "Time cost: " << timeCost.count() << " ms" << std::endl;
//}
//
