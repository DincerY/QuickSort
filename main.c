#include <stdio.h>
#include <stdbool.h>


void HoarePartition(int arr[],int left,int right){
    int pivot = arr[pivot];
    int i = left - 1;
    int j = right + 1;

    while(true){
        do {
            i++;
        } while (arr[i] < pivot);

        do {
            j--;
        } while (arr[j] > pivot);



    }
    int tempData = arr[i];
    arr[i] = arr[pivot];
    arr[pivot] = tempData;


}



void QuickSort(int A[], int left,int right){
    HoarePartition(A,left,right);

    /*QuickSort();
    QuickSort();*/

}



void main() {
    int arr[] = {5,9,7,4,6};
    QuickSort(arr,0,4);

}
