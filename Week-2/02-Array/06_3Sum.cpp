#include<iostream>
using namespace std;

void checkThreeSum(int arr[] ,int size,int target){

    for(int i=0;i<size;i++){

        for(int j=i+1;j<size;j++){

            for(int k=j+1;k<size;k++){

                if(arr[i]+arr[j]+arr[k]==target){

                    cout << arr[i] << ", " << arr[j] << ", " << arr[k] <<endl;

                }
            }
        }

    }
}

int main()
{
   
   int arr[] = {
 10,20,30,40,50,60};
   int size = 6;

   int target = 60;
   checkThreeSum(arr,size,target);
  
   
return 0;
}