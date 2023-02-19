#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B"
#include "../../../template.hpp"
#include "../../../data_structure/RSQ_square_decomposition.hpp"
int main(){
  int N,Q;cin>>N>>Q;
  RSQ<ll> rsq(N);
  while(Q--){
    int t;cin>>t;
    if(t==0){
      ll i,x;cin>>i>>x;
      rsq.add(i-1,x);
    }else{
      ll l,r;cin>>l>>r;
      cout<<rsq.query(l-1,r)<<endl;
    }
  }
}

