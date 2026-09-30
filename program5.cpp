#include <iostream>
using namespace std;

int main(){
    // 1D arrays
    int numbers[5]; // array size 5
    int values[] = {1,2,4,5,6}; // automatic size

    cout << values[2] << endl;

    // nD arrays
    int matrixS[2][3]; // r c

    int matrix[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    // Перебирання
    cout << matrix[1][1] << endl; //5

    for (int i=0; i<2; i++){
        for (int j=0; j<3; j++){
            cout << matrix[i][j] << ", ";
        }
        cout << endl; 
    };

    // введення значень в масив
    const int ROWS = 2, COLS=3;
    int data[ROWS][COLS];

    for (int i=0; i<ROWS; i++){
        for (int j=0; j<COLS; j++){
            cout << "Element i [" << i << "][" << j << "]: ";
            cin >> data[i][j];
        }
    }
}

// g++ program.cpp -o program
// ./program