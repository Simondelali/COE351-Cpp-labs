#include <iostream>
using namespace std;

int getMax(int numbers[], int arraySize){
    int max = numbers[0];
    for (int i=0; i<arraySize; i++){
        if(numbers[i] > max){
            max = numbers[i];
        }
    }
    return max;
}

int getMin(int numbers[], int arraySize){
    int min = numbers[0];
    for(int i=0; i<arraySize; i++){
        if(numbers[i] < min){
            min = numbers[i];
        }
    }
    return min;
}

void getMinAndMax(int numbers[], int arraySize, int*min, int*max){
    for(int i=0; i<arraySize; i++){
        if(numbers[i] < *min){
            *min = numbers[i];
            }
        if(numbers[1] > *max){
            *max = numbers[i];
            }
    }
}

int main(){
    int numbers[5] = {5,4,-29,29,6};

    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers,5, &min, &max);
    cout << "Min is " << min << endl;
    cout << "Max is " << max << endl;
}
