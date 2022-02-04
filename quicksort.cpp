#include<bits/stdc++.h>
using namespace std; 

int partition(int* arr, int s, int e){
    int pivot = arr[s];
    int cnt=0;
    for (int i = s+1; i<=e; i++)
    {
     if(arr[i]<=pivot){
      cnt++;
     }   
    }
    // pivotindex location
    int pivotindex = s + cnt;
    swap(arr[pivotindex],arr[s]);
    // correcting the position of elementwhich is at left and right of pivot 
    int i=s;
    int j = e;
    while (i<pivotindex && j> pivotindex)
    {
      while (arr[i]<=pivot)
      {
          i++;
      }
      while (arr[j]>pivot)
      {
          j--;
      }  
    }
    if(i<pivotindex && j> pivotindex){
        swap(arr[i++],arr[j--]);
    }
   return pivotindex; 
}
void quicksort(int* arr, int s, int e ){
    if(s<e){
    int p = partition(arr,s,e);
    //left part
    quicksort(arr,s,p-1);
    //right part
    quicksort(arr,p+1,e);
    }
}
int main(){
   int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quicksort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
   
return 0;
}