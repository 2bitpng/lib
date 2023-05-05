---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: math/math_log.hpp
    title: math/math_log.hpp
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
    PROBLEM: https://judge.yosupo.jp/problem/discrete_logarithm_mod
    links:
    - https://judge.yosupo.jp/problem/discrete_logarithm_mod
  bundledCode: '#line 1 "test/library_checker/math/math_log.test.cpp"

    #define PROBLEM "https://judge.yosupo.jp/problem/discrete_logarithm_mod"

    #line 1 "template.hpp"

    #include <bits/stdc++.h>

    #define rep(i, n) for (int i = 0; i < (int)(n); i++)

    #define all(x) (x).begin(),(x).end()

    #define eb emplace_back

    using namespace std;

    using ll = long long;

    using ld = long double;

    using vl = vector<long long>;

    using vvl = vector<vector<long long>>; using vs = vector<string>;

    using pl = pair<long long, long long>;

    template <typename T> inline bool chmin(T& a, const T& b) {bool compare = a >
    b; if (a > b) a = b; return compare;}

    template <typename T> inline bool chmax(T& a, const T& b) {bool compare = a <
    b; if (a < b) a = b; return compare;}

    template<class T>using rp_queue=priority_queue<T,vector<T>,greater<T>>;

    template <typename T> T gcd(T a, T b) {if (b == 0)return a; else return gcd(b,
    a % b);}

    template <typename T> inline T lcm(T a, T b) {return a /gcd(a, b)*b;}

    const ll INF = 1LL << 60;

    const ld PI = acos(-1);

    #line 1 "math/math_log.hpp"


    #line 4 "test/library_checker/math/math_log.test.cpp"

    int main(){

    }

    '
  code: '#define PROBLEM "https://judge.yosupo.jp/problem/discrete_logarithm_mod"

    #include "../../../template.hpp"

    #include "../../../math/math_log.hpp"

    int main(){

    }

    '
  dependsOn:
  - template.hpp
  - math/math_log.hpp
  isVerificationFile: true
  path: test/library_checker/math/math_log.test.cpp
  requiredBy: []
  timestamp: '2023-05-05 12:37:34+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/library_checker/math/math_log.test.cpp
layout: document
redirect_from:
- /verify/test/library_checker/math/math_log.test.cpp
- /verify/test/library_checker/math/math_log.test.cpp.html
title: test/library_checker/math/math_log.test.cpp
---
