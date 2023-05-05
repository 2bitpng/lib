---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/data_structure/Range_Sum_Query._square_decomposition.test.cpp
    title: test/aoj/data_structure/Range_Sum_Query._square_decomposition.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/library_checker/data_structure/staticrmq_square_decomposition.test.cpp
    title: test/library_checker/data_structure/staticrmq_square_decomposition.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: '#line 1 "template.hpp"

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

    '
  code: '#include <bits/stdc++.h>

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

    '
  dependsOn: []
  isVerificationFile: false
  path: template.hpp
  requiredBy: []
  timestamp: '2023-05-05 12:34:26+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/data_structure/Range_Sum_Query._square_decomposition.test.cpp
  - test/library_checker/data_structure/staticrmq_square_decomposition.test.cpp
documentation_of: template.hpp
layout: document
redirect_from:
- /library/template.hpp
- /library/template.hpp.html
title: template.hpp
---
