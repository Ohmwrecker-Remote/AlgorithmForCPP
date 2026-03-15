//#include <iostream>
//#include <cmath>
//#include <vector>
//
//static long long num[21][21][21];
//
//// 注意边界检测，不能超出数组界限
//long long w(long long a, long long b, long long c) {
//	if ( a >= 0 && b >= 0 && c >= 0 && a <= 20 && b <= 20 && c <= 20 ) {
//		if (num[a][b][c]) {
//			return num[a][b][c];
//		}
//	}
//	if (a <= 0 || b <= 0 || c <= 0) {
//		return 1;
//	}
//	else if (a > 20 || b > 20 || c > 20) {
//		return w(20, 20, 20);
//	}
//	else if (a < b && b < c) {
//		// 在返回语句内进行记忆化存储，避免重复计算
//		return num[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
//	}
//	else {
//		return num[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
//	}
//}
//
//int main() {
//	long long a{}, b{}, c{}, result{};
//	while (std::cin >> a >> b >> c) {
//		if (a == -1 && b == -1 && c == -1) {
//			break;
//		}
//		result = w(a, b, c);
//		std::cout << "w(" << a << ", " << b << ", " << c << ") = " << result << std::endl;
//	}
//}