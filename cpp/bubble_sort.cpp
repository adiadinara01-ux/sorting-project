#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
}

void bubbleSort(int arr[], int n) {
    for(int i=0;i<n;i++) {
        cout << "Iterasi " << i+1 << ": ";
        print(arr, n);

        for(int j=0;j<n-i-1;j++) {
            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Jumlah data: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan data: ";
    for(int i=0;i<n;i++) cin >> arr[i];

    bubbleSort(arr, n);

    cout << "Hasil sorting: ";
    print(arr, n);
}
