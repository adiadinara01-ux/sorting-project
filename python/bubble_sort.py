def bubble_sort(arr):
    n = len(arr)
    for i in range(n):
        print(f"Iterasi {i+1}: {arr}")
        for j in range(0, n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
    return arr

n = int(input("Jumlah data: "))
data = list(map(int, input("Masukkan data: ").split()))

hasil = bubble_sort(data)
print("Hasil sorting:", hasil)
