#include <iostream>
using namespace std ;

void display(int arr[] , int n ){
     for ( int i = 0 ; i < n ; i ++ ) {
      cout << arr[i] << " " <<endl;
     }
}

int LinearSearch(int arr[] , int n , int value ) { 
  for ( int i = 0 ; i < n  ; i++ ) {
      if ( arr[i] == value) {
        return value ;
      }
  }
  return 0;
}

int main () { 
    int n ;
    cout << "Enter the size of the array :"<< endl ;
    cin >> n ;
    int arr[n];
    cout<< " Enter the array elements :"<< endl;
    for ( int i = 0 ; i < n ; i++ ) {
      cin >> arr[i];
    }
    cout << " Displaying the array elements " << endl;
    display(arr , n);
    int value ;
    cout << "Enter the value to be checked:"<< endl ;
    cin >> value ;
    int valueCheck = LinearSearch(arr , n , value);
    if ( value == valueCheck) { 
      cout << "Value found in the array"<< endl ;
    }
    else {
      cout << " NOT FOUND " ;
    }
    return 0 ;
}