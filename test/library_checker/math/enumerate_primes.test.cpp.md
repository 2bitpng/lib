---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: math/linear_sieve.hpp
    title: math/linear_sieve.hpp
  - icon: ':question:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    links:
    - https://judge.yosupo.jp/problem/enumerate_primes
  bundledCode: "#line 1 \"test/library_checker/math/enumerate_primes.test.cpp\"\n\
    #define PROBREM \"https://judge.yosupo.jp/problem/enumerate_primes\"\n#line 1\
    \ \"template.hpp\"\n#include <bits/stdc++.h>\n#define rep(i, n) for (int i = 0;\
    \ i < (int)(n); i++)\n#define all(x) (x).begin(),(x).end()\n#define fix(x) fixed\
    \ << setprecision(x)\n#define eb emplace_back\nconstexpr char nl='\\n';\nusing\
    \ namespace std;\nusing ll = long long;\nusing ld = long double;\nusing vl = vector<long\
    \ long>;\nusing vvl = vector<vector<long long>>;\nusing vs = vector<string>;\n\
    using pl = pair<long long, long long>;\ntemplate <typename T> inline bool chmin(T&\
    \ a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}\ntemplate\
    \ <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a\
    \ < b) a = b; return compare;}\ntemplate<class T>using rp_queue=priority_queue<T,vector<T>,greater<T>>;\n\
    void fast_io(){cin.tie(nullptr);ios_base::sync_with_stdio(false);}\ntemplate <typename\
    \ T> T gcd(T a, T b) {if (b == 0)return a; else return gcd(b, a % b);}\ntemplate\
    \ <typename T> inline T lcm(T a, T b) {return a /gcd(a, b)*b;}\nconst ll INF =\
    \ 1LL << 60;\nconst ld PI = acos(-1);\n#line 2 \"math/linear_sieve.hpp\"\nstruct\
    \ LinearSieve{\n  std::vector<int> mpf,ps;\n  LinearSieve(int N): mpf(N+1){\n\
    \    std::iota(mpf.begin(),mpf.end(),0);\n    for(int i=2;i<=N;i++){\n      if\
    \ (mpf[i] == i) {\n        ps.push_back(i);\n      }\n      for(int p:ps){\n \
    \       if(p > mpf[i] || i * p > N){\n          break;\n        }\n        mpf[p\
    \ * i] = p;\n      }\n    }\n  }\n  //n\u306E\u6700\u5C0F\u306E\u7D20\u56E0\u6570\
    \u3092\u6C42\u3081\u308B\n  int min_prime_factor(int n) const{\n    assert(n>=2\
    \ && n < (int)(mpf.size()));\n    return mpf[n];\n  }\n  std::vector<int> primes()\
    \ const{\n    return ps;\n  }\n  //n\u304C\u7D20\u6570\u3067\u3042\u308B\u304B\
    \u3092\u5224\u5B9A\u3059\u308B\n  bool is_prime(int n) const{\n    assert(n<(int)(mpf.size()));\n\
    \    return (n>=2) && (mpf[n]==n);\n  }\n  //\u7D20\u56E0\u6570\u5206\u89E3\u3092\
    \u3059\u308B\n  std::vector<std::pair<int,int>> factorize(int n) const{\n    assert(n\
    \ > 0 && n < mpf.size());\n    std::vector<std::pair<int,int>> ret;\n    while(n\
    \ > 1){\n      int p = mpf[n];\n      int ex = 0;\n      while(n%p==0){\n    \
    \    n /= p;\n        ex++;\n      }\n      ret.emplace_back(p,ex);\n    }\n \
    \   return ret;\n  }\n  std::vector<int> divisord(int n) const{\n    std::vector<int>\
    \ ret{1};\n    for(const pair<int,int> p:factorize(n)){\n      int m = ret.size();\n\
    \      for(int i=0;i<m;i++){\n        for(int a=1,d=1;d<p.second;d++){\n     \
    \     a *= p.first;\n          ret.emplace_back(ret[i]*a);\n        }\n      }\n\
    \    }\n    sort(ret.begin(),ret.end());\n    return ret;\n  }\n};\n\n#line 4\
    \ \"test/library_checker/math/enumerate_primes.test.cpp\"\nint main(){\n  int\
    \ N,A,B;cin>>N>>A>>B;\n  LinearSieve sieve(N);\n  vector<int> ret;\n  auto x =\
    \ sieve.primes();\n  for(ll i=0;A*i+B<x.size();i++){\n    ret.push_back(x[A*i+B]);\n\
    \  }\n  cout<<x.size()<<\" \"<<ret.size()<<endl;\n  for(auto p:ret)cout<<p<<'\
    \ ';\n  cout<<endl;\n}\n"
  code: "#define PROBREM \"https://judge.yosupo.jp/problem/enumerate_primes\"\n#include\
    \ \"../../../template.hpp\"\n#include \"../../../math/linear_sieve.hpp\"\nint\
    \ main(){\n  int N,A,B;cin>>N>>A>>B;\n  LinearSieve sieve(N);\n  vector<int> ret;\n\
    \  auto x = sieve.primes();\n  for(ll i=0;A*i+B<x.size();i++){\n    ret.push_back(x[A*i+B]);\n\
    \  }\n  cout<<x.size()<<\" \"<<ret.size()<<endl;\n  for(auto p:ret)cout<<p<<'\
    \ ';\n  cout<<endl;\n}\n"
  dependsOn:
  - template.hpp
  - math/linear_sieve.hpp
  isVerificationFile: true
  path: test/library_checker/math/enumerate_primes.test.cpp
  requiredBy: []
  timestamp: '2023-02-24 16:40:30+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/library_checker/math/enumerate_primes.test.cpp
layout: document
redirect_from:
- /verify/test/library_checker/math/enumerate_primes.test.cpp
- /verify/test/library_checker/math/enumerate_primes.test.cpp.html
title: test/library_checker/math/enumerate_primes.test.cpp
---
