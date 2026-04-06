#include <iostream>
using namespace std;

void print(int arr[], int n) {
    for(int i=0;i<n;i++) cout << arr[i] << " ";
    cout << endl;
}

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for(int i=0;i<n1;i++) L[i] = arr[l+i];
    for(int j=0;j<n2;j++) R[j] = arr[m+1+j];

    int i=0, j=0, k=l;

    while(i<n1 && j<n2) {
        if(L[i] < R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }

    while(i<n1) arr[k++] = L[i++];
    while(j<n2) arr[k++] = R[j++];
}

void mergeSort(int arr[], int l, int r, int n, int &step) {
    if(l < r) {
        int m = (l + r) / 2;

        mergeSort(arr, l, m, n, step);
        mergeSort(arr, m+1, r, n, step);

        merge(arr, l, m, r);

        cout << "Iterasi " << step++ << ": ";
        print(arr, n);
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
    mergeSort(arr, 0, n-1, n, step);

    cout << "Hasil sorting: ";
    print(arr, n);
}
