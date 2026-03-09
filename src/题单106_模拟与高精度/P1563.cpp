//#include <iostream>
//#include <vector>
//#include <string>
//
//struct person {
//
//    int direction;
//    std::string name;
//    person() {
//        direction = 0;
//    }
//};
//
//int main() {
//    int n{}, m{};
//    int currentPerson{}, direct{}, distance{};
//    std::cin >> n >> m;
//    std::vector<person> people(n);
//    for (int i = 0; i < n; i++) {
//        std::cin >> people[i].direction >> people[i].name;
//    }
//    for (int i = 0; i < m; i++) {
//        std::cin >> direct >> distance;
//        if (people[currentPerson].direction == 0) {
//            if (direct == 0) {
//                // ´ýÍêÉÆ
//                currentPerson = (currentPerson + n - distance) % n;
//            }
//            else if (direct == 1) {
//                currentPerson = (currentPerson + n + distance) % n;
//            }
//        }else if (people[currentPerson].direction == 1) {
//            if (direct == 0) {
//                currentPerson = (currentPerson + n + distance) % n;
//            }
//            else if (direct == 1) {
//                currentPerson = (currentPerson + n - distance) % n;
//            }
//        }
//    }
//    std::cout << people[currentPerson].name << std::endl;
//}