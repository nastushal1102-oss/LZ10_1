#include <iostream>
#include <iomanip>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
    long long x;
    long long sum = 0;
    long long count = 0;

    // Читаємо числа до кінця вводу (EOF). Підходить для вводу з клавіатури або перенаправлення з файлу.
    while (std::cin >> x) {
        if (x % 3 == 0) {
            sum += x;
            ++count;
        }
    }

    if (count == 0) {
        std::cout << "Немає чисел, кратних 3.\n";
    }
    else {
        double avg = static_cast<double>(sum) / static_cast<double>(count);
        // Виводимо середнє з 4 знаками після коми (можна змінити)
        std::cout << "Середнє арифметичне чисел, кратних 3: "
            << std::fixed << std::setprecision(4) << avg << '\n';
    }

    return 0;
}
