#include<stdlib.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{    
    int n1;
    std::cout<<"enter n1 :"<<std::endl;
    std::cin>>n1;
    
    if((n1&n1-1)==0)
    cout<<"the number is power of  2";
    else 
    cout<<"the number is not a power of 2";
    return 0;
}