#include <stdio.h>
#include <stdbool.h>


int HoarePartition(int arr[],int left,int right){
    int pivot = arr[left];
    int i = left - 1;
    int j = right + 1;

    while(true){
        do {
            i++;
        } while (arr[i] < pivot);

        do {
            j--;
        } while (arr[j] > pivot && j>=0);

        if(i >= j){
            return i;
        }
        int tempData = arr[i];
        arr[i] = arr[j];
        arr[j] = tempData;
    }

}

void QuickSort(int A[], int left,int right){
    if(left < right){
        int pivot = HoarePartition(A,left,right);
        QuickSort(A,0,pivot);
        QuickSort(A,pivot+1,right);

    }

}







void main() {
    int arr[] = {3,5,9,7,4,6,2,1,11,19,17};
    QuickSort(arr,0,6);
    printf("%d",1);

}
