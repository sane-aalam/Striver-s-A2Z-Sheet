// If Else statements


#include <bits/stdc++.h>
using namespace std;

// condtion-1 --> number is zero,postive,negative
void takingInputOutput(int number){
     if(number < 1){
        cout <<  "Give number is postive" << endl;
     }else if(number > 1){
        cout <<  "Give number is negative" << endl;
     }else{
        cout << "Number is zero" << endl;
     }
}


// condtion-2 Number is Even,Odd
void NumberChecking(int number){
    if(number % 2 == 0){
        cout << "Number is Even" << endl;
    }else{
        cout << "Number is Odd" << endl;
    }
}

// LinarSearch Algorithm 
int LinarSearch(int arr[], int target){
    
    int index = 0;
    int NIndex = sizeof(arr)/sizeof(int);
    while(index < NIndex){
        int element = arr[index];
        if(element == target){
            return 1;
        }
        index++;
    }
    return 0;
}


int main(){
    int number;
    cin >> number;
    takingInputOutput(number);
    NumberChecking(number);
    int arr[5] = {11,12,13,44,55};
    int target = 55;
    LinarSearch(arr,target);
    return 0;
}