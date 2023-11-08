// simple calculator to perform Arithnatic operations like Addition , Sutraction , Multiiplication , Division.

#include<iostream>
using namespace std;

int main() {

    double num1 , num2;
    char oper;

    cout << "Enter the first number:";
    cin >> num1;

    cout <<"Enter the second number:";
    cin >> num2;

    cout << "Enter the operation( + , - , * , /):";
    cin >> oper;

    switch (oper)
    {
    case '+':
        cout << num1 << oper << num2 << "=" << num1+num2 << endl;
        break;
    case '-':
        cout << num1 << oper << num2 << "=" << num1-num2 << endl;
        break;
    case '*':
        cout << num1 << oper << num2 << "=" << num1*num2 << endl;
        break;
    case '/':
        cout << num1 << oper << num2 << "=" << num1/num2 << endl;
        break;
    default:
        break;
    }

}
