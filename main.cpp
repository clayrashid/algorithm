#include <iostream>

using namespace std;


//This function retun index of key in array...
//Complexity of this function 0(n)........
int linearSearch(int arr[], int n, int key) {

    for(int i = 0; i < n; i++)
        if(arr[i] == key)
            return i;

    return -1;
}

//This function retun index of key in array...
//Complexity of this function 0(log(n))........
int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

void arrayPrint(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        if(i != 0)
            cout << ", ";
        cout << arr[i];
    }
}

void selectionSort(int arr[], int n) {
    int minIndex;
    for(int i = 0; i < n - 1; i++) {
        minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        if(minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}


int main()
{
    int arr[5] = {5, 3, 8, 1, 9};
    selectionSort(arr, 5);
    arrayPrint(arr, 5);
    return 0;
}
