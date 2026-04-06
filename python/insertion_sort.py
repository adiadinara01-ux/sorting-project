def insertion_sort(arr):
    for i in range(1, len(arr)):
        key = arr[i]
        j = i - 1

        print(f"Iterasi {i}: {arr}")

        while j >= 0 and key < arr[j]:
            arr[j+1] = arr[j]
            j -= 1
        arr[j+1] = key
    return arr

n = int(input("Jumlah data: "))
data = list(map(int, input().split()))

print("Hasil:", insertion_sort(data))
