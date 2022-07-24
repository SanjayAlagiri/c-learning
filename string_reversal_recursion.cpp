#include<bits/stdc++.h>
using namespace std;

void printarray(int arr[] ,int s)
{
  for (int i = 0 ; i<s ; i++)
    cout << arr[i] << " ";
}
void reversal(int sam[] , int start ,int end)
{ 
  int temp;
  if( start > end )
    return;
    temp = sam[start] ;
    sam[start] = sam[end] ;
    sam[end] = temp;
    
    reversal(sam , start +1 , end -1);
}
 
int main()
{
    int sam[20],s;
    cout << "enter the array size\n";
    cin >> s;
    cout << "enter the array\n";
    for (int i = 0 ; i < s ; i++)
    cin >> sam[i];
    printarray(sam , s); 
    cout << endl;
    reversal( sam , 0 , s-1);
    printarray(sam, s);
}