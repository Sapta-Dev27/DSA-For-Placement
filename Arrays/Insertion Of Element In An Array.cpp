#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << "Enter the value of n : " << endl;
  cin >> n;
  int arr[n];
  int size;
  cout << " Enter the size of the array : " <<endl;
  cin >> size;
  if (size > n)
  {
    cout << "Array size is larger than the array size ";
  }
  else
  {
    cout << "Enter the array elements : " << endl;
    for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }
    cout << "The array elements before insertion are : " << endl;
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " " ;
    }
    cout << "\n" ;
    int pos, num;
    cout << " Enter the position where the element is to be inserted : " << endl;
    cin >> pos;
    cout << " Enter the number that is to be inserted " << endl;
    cin >> num;
    if (pos <= 0 || pos >= (size + 1))
    {
      cout << "Invalid Input ";
    }
    else
    {
      for (int i = size; i >= pos - 1; i--)
      {
        arr[i + 1] = arr[i];
      }
      arr[pos - 1] = num;
      size++;
      cout << "The array elements after insertion of " << num << " at " << pos << " is" << endl;
      for (int i = 0; i < size; i++)
      {
        cout << arr[i] << " ";
      }
    }
  }
  return 0;
}