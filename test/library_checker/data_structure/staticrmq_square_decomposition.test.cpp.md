---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data_structure/monoid_square_decomposition.hpp
    title: data_structure/monoid_square_decomposition.hpp
  - icon: ':heavy_check_mark:'
    path: template.hpp
    title: template.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/staticrmq
    links:
    - https://judge.yosupo.jp/problem/staticrmq
  bundledCode: "#line 1 \"test/library_checker/data_structure/staticrmq_square_decomposition.test.cpp\"\
    \n#define PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\n#line 1 \"template.hpp\"\
    \n#include <bits/stdc++.h>\n#define rep(i, n) for (int i = 0; i < (int)(n); i++)\n\
    #define all(x) (x).begin(),(x).end()\n#define fix(x) fixed << setprecision(x)\n\
    #define eb emplace_back\nconstexpr char nl='\\n';\nusing namespace std;\nusing\
    \ ll = long long;\nusing ld = long double;\nusing vl = vector<long long>;\nusing\
    \ vvl = vector<vector<long long>>;\nusing vs = vector<string>;\nusing pl = pair<long\
    \ long, long long>;\ntemplate <typename T> inline bool chmin(T& a, const T& b)\
    \ {bool compare = a > b; if (a > b) a = b; return compare;}\ntemplate <typename\
    \ T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a < b) a =\
    \ b; return compare;}\ntemplate<class T>using rp_queue=priority_queue<T,vector<T>,greater<T>>;\n\
    void fast_io(){cin.tie(nullptr);ios_base::sync_with_stdio(false);}\ntemplate <typename\
    \ T> T gcd(T a, T b) {if (b == 0)return a; else return gcd(b, a % b);}\ntemplate\
    \ <typename T> inline T lcm(T a, T b) {return a /gcd(a, b)*b;}\nconst ll INF =\
    \ 1LL << 60;\nconst ld PI = acos(-1);\n#line 1 \"data_structure/monoid_square_decomposition.hpp\"\
    \n\n//\u53C2\u8003\n//https://www.slideshare.net/iwiwi/ss-3578491\n//https://kujira16.hateblo.jp/entry/2016/12/15/000000\n\
    //https://algo-logic.info/segment-tree/\n//\u87FB\u672CP167~\ntemplate<typename\
    \ T>\nstruct monoid_range_query_square{\n  using FX = function<T(T, T)>;\n  int\
    \ N,B;\n  FX fx;\n  const T ex;\n  vector<T> data_,bucket_data_;\n  monoid_range_query_square(int\
    \ N_,FX fx_, T ex_) : N(N_),fx(fx_),ex(ex_),data_(N,ex_){\n    B = sqrt(N) + 1;\n\
    \    bucket_data_.assign(B,ex_);\n  }\n  T get(int i){\n    return data_[i];\n\
    \  }\n  void set(int i,T x){\n    data_[i] = x;\n    int k = i/B;\n    T now =\
    \ ex;\n    for(int i=k*B;i<(k+1)*B;i++){\n      now = fx(now,data_[i]);\n    }\n\
    \    bucket_data_[k] = now;\n  }\n  void add(int i,T x){\n    set(i,get(i)+x);\n\
    \  }\n  T prod(int l,int r){\n    T now = ex;\n    for(int b=0;b<=B;b++){\n  \
    \    int x=b*B,y=(b+1)*B;\n      if(y<=l||r<=x)continue;\n      if(l<=x&&y<=r){\n\
    \        now=fx(now,bucket_data_[b]);\n      }else{\n        for(int i=max<int>(l,x);i<min<int>(r,y);i++){\n\
    \          now=fx(now,data_[i]);\n        }\n      }\n    }\n    return now;\n\
    \  }\n};\n#line 4 \"test/library_checker/data_structure/staticrmq_square_decomposition.test.cpp\"\
    \nll op(ll a,ll b){\n  return min(a,b);\n}\nconst ll e = INF;\nint main(){\n \
    \ int N,Q;cin>>N>>Q;\n  monoid_range_query_square<ll> rmq(N,op,e);\n  rep(i,N){\n\
    \    int a;cin>>a;\n    rmq.set(i,a);\n  }\n  while(Q--){\n    int l,r;cin>>l>>r;\n\
    \    cout<<rmq.prod(l,r)<<endl;\n  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\n#include \"\
    ../../../template.hpp\"\n#include \"../../../data_structure/monoid_square_decomposition.hpp\"\
    \nll op(ll a,ll b){\n  return min(a,b);\n}\nconst ll e = INF;\nint main(){\n \
    \ int N,Q;cin>>N>>Q;\n  monoid_range_query_square<ll> rmq(N,op,e);\n  rep(i,N){\n\
    \    int a;cin>>a;\n    rmq.set(i,a);\n  }\n  while(Q--){\n    int l,r;cin>>l>>r;\n\
    \    cout<<rmq.prod(l,r)<<endl;\n  }\n}\n"
  dependsOn:
  - template.hpp
  - data_structure/monoid_square_decomposition.hpp
  isVerificationFile: true
  path: test/library_checker/data_structure/staticrmq_square_decomposition.test.cpp
  requiredBy: []
  timestamp: '2023-02-20 09:11:12+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/library_checker/data_structure/staticrmq_square_decomposition.test.cpp
layout: document
redirect_from:
- /verify/test/library_checker/data_structure/staticrmq_square_decomposition.test.cpp
- /verify/test/library_checker/data_structure/staticrmq_square_decomposition.test.cpp.html
title: test/library_checker/data_structure/staticrmq_square_decomposition.test.cpp
---
