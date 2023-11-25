#include <iostream>

int main() {
    int startingSize;
    double dailyIncrease;
    int numDays;

    // Nhap so luong ban dau tu nguoi dung
    std::cout << "Nhap so luong ban dau cua sinh vat (toi thieu la 2): ";
    std::cin >> startingSize;

    // Kiem tra tinh hop le cua so luong ban dau
    while (startingSize < 2) {
        std::cout << "Gia tri khong hop le. Nhap mot so lon hon hoac bang 2: ";
        std::cin >> startingSize;
    }

    // Nhap ti le tang trung binh hang ngay tu nguoi dung
    std::cout << "Nhap ti le tang trung binh hang ngay duoi dang phan tram (phai la so duong): ";
    std::cin >> dailyIncrease;

    // Kiem tra tinh hop le cua ti le tang
    while (dailyIncrease < 0) {
        std::cout << "Gia tri khong hop le. Nhap mot so duong: ";
        std::cin >> dailyIncrease;
    }

    // Nhap so ngay ma quan the se nhan len tu nguoi dung
    std::cout << "Nhap so ngay quan the se nhan len (toi thieu la 1): ";
    std::cin >> numDays;

    // Kiem tra tinh hop le cua so ngay
    while (numDays < 1) {
        std::cout << "Gia tri khong hop le. Nhap mot so lon hon hoac bang 1: ";
        std::cin >> numDays;
    }

    // Tinh toan va hien thi kich thuoc quan the cho moi ngay
    double population = startingSize;
    std::cout << "Kich thuoc quan the cho moi ngay:" << std::endl;
    for (int day = 1; day <= numDays; day++) {
        std::cout << "Ngay " << day << ": " << population << std::endl;
        population += population * (dailyIncrease / 100.0);
    }

    return 0;
}