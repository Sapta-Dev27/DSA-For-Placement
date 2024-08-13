#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cout << " Enter the value of n " <<endl;
  cin >> n;
  int size;
  cout << " Enter the value of size " << endl;
  cin >> size;
  int arr[n];
  if (size > n)
  {
    cout << " Size is greater than n ";
  }
  else
  {
    cout << "Enter the array elements " << endl;
    for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }
    cout << " The array elements before insertion are " << endl;
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    cout << "\n";
    int pos;
    cout << "Enter the position where the element is to be deleted : " << endl;
    cin >>pos;
    if (pos <= 0 || pos >= (size + 1))
    {
      cout << "Invalid position ";
    }
    else
    {
      for (int i = pos - 1; i < size - 1; i++)
      {
        arr[i] = arr[i + 1];
      }
      size--;
    }
    cout << " The array elements after deletion are " << endl;
    for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " ";
    }
    return 0;
  }
}