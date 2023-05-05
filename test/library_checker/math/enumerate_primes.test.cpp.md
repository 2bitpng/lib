---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.3/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.3/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.11.3/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.11.3/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: ../../../math/linear_sieve.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBREM \"https://judge.yosupo.jp/problem/enumerate_primes\"\n#include\
    \ \"../../../template.hpp\"\n#include \"../../../math/linear_sieve.hpp\"\nint\
    \ main(){\n  int N,A,B;cin>>N>>A>>B;\n  LinearSieve sieve(N);\n  vector<int> ret;\n\
    \  auto x = sieve.primes();\n  for(ll i=0;A*i+B<x.size();i++){\n    ret.push_back(x[A*i+B]);\n\
    \  }\n  cout<<x.size()<<\" \"<<ret.size()<<endl;\n  for(auto p:ret)cout<<p<<'\
    \ ';\n  cout<<endl;\n}\n"
  dependsOn: []
  isVerificationFile: true
  path: test/library_checker/math/enumerate_primes.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/library_checker/math/enumerate_primes.test.cpp
layout: document
redirect_from:
- /verify/test/library_checker/math/enumerate_primes.test.cpp
- /verify/test/library_checker/math/enumerate_primes.test.cpp.html
title: test/library_checker/math/enumerate_primes.test.cpp
---
