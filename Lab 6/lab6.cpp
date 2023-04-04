#include <iostream>
using namespace std;

int getMax(int numbers[], int arraySize){
    int max = numbers[0];
    for (i=0; i<arraySize; i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
    }
    return max;
}
