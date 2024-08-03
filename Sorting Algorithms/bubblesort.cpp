#include <bits/stdc++.h>
using namespace std ;

void bubble_sort(int arr[] ,int  n){ 
     for ( int i = n-1 ; i>=1 ; i-- ) { 
      for ( int j = 0 ; j <= i-1 ; j++ ) { 
          if ( arr[j+1] < arr[j]) { 
            int temp = arr[j+1];
            arr[j+1] = arr[j] ;
            arr[j]=temp;
          }
      }
     }
     cout << " The elements after swaping : " <<endl ;
     for ( int i = 0 ; i< n; i++ ) {
      cout << arr[i] << " ";
     }
}

int main () { 
  int n ;
    cout << " Enter the  no of the array elements : " << endl ;
  cin >> n ;

  int arr[n] ;
  cout << " Enter the array elements : " << endl ;
  for ( int i = 0 ; i < n ; i++ ) { 
    cin >> arr[i] ;
  }
  cout << " The array elements before sorting : " << endl ;
  for ( int i = 0 ; i < n ; i++ ) { 
    cout << arr[i] << " " ;
  }
  cout << " \n" ;
  bubble_sort(arr , n );
  return 0;
}