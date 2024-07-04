#include<iostream>
using namespace std;

void rotateArray(int arr[],int size,int shift){

int finalShift = shift % size;
if(finalShift == 0){
    return;
}
int temp[100];
int index =0;
for(int i=size - finalShift;i<size;i++){
    temp[index] = arr[i];
    index++;
}
for(int i=size-1;i>=0;i--){
    arr[i] = arr[i-finalShift];
  
}
for(int i=0;i<finalShift;i++){
    arr[i] = temp[i];
}
}

int main()
{
   
    
int arr[] = { 10,20,30,40,50,60};
int size =6;
int shift = 3;
cout<<"Before : ";
   for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
rotateArray(arr,size,shift);

cout<<"After : ";
   for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
cout<<endl;
   
return 0;
}