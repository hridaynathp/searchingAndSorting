/*
    Program to search first or last element in array using binary search mechanism
*/
#include <iostream>

using namespace std;

// Search for first or last occurance of number in array
// Here if flag "first" is true then program searches for first occurance else last
int binarySearchOccurance(int *arr, int low, int high, int num, bool first){

    int result=-1;
    int mid;
    while(low<=high){
        mid = low + (high-low)/2;
        if(arr[mid] == num){
            result = mid;

            if(first)
                high = mid-1; // Search first occurance
            else
                low = mid+1; // Search last occurance
        }
        else if(num<arr[mid])
            high = mid-1;
        else
            low = mid+1;
    }
    return result+1;
}

// Logic to display array
void display(int* arr, int len){
    cout<<"Given array is :"<<endl;
    for(int i=0; i<len; i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl<<endl;
}

int main()
{
    int arr[] = {2,5,10,10,10,11};
    int low = 0;
    int high = (sizeof(arr)/sizeof(int));
    int num = 11;

    display(arr, high); //high = len

    // If first = true, it will find first occurance
    // else it will find last occurance
    bool first = true;

    int index = binarySearchOccurance(arr, low, high-1, num, first);

    if(first)
        cout<<num<<"'s first occurance is at: "<<index<<endl;
    else
        cout<<num<<"'s last occurance is at: "<<index<<endl;

    return 0;
}
