#include <bits/stdc++.h>
using namespace std ;

void insertion_sort( int arr[] , int n ) { 
    for ( int i = 0 ; i <= n-1 ; i++ ){ 
         int j = i ;
         while( j > 0 && arr[j-1] > arr[j]){ 
             int temp = arr[j];
             arr[j] = arr[j-1];
             arr[j-1] = temp ;
             j-- ;
         }
    }
    cout << " The elements after swaping : " <<endl ;
     for ( int i = 0 ; i< n; i++ ) {
      cout << arr[i] << " ";
     }
}


int main() { 
  int n ; 
  cout << " Enter the no of elements  : " <<endl ;
  cin >> n ;
  int arr[n];
  cout << " Enter the array elements : " <<endl ;
  for ( int i = 0 ; i < n ; i++ ) { 
    cin >> arr[i] ;
  }
  cout << " The array elements before sorting are : " <<endl ;
  for ( int i = 0 ; i < n ; i++ ) {
    cout << arr[i] << " " ;
  }
  cout << "\n" ;
  insertion_sort( arr , n );
  return 0;
}