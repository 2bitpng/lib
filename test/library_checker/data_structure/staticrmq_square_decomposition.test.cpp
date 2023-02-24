#define PROBLEM "https://judge.yosupo.jp/problem/staticrmq"
#include "../../../template.hpp"
#include "../../../data_structure/monoid_square_decomposition.hpp"
ll op(ll a,ll b){
  return min(a,b);
}
const ll e = INF;
int main(){
  int N,Q;cin>>N>>Q;
  monoid_range_query<ll> rmq(N,op,e);
  rep(i,N){
    int a;cin>>a;
    rmq.set(i,a);
  }
  while(Q--){
    int l,r;cin>>l>>r;
    cout<<rmq.prod(l,r)<<endl;
  }
}
