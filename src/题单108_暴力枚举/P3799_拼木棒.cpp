//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//static long long result{};
//const long long mod = 1e9 + 7;
//
//// ´íÎóµã
//// C(4,2) = 4 * 3 / 2 * 1
//long long times(long long n) {
//	return (n * (n - (long long)1) / (long long)2) % mod;
//}
//
//int main() {
//	int n, temp;
//	std::cin >> n;
//	std::vector<int> side(5001,0);
//	for (int i = 0; i < n; i++) {
//		std::cin >> temp;
//		side[temp]++;
//	}
//	for (int i = 5000; i > 1; i--) {
//		if (side[i] >= (long long)2) {
//			for (int j = 1; j < i; j++) {
//				if (side[j] > (long long)0 && side[i - j] > (long long)0 && j != i - j && j <= i - j) {
//					result += (long long)side[j] * (long long)side[i - j] * (long long)times(side[i]) % mod;
//					continue;
//				}
//				else if (j == i - j && side[j] >= (long long)2) {
//					result += (long long)times(side[j]) * (long long)times(side[i]) % mod;
//					continue;
//				}
//				result %= mod;
//			}
//		}
//	}
//	std::cout << result << std::endl;
//}