#include<iostream>>
using namespace std;

int yearOfBirth(int age){
    int year = 2023 - age;
    return year;
}
int main(){
    cout << "Enter your age: ";
    int age;
    cin >> age;
    cout << "You were born in " << yearOfBirth(age) << endl;
    return 0;

}