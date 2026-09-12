// підключає бібл для виводу в консоль 
// input output stream - get data from user and output in console
#include <iostream>
#include <locale>
// дозволяє не писати std::cout
using namespace std;

int main() {
    setlocale(LC_ALL, "uk_UA");
    // cout << вивід тексту в консоль
    // std (standart простір імен) + cout (console out)

    std::cout << "hello world\n" << std::endl;
    cout << "Привіт, світ!";
    return 0;
}
// g++ program.cpp -o program
// ./program