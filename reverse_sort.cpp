#include<bits/stdc++.h>

using namespace std;

#define vi vector<int>

int reverse_sort(vi &L){
  int cost=0;
  for(int i=0; i < L.size()-1 ; i++){
    
    int m = *min_element(L.begin()+i,L.end());

    auto x = find(L.begin(),L.end(),m);

    reverse(L.begin()+i,x+1);

    cost += distance(L.begin(),x)-i+1;
  }
  return cost;
}

int main(){
  int T;
  cin >> T;

  for (int c=1; c<T+1 ; c++){

      int N;
      cin>>N;

      vi L;

      for (int b=0; b<N; b++){
        int num;
        cin>>num;
        L.push_back(num);
        }
       cout << "case#:" << c << "\t" << reverse_sort(L);
  }
}


