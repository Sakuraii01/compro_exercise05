#include<iostream>
#include<string>

using namespace std;

int main(){
    string text01,text02;
    int num,count=0;

    cout << "Enter the first text: ";
    cin >> text01;
    cout << "Enter the second text: ";
    cin >> text02;
    cout << "Enter N: ";
    cin >> num;

    while(count < num){
        if(count%2 == 0){
            cout << text01 << " ";
        }else{
            cout << text02 << " ";
        }
        count++;
    }
}