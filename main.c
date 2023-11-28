#include <stdio.h>
#include <stdbool.h>

void swap(int * arr,int left, int right){
    int t = arr[left];
    arr[left] = arr[right];
    arr[right] = t;
}


int hoarePartition(int arr[],int left,int right){
    int pivot = arr[left];
    int i = left - 1;
    int j = right + 1;

    while(true){
        while (arr[++i] < pivot);

        while (arr[--j] >pivot);

        if(i >= j){
            return i;
        }
        swap(arr,i,j);
    }

}

int lomutoPartition(int arr[], int left , int right){
    int i = left - 1;
    int pivot = arr[right - 1];
    for (int j = left; j <right; j++) {
        if(arr[j] < pivot){
            i++;
            if(i != j){
                swap(arr,i,j);
            }
        }
    }
    swap(arr,i+1,right-1);
    return i + 1;
}



void QuickSort(int A[], int left,int right){
    if(left < right){
        int pivot = lomutoPartition(A,left,right);
        QuickSort(A,0,pivot);
        QuickSort(A,pivot+1,right);

    }

}







void main() {
    int arr[] = {3,5,9,7,10,11,6};
    //int pivot = lomutoPartition(arr, 0, 7);
    QuickSort(arr,0,7);
    printf("%d",1);

}
