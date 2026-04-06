#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
}

void insertionSort(int arr[], int n) {
    for(int i=1;i<n;i++) {
        cout << "Iterasi " << i << ": ";
        print(arr, n);

        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main() {
    int n;
    cout << "Jumlah data: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan data: ";
    for(int i=0;i<n;i++) cin >> arr[i];

    insertionSort(arr, n);

    cout << "Hasil sorting: ";
    print(arr, n);
}
