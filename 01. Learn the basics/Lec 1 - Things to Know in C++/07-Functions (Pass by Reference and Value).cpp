// Functions (Pass by Reference and Value)

#include <bits/stdc++.h>
using namespace std;


// --> call by reference = original data passing
// --> call by value = copy of original data passing

// --> Printing the array 
void printArray(int arr[], int sizeOfArray){
    for(int index = 0; index < sizeOfArray; index++){
        cout << arr[index] << "";
    }
}

// --> Search Element into array
// --> call by reference
void searchElement(int *arr, int sizeofArray, int target){
    for(int currIndex = 0; currIndex < sizeofArray; currIndex++){
        if(arr[currIndex] == target){
            cout << "Element is present into the array" << endl;
        }
    }
    cout << "Element is not present into the array" << endl;
    
    // change the original array
    arr[3] = 111;
}



int main(){
    int arr[5] = {1,2,3,4,5};
    int sizeOfArray = sizeof(arr)/sizeof(int);
    printArray(arr,sizeOfArray);
    int target = 5;
    searchElement(arr,sizeOfArray,target);
    printArray(arr,sizeOfArray);
    return 0;
}