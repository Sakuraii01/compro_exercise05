#include<iostream>
using namespace std;

int cheetah(int x){
    int all,bottle = x/10,ex,frac;

    ex = bottle/3;
    frac = bottle%3;
    all = ex;

   /* cout << frac << " "<< ex%3 << " " << ex/3 << endl;*/

    if(ex%3 >= 0){
        while(ex > 2){
            all = all + (ex/3);
            ex = frac + (ex%3) + (ex/3);
            frac =0;
        }
    }
   /*cout << bottle << " "<< all << " " << ex << endl;*/
    return bottle+all;
}

int main(){
    int money;
    cout << "Enter money you have :";
    cin >> money;
    cout << "Number of the Cheetah Drinks is: " << cheetah(money);
}