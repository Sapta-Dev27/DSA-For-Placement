#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n)
{
  for (int i = 0; i <= n - 2; i++)
  {
    int min = i;
    for (int j = i; j <= n - 1; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
    }
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
     cout << " The array elements after sorting : " << endl ;
     for ( int i = 0 ; i < n ; i++ ) { 
      cout << arr[i] << " " ;
     }
}

int main()
{
  int n;
  cout << " Enter the no. of elements : " << endl;
  cin >> n;
  int arr[n];
  cout << " Enter the array elements : " << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << " The array elements before sorting : " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  selection_sort( arr , n);
  return 0 ;
}