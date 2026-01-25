#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i = 0; i<size; i++){
        if (arr[i] == target){//FOUND
            return i;
        }
    }
    cout << "array not found" << endl;//-1 will be returned.
    return -1;//NOT FOUND
}

int main(){                                                                 
    int arr[] = {5, 8, 12, 4, 0, 7, 9};                                 
    int size = 7;
    int target;

    cout << "enter the target element : ";
    cin >> target;
    
    cout << linearSearch(arr, size, target) << endl;
    return 0;
}