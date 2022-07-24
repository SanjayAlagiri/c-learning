#include<bits/stdc++.h>
using namespace std;
int main()
{

int nums[10]= {1,5,3,4};

/*for(int i=0 ; i < nums.size() ; i++) {
            for(int j = i+1 ; j < nums.size() ; j++){
                  if(nums[j]==nums[i]){
                      cout << "true";
                      break;
                    }
                   
                }
    }
    cout << "false" << endl;
   return 0;*/
    sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size();i++)
    {
    if(nums[i]==nums[i-1]) 
        return true;
    }
    return false;

}