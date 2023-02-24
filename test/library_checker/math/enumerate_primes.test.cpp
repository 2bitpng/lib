#define PROBREM "https://judge.yosupo.jp/problem/enumerate_primes"
#include "../../../template.hpp"
#include "../../../math/linear_sieve.hpp"
int main(){
  int N,A,B;cin>>N>>A>>B;
  LinearSieve sieve(N);
  vector<int> ret;
  auto x = sieve.primes();
  for(ll i=0;A*i+B<x.size();i++){
    ret.push_back(x[A*i+B]);
  }
  cout<<x.size()<<" "<<ret.size()<<endl;
  for(auto p:ret)cout<<p<<' ';
  cout<<endl;
}
