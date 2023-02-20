#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B"
#include "../../../template.hpp"
#include "../../../data_structure/monoid_square_decomposition.hpp"
ll op(ll a,ll b){
  return a+b;
}
const ll e = 0;
int main(){
  int N,Q;cin>>N>>Q;
  monoid_range_query_square<ll> rsq(N,op,e);
  while(Q--){
    int t;cin>>t;
    if(t==0){
      ll i,x;cin>>i>>x;
      rsq.add(i-1,x);
    }else{
      ll l,r;cin>>l>>r;
      cout<<rsq.prod(l-1,r)<<endl;
    }
  }
}

