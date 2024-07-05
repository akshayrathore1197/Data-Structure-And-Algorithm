#include <iostream>
using namespace std;

void func(int arr[], int n)
{
  puts("Array elements are ");
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << endl;
  }
}

int main()

{

  // ! static memory allocation of array
  // int arr[5] = {1,2,3,4,5};

  // ! dynamic  memory allocation of array
  int n;
  cin >> n;
  int *arr = new int[n]; // each element would be 0, or garbage
  for (int i = 0; i < n; i++)
  {

    int data;
    cin >> data;
    arr[i] = data;
  }

  func(arr, n);

  return 0;
}
