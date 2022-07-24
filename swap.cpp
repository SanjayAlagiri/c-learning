#include <bits/stdc++.h>
using namespace std;

 /*printarray(int arr[] , int n);*/

 void swap(int arr[] , int start , int end)
{
    while (start <= end )
    {
    int temp;
    temp = arr[start] ;
    arr[start] = arr[end] ;
    arr[end] = temp;
    start++;
    end--;
    }
    
}
void printarray (int arr[] , int n)
{
     for(int i=0 ; i<n ; i++)
     cout << arr[i] << " ";
     cout << endl;
} 

int main()
{
    int arr[10],n,s,i;
    cout << "enter the length";
    cin >> s;
    n=s;
    for (i = 0 ; i < s ; i++)
    {
        cin >> arr[i];
    }
    cout << "before swap";
    printarray (arr , s);
    cout << "after swap";
    swap( arr , 0  , s-1);
    printarray (arr ,s );
}