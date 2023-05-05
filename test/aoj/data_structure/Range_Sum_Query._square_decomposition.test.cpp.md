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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B
  bundledCode: "#line 1 \"test/aoj/data_structure/Range_Sum_Query._square_decomposition.test.cpp\"\
    \n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B\"\n#line\
    \ 1 \"template.hpp\"\n#include <bits/stdc++.h>\n#define rep(i, n) for (int i =\
    \ 0; i < (int)(n); i++)\n#define all(x) (x).begin(),(x).end()\n#define eb emplace_back\n\
    using namespace std;\nusing ll = long long;\nusing ld = long double;\nusing vl\
    \ = vector<long long>;\nusing vvl = vector<vector<long long>>; using vs = vector<string>;\n\
    using pl = pair<long long, long long>;\ntemplate <typename T> inline bool chmin(T&\
    \ a, const T& b) {bool compare = a > b; if (a > b) a = b; return compare;}\ntemplate\
    \ <typename T> inline bool chmax(T& a, const T& b) {bool compare = a < b; if (a\
    \ < b) a = b; return compare;}\ntemplate<class T>using rp_queue=priority_queue<T,vector<T>,greater<T>>;\n\
    template <typename T> T gcd(T a, T b) {if (b == 0)return a; else return gcd(b,\
    \ a % b);}\ntemplate <typename T> inline T lcm(T a, T b) {return a /gcd(a, b)*b;}\n\
    const ll INF = 1LL << 60;\nconst ld PI = acos(-1);\n#line 2 \"data_structure/monoid_square_decomposition.hpp\"\
    \n//\u53C2\u8003\n//https://www.slideshare.net/iwiwi/ss-3578491\n//https://kujira16.hateblo.jp/entry/2016/12/15/000000\n\
    //https://algo-logic.info/segment-tree/\n//\u87FB\u672CP167~\ntemplate<typename\
    \ T>\nstruct monoid_range_query{\n  using FX = function<T(T, T)>;\n  int N,B;\n\
    \  FX fx;\n  const T ex;\n  vector<T> data_,bucket_data_;\n  monoid_range_query(int\
    \ N_,FX fx_, T ex_) : N(N_),fx(fx_),ex(ex_),data_(N,ex_){\n    B = sqrt(N) + 1;\n\
    \    bucket_data_.assign(B,ex_);\n  }\n  T get(int i){\n    return data_[i];\n\
    \  }\n  void set(int i,T x){\n    data_[i] = x;\n    int k = i/B;\n    T now =\
    \ ex;\n    for(int j=k*B;j<(k+1)*B;j++){\n      now = fx(now,data_[j]);\n    }\n\
    \    bucket_data_[k] = now;\n  }\n  void add(int i,T x){\n    set(i,get(i)+x);\n\
    \  }\n  T prod(int l,int r){\n    T now = ex;\n    for(int b=0;b<=B;b++){\n  \
    \    int x=b*B,y=(b+1)*B;\n      if(y<=l||r<=x)continue;\n      if(l<=x&&y<=r){\n\
    \        now=fx(now,bucket_data_[b]);\n      }else{\n        for(int i=max<int>(l,x);i<min<int>(r,y);i++){\n\
    \          now=fx(now,data_[i]);\n        }\n      }\n    }\n    return now;\n\
    \  }\n};\n#line 4 \"test/aoj/data_structure/Range_Sum_Query._square_decomposition.test.cpp\"\
    \nll op(ll a,ll b){\n  return a+b;\n}\nconst ll e = 0;\nint main(){\n  int N,Q;cin>>N>>Q;\n\
    \  monoid_range_query<ll> rsq(N,op,e);\n  while(Q--){\n    int t;cin>>t;\n   \
    \ if(t==0){\n      ll i,x;cin>>i>>x;\n      rsq.add(i-1,x);\n    }else{\n    \
    \  ll l,r;cin>>l>>r;\n      cout<<rsq.prod(l-1,r)<<endl;\n    }\n  }\n}\n\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B\"\n#include\
    \ \"../../../template.hpp\"\n#include \"../../../data_structure/monoid_square_decomposition.hpp\"\
    \nll op(ll a,ll b){\n  return a+b;\n}\nconst ll e = 0;\nint main(){\n  int N,Q;cin>>N>>Q;\n\
    \  monoid_range_query<ll> rsq(N,op,e);\n  while(Q--){\n    int t;cin>>t;\n   \
    \ if(t==0){\n      ll i,x;cin>>i>>x;\n      rsq.add(i-1,x);\n    }else{\n    \
    \  ll l,r;cin>>l>>r;\n      cout<<rsq.prod(l-1,r)<<endl;\n    }\n  }\n}\n\n"
  dependsOn:
  - template.hpp
  - data_structure/monoid_square_decomposition.hpp
  isVerificationFile: true
  path: test/aoj/data_structure/Range_Sum_Query._square_decomposition.test.cpp
  requiredBy: []
  timestamp: '2023-05-05 12:34:26+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/data_structure/Range_Sum_Query._square_decomposition.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/data_structure/Range_Sum_Query._square_decomposition.test.cpp
- /verify/test/aoj/data_structure/Range_Sum_Query._square_decomposition.test.cpp.html
title: test/aoj/data_structure/Range_Sum_Query._square_decomposition.test.cpp
---
