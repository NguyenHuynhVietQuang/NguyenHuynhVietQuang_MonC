#include <iostream>
#include <climits>

int main() {
    int number;
    int smallest = INT_MAX;
    int largest = INT_MIN;

    std::cout << "Nhap mot chuoi cac so nguyen (-99 de ket thuc):" << std::endl;

    while (true) {
        std::cout << "Nhap mot so nguyen: ";
        std::cin >> number;

        if (number == -99) {
            break;
        }

        if (number < smallest) {
            smallest = number;
        }

        if (number > largest) {
            largest = number;
        }
    }

    if (smallest == INT_MAX && largest == INT_MIN) {
        std::cout << "Khong co so nao duoc nhap." << std::endl;
    } else {
        std::cout << "So nho nhat: " << smallest << std::endl;
        std::cout << "So lon nhat: " << largest << std::endl;
    }

    return 0;
}