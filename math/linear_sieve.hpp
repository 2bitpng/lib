#pragma once
struct LinearSieve{
  std::vector<int> mpf,ps;
  LinearSieve(int N): mpf(N+1){
    std::iota(mpf.begin(),mpf.end(),0);
    for(int i=2;i<=N;i++){
      if (mpf[i] == i) {
        ps.push_back(i);
      }
      for(int p:ps){
        if(p > mpf[i] || i * p > N){
          break;
        }
        mpf[p * i] = p;
      }
    }
  }
  //nの最小の素因数を求める
  int min_prime_factor(int n) const{
    assert(n>=2 && n < (int)(mpf.size()));
    return mpf[n];
  }
  std::vector<int> primes() const{
    return ps;
  }
  //nが素数であるかを判定する
  bool is_prime(int n) const{
    assert(n<(int)(mpf.size()));
    return (n>=2) && (mpf[n]==n);
  }
  //素因数分解をする
  std::vector<std::pair<int,int>> factorize(int n) const{
    assert(n > 0 && n < mpf.size());
    std::vector<std::pair<int,int>> ret;
    while(n > 1){
      int p = mpf[n];
      int ex = 0;
      while(n%p==0){
        n /= p;
        ex++;
      }
      ret.emplace_back(p,ex);
    }
    return ret;
  }
  std::vector<int> divisord(int n) const{
    std::vector<int> ret{1};
    for(const pair<int,int> p:factorize(n)){
      int m = ret.size();
      for(int i=0;i<m;i++){
        for(int a=1,d=1;d<p.second;d++){
          a *= p.first;
          ret.emplace_back(ret[i]*a);
        }
      }
    }
    sort(ret.begin(),ret.end());
    return ret;
  }
};

