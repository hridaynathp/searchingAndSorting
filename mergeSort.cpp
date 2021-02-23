/*
Merge sort implementation:
this algorithm takes input unsorted array,
then devides into two sub arrays using recursive calls
when no further division possible (i.e.-> only one element arrays formed)
these arrays then sent to  be sorted and merged to form single array

Time complexity of this algorithm is O(nlogn)

e.g.

        9 1 4 3             <-main array
    9 1         4 3         <-devided into 2 sub arrays
9       1    4       3
-------------------------------------------------------------
    1 9         3 4         <-merging the arrays by sorting them
        1 3 4 9             <-final sorted array

*/
#include <iostream>
using namespace std;

// Logic to display array
void display(int *arr, int size){
    for(int i=0; i<size; i++)
        cout<<arr[i]<<"\t";
    cout<<endl;
}

// Merge two sorted arrays into single sorted array
void merge(int *leftArr,int *rightArr, int *arr, int leftLen, int rightLen){

    int i,j,k;
    i=j=k=0;

    // Copying elements from two sub-arrays
    // by comparing to main array to form
    // single sorted array
    while(j<leftLen && k<rightLen){
        if(leftArr[j]<rightArr[k])
            arr[i++]=leftArr[j++];
        else
            arr[i++] = rightArr[k++];
    }

    // In case if there are elements left
    // in left sub array, then fill them in main array
    while(j<leftLen)
        arr[i++] = leftArr[j++];

    // In case if there are elements right
    // in left sub array, then fill them in main array
    while(k<rightLen)
        arr[i++] = rightArr[k++];

}

/*
 mergeSort() will mainly devides passed array
 into two sub arrays
 once division is not possible, then it passes two sub arrays
 to merge() function to sort and merge them into single sorted array
*/
void mergeSort(int *arr, int size){

    // If there are less than two
    // elements in array, then no
    // further division is possible
    if(size<2)
        return;

    int mid = size/2;
    int *leftArr, *rightArr;

    // Allocating memmories to sub arrays
    leftArr = (int *)malloc(mid*sizeof(int));
    rightArr = (int *)malloc((size-mid)*sizeof(int));

    // Filling up left array
    for(int i=0; i<mid; i++)
        leftArr[i] = arr[i];

    // Filling up right array
    for(int i=mid; i<size; i++)
        rightArr[i-mid] = arr[i];

    // Devide left sub array further into two subarrays
    mergeSort(leftArr, mid);
    // Devide right sub array further into two subarrays
    mergeSort(rightArr, size-mid);

    // Sort sub arrays and then merge them
    merge(leftArr, rightArr, arr, mid, size-mid);

    // Free up dynamic memory
    free(leftArr);
    free(rightArr);
}

int main()
{
    int arr[] = {12,3,1,7,5,9,4,6}; // array to be sorted
    int size = sizeof(arr)/sizeof(int);
    display(arr, size);
    mergeSort(arr, size);
    display(arr, size);
    return 0;
}
