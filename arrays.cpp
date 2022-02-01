#include <iostream>
using namespace std;
// ***************searching in arrays********
// **************kinear search*************
//  time complexity is O(n)
int search(int arr[] , int n , int key){
      for(int i = 0; i<n ; i++){
          if (arr[i]==key){
              return i ;
          }
      }
   return -1;
    
   }
int main()
{
    
    int n ;
    cin>> n;
    int arr[n];
    for(int i = 0; i<n ; i++){
        cin>>arr[i];

    }
    int key;
    cin>>key;
  cout<<search(arr, n ,key)<<endl;

    return 0;
}






//  int marks[4]={18 , 27 , 25 ,77 };

//  for(int i =0 ; i<=3 ; i++ ){
//    cout<<marks[i]<<" ";
//    }
// //    pointers in arrays
// int math[]={45,55,66,78};
// int* p =  math;
// cout<<"the value of *p /mark[0] is "<<*p<<endl;
// cout<<"the value of *p=1 /mark[0] is "<<*(p+1)<<endl;
// cout<<"the value of *p+2 /mark[0] is  "<<*(p+2)<<endl;
// cout<<"the value of *p+3 /mark[0] is "<<*(p+3)<<endl;


// *********************binary search***********************
