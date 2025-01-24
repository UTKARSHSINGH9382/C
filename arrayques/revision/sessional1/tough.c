#include <stdio.h>

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}


void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

    
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}


void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    
    int L[n1], R[n2];


    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        R[i] = arr[mid + 1 + i];


    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);       
        mergeSort(arr, mid + 1, right);  

        merge(arr, left, mid, right);    
    }
}


int partition(int arr[], int low, int high) {
    int pivot = arr[high];  
    int i = low - 1;       

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  
        quickSort(arr, low, pi - 1);         
        quickSort(arr, pi + 1, high);        
    }
}


void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, choice;
    

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];

  
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Select the sorting algorithm:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("4. Merge Sort\n");
    printf("5. Quick Sort\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

  
    switch (choice) {
        case 1:
            bubbleSort(arr, n);
            printf("Sorted array using Bubble Sort: ");
            printArray(arr, n);
            break;
        case 2:
            selectionSort(arr, n);
            printf("Sorted array using Selection Sort: ");
            printArray(arr, n);
            break;
        case 3:
            insertionSort(arr, n);
            printf("Sorted array using Insertion Sort: ");
            printArray(arr, n);
            break;
        case 4:
            mergeSort(arr, 0, n - 1);
            printf("Sorted array using Merge Sort: ");
            printArray(arr, n);
            break;
        case 5:
            quickSort(arr, 0, n - 1);
            printf("Sorted array using Quick Sort: ");
            printArray(arr, n);
            break;
        default:
            printf("Invalid choice! Please choose a number between 1 and 5.\n");
    }

    return 0;
}
