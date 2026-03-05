//#include <iostream>
//#include <algorithm>
//
//void isIsoscelesTriangle(int a, int b, int c) {
//	if (a == b || b == c || a == c) {
//		std::cout << "Isosceles triangle" << std::endl;
//	}
//}
//
//void isEquilateralTriangle(int a, int b, int c) {
//	if (a == b && b == c) {
//		std::cout << "Equilateral triangle" << std::endl;
//	}
//}
//
//void whichTriangle(int a, int b, int c) {
//	if (a + b > c) {
//		if (a * a + b * b == c * c) {
//			std::cout << "Right triangle" << std::endl;
//			isIsoscelesTriangle(a, b, c);
//			isEquilateralTriangle(a, b, c);
//		}
//		else if (a * a + b * b > c * c) {
//			std::cout << "Acute triangle" << std::endl;
//			isIsoscelesTriangle(a, b, c);
//			isEquilateralTriangle(a, b, c);
//		}
//		else if (a * a + b * b < c * c) {
//			std::cout << "Obtuse triangle" << std::endl;
//			isIsoscelesTriangle(a, b, c);
//		}
//	}
//	else {
//		std::cout << "Not triangle" << std::endl;
//	}
//}
//
//
//int main() {
//	int side[3] = {0};
//	std::cin >> side[0] >> side[1] >> side[2];
//	std::sort(side, side + 3);
//	whichTriangle(side[0], side[1], side[2]);
//}