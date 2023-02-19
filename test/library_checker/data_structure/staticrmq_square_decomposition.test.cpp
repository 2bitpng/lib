#define PROBLEM "https://judge.yosupo.jp/problem/staticrmq"
#include "../../../template.hpp"
#include "../../../data_structure/RMQ_square_decomposition.hpp"
int main(){
  int N,Q;cin>>N>>Q;
  RMQ<ll> rmq(N);
  rep(i,N){
    int a;cin>>a;
    rmq.set(i,a);
  }
  while(Q--){
    int l,r;cin>>l>>r;
    cout<<rmq.prod(l,r)<<endl;
  }
}
