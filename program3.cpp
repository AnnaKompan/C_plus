#include <iostream>
using namespace std;

// int main(){
//     int day = 2;

//     switch(day){
//         case 1:
//             cout<< "Monday";
//             break;
//         case 2:
//             cout<< "Tuesday";
//             break;
//         default:
//             cout<<"Unknown day";
//     }
//      return 0;
// }
int main(){
    cout << "Enter number: ";
    int user_input;
    bool isOk = true;
    cin >> user_input;
    if(user_input>5 && isOk){
        cout << "Yes";
    }
    else{
        cout <<"no";
    }
}