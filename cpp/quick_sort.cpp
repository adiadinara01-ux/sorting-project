#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for(int j=low;j<high;j++) {
        if(arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high, int n, int &step) {
    if(low < high) {
        int pi = partition(arr, low, high);

        cout << "Iterasi " << step++ << ": ";
        print(arr, n);

        quickSort(arr, low, pi-1, n, step);
        quickSort(arr, pi+1, high, n, step);
    }
}

int main() {
    int n;
    cout << "Jumlah data: ";
    cin >> n;

    int arr[n];
    cout << "Masukkan data: ";
    for(int i=0;i<n;i++) cin >> arr[i];

    int step = 1;
    quickSort(arr, 0, n-1, n, step);

    cout << "Hasil sorting: ";
    print(arr, n);
}
