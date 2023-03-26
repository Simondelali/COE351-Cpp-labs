#include<iostream>
using namespace std;

int main(){
    int height;
    float weight;
    int BMI;

    cout << "Welcome to BMI Calculator!" << endl;
    cout << "--------------------------" <<endl;
    cout << "Enter height in centimeteres: ";
    cin >> height;
    cout << "Enter weight in kilograms: ";
    cin >> weight;

    // Formula for BMI
    BMI = (weight / height / height) * 10000;

    if (BMI < 18.5){
        cout << "You're underweight";
    }
    else if (BMI >= 18.5 && BMI <= 24.9){
        cout << "You're normal";
    }
    else if (BMI >= 25 && BMI <= 29.9){
        cout << "You're obese";
    }
    else{cout << "You're morbidly obese";}


    return 0;
}
