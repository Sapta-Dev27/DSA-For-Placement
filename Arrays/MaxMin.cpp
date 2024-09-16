#include <iostream>
using namespace std;

int getMax( int arr[] , int n ) { 
  int max = INT_MIN;
  for ( int i = 0 ; i < n ; i ++ ) { 
    if ( arr[i] > max) { 
      max = arr[i];
    }
  }
  return max ;
}

int getMin( int arr[] , int n ) { 
  int min = INT_MAX;
  for ( int i = 0 ; i < n ; i ++ ) { 
    if ( arr[i] < min) { 
      min = arr[i];
    }
  }
  return min ;
}

int main()
{
  cout << "Enter the size of the array: " << endl;
  int n;
  cin >> n;
  int arr[n];
  cout << " Enter the array elements :" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << " Maximum element is " << getMax(arr,n)<< endl;
  cout << " Minimum elemnent is " << getMin(arr,n) ;

  return 0;
}