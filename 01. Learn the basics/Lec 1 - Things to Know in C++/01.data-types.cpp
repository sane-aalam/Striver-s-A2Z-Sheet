// Geek is learning a new programming language. 
// As data type forms the most fundamental part of a language, Geek is learning them with focus and needs your help.
// Given a data type, help Geek in finding the size of it in byte.

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Take Input from user :: 
    string str;
    cin >> str;
    cout << "Enter the value ::" << endl;
    cout << str;

// Given a data type, help Geek in finding the size of it in byte. 
     if(str == "Character"){
            return sizeof(char);
        }else if(str == "Integer"){
            return sizeof(int);
        }else if(str == "Long"){
            return sizeof(long);
        }else if(str == "Float"){
            return sizeof(float);
        }else if(str == "Double"){
            return sizeof(double);
        }else{
            return -1;
        }

    return 0;
}