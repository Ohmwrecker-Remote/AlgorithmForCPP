//#include <iostream>
//
//int CalculateTime(int distance, int speed) {
//	float time;
//	if ((time = distance % speed) > 0) {
//		return (distance / speed) +1;
//	}
//	else {
//		return distance / speed;
//	}
//}
//
//int main() {
//	int distance, speed;
//	int time;
//	int hour = 8;
//
//	std::cin >> distance >> speed;
//	time = CalculateTime(distance, speed);
//	time += 10;
//	if (time >= 1440) {
//		std::cout << "08:00" << std::endl;
//		return 0;
//	}
//	if (time <= 60) {
//		if (time <= 50) {
//			std::cout << "0" << hour - 1 << ":" << 60 - time << std::endl;
//			return 0;
//		}
//		else {
//			std::cout << "0" << hour - 1 << ":0" << 60 - time << std::endl;
//			return 0;
//		}
//	}
//	if (time % 60 == 0) {
//		hour -= time / 60;
//		if (hour < 0) {
//			hour += 24;
//			std::cout << hour << ":" << "00" << std::endl;
//			return 0;
//		}
//		else {
//			std::cout << "0" << hour << ":" << "00" << std::endl;
//			return 0;
//		}
//	}
//	hour -= ((time / 60) + 1);
//	if (hour < 0) {
//		hour += 24;
//		std::cout << hour << ":" << 60 - (time % 60) << std::endl;
//		return 0;
//	}
//	else {
//		std::cout << "0" << hour << ":" << 60 - (time % 60) << std::endl;
//		return 0;
//	}
//}