#include<stdio.h>
#include<stdlib.h>
void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void PrintArray(int* arr, int size)
{
    for (int i = 0; i < size; i++)printf(" %d", arr[i]); 
    printf("\n");
}
void SelectionSort(int *arr, int n)
{
    int  j;
    for (int i = 0; i < n-1; i++)
    {
        int min_idx = i;
        for (int j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])min_idx = j;
        swap(arr + min_idx, arr + i);
    }
    printf("Selection Sort:");PrintArray(arr,n);
}
void BubbleSort(int* arr,int size)
{
    for (int i = 0; i < size - 1; i++)for (int j = 0; j < size - i - 1; j++)
        if (arr[j] > arr[j + 1])swap(arr + j, arr + j + 1);
    printf("Bubble Sort:");PrintArray(arr,size);
}
void InsertionSort(int* arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printf("InsertionSort:");PrintArray(arr,size);
}
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)L[i] = arr[l + i];
    for (j = 0; j < n2; j++)R[j] = arr[m + 1 + j];
    i = 0;j = 0;k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];i++;
        }
        else {
            arr[k] = R[j];j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];i++;k++;
    }
    while (j < n2) {
        arr[k] = R[j];j++;k++;
    }
}
void MergeSort(int* arr, int l, int r)
{
    if (l < r) {
        int m = l + (r - l) / 2;
        MergeSort(arr, l, m);
        MergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low- 1);  
    for (int j = low; j <= high - 1; j++)
        if (arr[j] < pivot) {
            i++;swap(&arr[i], &arr[j]);
        }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void QuickSort(int arr[], int low, int high)
{
    if (low < high) {
        int pi = partition(arr, low, high);
        QuickSort(arr, low, pi - 1);
        QuickSort(arr, pi + 1, high);
    }
}
void heapify(int *arr, int N, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < N && arr[left] > arr[largest])
        largest = left;
    if (right < N && arr[right] > arr[largest])
        largest = right;
    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        heapify(arr, N, largest);
    }
}
void HeapSort(int *arr, int N)
{
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);
    for (int i = N - 1; i >= 0; i--) {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
    printf("Heap Sort:");PrintArray(arr,N);
}
int main()
{
    printf("Enter Size of Array:");
    int size;scanf("%d",&size);
    int arr1[size],arr2[size],arr3[size],arr4[size],arr5[size],arr6[size];
    printf("Enter Elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",arr1 + i);
        arr2[i] = arr1[i];
        arr3[i] = arr2[i];
        arr4[i] = arr3[i];
        arr5[i] = arr4[i];
        arr6[i] = arr5[i];
    }
    SelectionSort(arr1,size);
    BubbleSort(arr2,size);
    InsertionSort(arr3,size);
    MergeSort(arr4,0,size-1);
    QuickSort(arr5,0,size-1);
    HeapSort(arr5,size);

    printf("Merge Sort:");PrintArray(arr4,size);
    printf("Quick Sort:");PrintArray(arr5,size);
}
