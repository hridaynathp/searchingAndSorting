/*
    Linear search Algorithm
    Time complexity: O(n)
*/
#include <iostream>

using namespace std;


int main()
{
    cout << "Hello world!" << endl;
    int arr[]={1,2,8,5,3,9};
    int arrSize = sizeof(arr)/sizeof(int);

    // Find element 'num' in given array
    int num = 5;

    for(int i=0; i<arrSize; i++){
        if(arr[i] == num){
            cout<<"found element: "<<num<<" in array!"<<endl;
            return 0;
        }
        if(i==arrSize-1){
            cout<<"element "<<num<<" not found in array!!"<<endl;
        }
    }

    return 0;
}
