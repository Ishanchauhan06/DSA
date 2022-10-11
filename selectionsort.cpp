#include <bits/stdc++.h>
using namespace std;

// selection sort based on the technique in which we need to find the smallest element in the array and place it to the correct location

void selectionsort(int arr[], int n)
{  // let say 4 2 5 1 is  given array
  // at i = 0,  arr[0] = 4 and now compare entire array to get smaller element and then swap with 4;
  // we get 1 2 5 4 as new array
  //   at i=1 array become 1 2 5 4
  // at i=2 array become 1 2 4 5  this is sorted array we get

    for(int i=0;i<n-1;i++){
        int minIndex = i;
        for(int j=i+1; j<n;j++){
            if (arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
            
        }
        swap(arr[i],arr[minIndex]);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionsort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
   

    return 0;
}
