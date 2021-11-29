#include<iostream>
using namespace std;

int cheetah(int x){
    int all,bottle = x/10,ex,firstex;

    ex= bottle/3;
    all = ex;
    
    if(ex%3 >= 0){
        while(ex/3 > 0){
            all = all + (ex/3);
            ex = (ex%3) + (ex/3);
        }
        return bottle+all;
    }else{
        return bottle;
    }


}

int main(){
    int money;
    cout << "Enter money you have :";
    cin >> money;
    cout << "Number of the Cheetah Drinks is: " << cheetah(money);
}