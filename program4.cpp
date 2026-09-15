#include <iostream>
using namespace std;

int main(){
    // 1. вивести числа від 1-10
    for(int i=1; i<11; i++){
        cout << "i = " << i <<endl;
    }

    // 2. порахувати суму чисел від 1 до N
    int i = 1;
    int n;
    cout << "Enter random number: ";
    cin >> n;
    while(i < n){
        cout << "Sum is: " << i + i <<endl;
        i++;
    }

    // 3. програма яка запитує пароль поки він неправильний
    int password;
    // int correct = 123456;
    srand(time(NULL)); // random seed
    // random num starts with 1 and has 6 numbers (up to 1000000)
    int correct = 1 + rand() % 1000000;
    do{
        cout << "Type the password: ";
        cin >> password;
    }
    while(password != correct);

    // 4. таблиця множення
    int num;
    cout << "Type number you want to multiply: ";
    cin >> num;
    for (int i =1; i <= 10; i++){
        cout << i*num <<endl;
    }
}