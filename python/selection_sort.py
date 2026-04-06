def selection_sort(arr):
    n = len(arr)
    for i in range(n):
        min_idx = i
        print(f"Iterasi {i+1}: {arr}")
        for j in range(i+1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
    return arr

n = int(input("Jumlah data: "))
data = list(map(int, input("Masukkan data: ").split()))

print("Hasil:", selection_sort(data))
