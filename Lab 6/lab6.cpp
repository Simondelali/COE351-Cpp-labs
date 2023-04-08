#include <iostream>
using namespace std;

int getMax(int numbers[], int arraySize){
    int maxx = numbers[0];
    for (int i=0; i<arraySize; i++){
        if(numbers[i] > maxx){
            maxx = numbers[i];
        }
    }
    return maxx;
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

void getMinAndMax(int numbers[], int arraySize, int *min, int*maxx){
    for(int i=0; i<arraySize; i++){
        if(numbers[i] < *min){
            *min = numbers[i];
            }
        if(numbers[1] > *maxx){
            *maxx = numbers[i];
            }
    }
}

int main(){
    int numbers[5] = {5,4,-29,29,6};

    int min = numbers[0];
    int max = numbers[0];
    getMinAndMax(numbers,5, &min, &max);
    getMax(numbers, 5);
    cout << "Min is " << min << endl;
    cout << "Max is " << max << endl;

}
