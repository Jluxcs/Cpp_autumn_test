#include <iostream>
using namespace std;

double getAverage(int arr[], int size){
    int avg;
    int sum = 0;
	for (int i = 0; i < size; i++){
		sum += arr[i];
	}
	avg = sum / size;
	return avg;
	
}

int main(){
	double getAverage(int arr[], int size);
	int size = 5;
	int avg;
	int arr1[5] = {100,28,100,70,50};
	avg = getAverage(arr1, 5);
	cout<< avg<<endl;
	return 0;
}