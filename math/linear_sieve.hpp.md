---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/library_checker/math/enumerate_primes.test.cpp
    title: test/library_checker/math/enumerate_primes.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/linear_sieve.hpp\"\nstruct LinearSieve{\n  std::vector<int>\
    \ mpf,ps;\n  LinearSieve(int N): mpf(N+1){\n    std::iota(mpf.begin(),mpf.end(),0);\n\
    \    for(int i=2;i<=N;i++){\n      if (mpf[i] == i) {\n        ps.push_back(i);\n\
    \      }\n      for(int p:ps){\n        if(p > mpf[i] || i * p > N){\n       \
    \   break;\n        }\n        mpf[p * i] = p;\n      }\n    }\n  }\n  //n\u306E\
    \u6700\u5C0F\u306E\u7D20\u56E0\u6570\u3092\u6C42\u3081\u308B\n  int min_prime_factor(int\
    \ n) const{\n    assert(n>=2 && n < (int)(mpf.size()));\n    return mpf[n];\n\
    \  }\n  std::vector<int> primes() const{\n    return ps;\n  }\n  //n\u304C\u7D20\
    \u6570\u3067\u3042\u308B\u304B\u3092\u5224\u5B9A\u3059\u308B\n  bool is_prime(int\
    \ n) const{\n    assert(n<(int)(mpf.size()));\n    return (n>=2) && (mpf[n]==n);\n\
    \  }\n  //\u7D20\u56E0\u6570\u5206\u89E3\u3092\u3059\u308B\n  std::vector<std::pair<int,int>>\
    \ factorize(int n) const{\n    assert(n > 0 && n < mpf.size());\n    std::vector<std::pair<int,int>>\
    \ ret;\n    while(n > 1){\n      int p = mpf[n];\n      int ex = 0;\n      while(n%p==0){\n\
    \        n /= p;\n        ex++;\n      }\n      ret.emplace_back(p,ex);\n    }\n\
    \    return ret;\n  }\n  std::vector<int> divisord(int n) const{\n    std::vector<int>\
    \ ret{1};\n    for(const pair<int,int> p:factorize(n)){\n      int m = ret.size();\n\
    \      for(int i=0;i<m;i++){\n        for(int a=1,d=1;d<p.second;d++){\n     \
    \     a *= p.first;\n          ret.emplace_back(ret[i]*a);\n        }\n      }\n\
    \    }\n    sort(ret.begin(),ret.end());\n    return ret;\n  }\n};\n\n"
  code: "#pragma once\nstruct LinearSieve{\n  std::vector<int> mpf,ps;\n  LinearSieve(int\
    \ N): mpf(N+1){\n    std::iota(mpf.begin(),mpf.end(),0);\n    for(int i=2;i<=N;i++){\n\
    \      if (mpf[i] == i) {\n        ps.push_back(i);\n      }\n      for(int p:ps){\n\
    \        if(p > mpf[i] || i * p > N){\n          break;\n        }\n        mpf[p\
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
    \    }\n    sort(ret.begin(),ret.end());\n    return ret;\n  }\n};\n\n"
  dependsOn: []
  isVerificationFile: false
  path: math/linear_sieve.hpp
  requiredBy: []
  timestamp: '2023-02-24 16:30:32+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/library_checker/math/enumerate_primes.test.cpp
documentation_of: math/linear_sieve.hpp
layout: document
redirect_from:
- /library/math/linear_sieve.hpp
- /library/math/linear_sieve.hpp.html
title: math/linear_sieve.hpp
---
