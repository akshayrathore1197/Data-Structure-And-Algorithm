#include<iostream>
#include <climits>
using namespace std;

int findMin(int arr[],int size){
    int min = INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i] <= min){
            min = arr[i];
        }
    }
    return min;
}

int main()
{
   
    
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[100];
    cout << "Enter array elements : \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int min = findMin(arr,size);
    cout<<"Minimum element is "<<min;
   
return 0;
}