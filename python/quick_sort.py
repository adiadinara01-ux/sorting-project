def quick_sort(arr, low, high, step=[1]):
    if low < high:
        pi = partition(arr, low, high)
        print(f"Iterasi {step[0]}: {arr}")
        step[0] += 1

        quick_sort(arr, low, pi-1)
        quick_sort(arr, pi+1, high)

def partition(arr, low, high):
    pivot = arr[high]
    i = low - 1

    for j in range(low, high):
        if arr[j] < pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]

    arr[i+1], arr[high] = arr[high], arr[i+1]
    return i+1

n = int(input("Jumlah data: "))
data = list(map(int, input().split()))

quick_sort(data, 0, len(data)-1)
print("Hasil:", data)