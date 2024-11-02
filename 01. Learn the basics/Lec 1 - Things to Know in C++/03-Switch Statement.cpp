// Switch Statement

#include <bits/stdc++.h>
using namespace std;

// condtion-1 --> number is zero,postive,negative
void takingInputOutput(int number){

    switch (number){
    case 1:
        cout << "Number is 1";
        break;
    case 0:
        cout << "Number is 0";
        break;
    case -1:
        cout << "Number is -1";
        break;
    default:
        break;
    }
}

int main()
{
    int number;
    cin >> number;
    takingInputOutput(number);
    return 0;
}