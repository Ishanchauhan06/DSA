#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;

    int first[len1];
    int second[len2];
    int k = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[k++];
    }
    k = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[k++];
    }

    // merge two sorted arrays
    int index1 = 0;
    int index2 = 0;
    k = s;
    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] > second[index2])
        {
            arr[k++] = second[index2++];
        }
        else
        {
            arr[k++] = first[index1++];
        }
    }
    while (index1 < len1)
    {
        arr[k++] = first[index1++];
    }
    while (index2 < len2)
    {
        arr[k++] = second[index2++];
    }
}
void mergesort(int *arr, int s, int e)
{
    int mid = (s + e) / 2;
    if (s >= e)
    {
        return;
    }
    // mergesort in firsthalf part
    mergesort(arr, s, mid);
    // mergesirt in aecond half part
    mergesort(arr, mid + 1, e);
    // merge to arrays
    merge(arr, s, e);
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
    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}