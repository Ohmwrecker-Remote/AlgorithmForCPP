//#include <iostream>
//
//// 爆WA是因为判断质数函数不正确
//bool isPrime(int n) {
//	if (n == 2 || n == 3 || n == 5 || n == 7) {
//		return true;
//	}
//	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0) {
//		return false;
//	}
//	else {
//		return true;
//	}
//}
//
//int main() {
//	int maxNum = 0, curNum = 0, count = 0;
//	std::cin >> maxNum;
//	int i = 2;
//	while (curNum <= maxNum) {
//		if (isPrime(i)) {
//			if ((curNum + i) <= maxNum) {
//				curNum += i;
//				std::cout << i << std::endl;
//				count++;
//			}
//			else {
//				break;
//			}
//		}
//		i++;
//	}
//	std::cout << count;
//}