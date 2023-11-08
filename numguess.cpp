// Number guessing game 

#include<iostream>
using namespace std;

int main(){
    int num = 67, count = 0;
    int n;
    cout << "Guess the number between 1 to 99 : "<< endl;
    for(int i = 1 ; i <= 10; i++)
    {
        cin >> n;
        count = i;
        if(n<num)
        cout << "Guess a greater number :";
        else if (n>num)
        cout << "Guess a smaller number :";
        else
        cout << "You are correct.";
        if (n==num)
        break;
    }
    cout <<endl << "You took "<< count <<" chance";


    return 0;
}