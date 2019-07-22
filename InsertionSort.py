def InsertionSort(A):
    for i in range(1,len(A)):
        key = A[i]
        j = i - 1
        while j>=0 and A[j]>key:
            A[j+1] = A[j]
            j = j-1
        A[j+1] = key
    return A
A = input().split(" ")
k = 0
for i in A:
    A[k] = int(i)
    k = k + 1
B = InsertionSort(A)
print(*B)
