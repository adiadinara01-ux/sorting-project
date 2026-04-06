#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
}

void selectionSort(int arr[], int n) {
    for(int i=0;i<n;i++) {
        cout << "Iterasi " << i+1 << ": ";
        print(arr, n);

        int min_idx = i;
        for(int j=i+1;j<n;j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main() {
    int n;
    cout << "Jumlah data: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan data: ";
    for(int i=0;i<n;i++) cin >> arr[i];

    selectionSort(arr, n);

    cout << "Hasil sorting: ";
    print(arr, n);
}
