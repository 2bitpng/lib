---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data_structure/RMQ_square_decomposition.hpp
    title: data_structure/RMQ_square_decomposition.hpp
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
    \ 1LL << 60;\nconst ld PI = acos(-1);\n#line 1 \"data_structure/RMQ_square_decomposition.hpp\"\
    \n//\u53C2\u8003\n//https://www.slideshare.net/iwiwi/ss-3578491\n//https://kujira16.hateblo.jp/entry/2016/12/15/000000\n\
    //\u87FB\u672CP167~\ntemplate<typename T>\nstruct RMQ{\n  //N :\u8981\u7D20\u6570\
    \ \n  //B :\u30D0\u30B1\u30C3\u30C8\u306E\u30B5\u30A4\u30BA\n  //data_: \u5143\
    \u306E\u914D\u5217\n  //bucket_data_ :\u30D0\u30B1\u30C3\u30C8\u3054\u3068\u306E\
    \u30C7\u30FC\u30BF\n  int N,B;\n  vector<T> data_,bucket_data_;\n  const T INF\
    \ = numeric_limits<T>::max();\n  RMQ(int N_) :N(N_),data_(N,INF) {\n    B=sqrt(N)+1;\
    \  \n    bucket_data_.assign(B+1,INF);\n  }\n  //i\u306Bx\u3092\u30BB\u30C3\u30C8\
    \u3059\u308B\n  //O(sqrt(N))\n  void set(int i, T x){\n    data_[i] = x;\n   \
    \ int k=i/B; \n    T now=INF;\n    for(int i=k*B;i<(k+1)*B;i++){\n      now=min(now,data_[i]);\n\
    \    }\n    bucket_data_[k] = now;\n  }\n  //\u533A\u9593[l,r)\u306E\u6700\u5C0F\
    \u5024\u3092\u7B54\u3048\u308B\n  //O(sqrt(N))\n  T prod(int l,int r){\n    T\
    \ now=INF;\n    //\u30D0\u30B1\u30C3\u30C8\u3092\u9806\u306B\u898B\u3066\u884C\
    \u3063\u3066\u533A\u9593\u306B\u5165\u3063\u3066\u3044\u308B\u5834\u5408\u306E\
    \u307F\u64CD\u4F5C\u3092\u3059\u308B\n    //O(sqrt(N))\n    for(int b=0;b<=B;b++){\n\
    \      //[x,y)\u304C\u4ECA\u898B\u3066\u3044\u308B\u30D0\u30B1\u30C3\u30C8\u306E\
    \u533A\u9593\n      int x=b*B,y=(b+1)*B;\n      //\u4ECA\u898B\u3066\u3044\u308B\
    \u30D0\u30B1\u30C3\u30C8\u306B\u533A\u9593\u306B\u5165\u3063\u3066\u3044\u306A\
    \u3044\u5834\u5408\n      if(y<=l||r<=x)continue;\n      //\u4ECA\u898B\u3066\u3044\
    \u308B\u30D0\u30B1\u30C3\u30C8\u306B\u533A\u9593\u304C\u3061\u3087\u3046\u3069\
    \u5165\u3063\u3066\u3044\u308B\u5834\u5408\n      if(l<=x&&y<=r){\n        now=min(now,bucket_data_[b]);\n\
    \      }else{\n        //\u4ECA\u898B\u3066\u3044\u308B\u30D0\u30B1\u30C3\u30C8\
    \u306E\u4E00\u90E8\u5206\u304C\u533A\u9593\u306B\u5165\u3063\u3066\u3044\u308B\
    \u5834\u5408\n        for(int i=max<int>(l,x);i<min<int>(r,y);i++){\n        \
    \  now=min(now,data_[i]);\n        }\n      }\n    }\n    return now;\n  }\n};\n\
    #line 4 \"test/library_checker/data_structure/staticrmq_square_decomposition.test.cpp\"\
    \nint main(){\n  int N,Q;cin>>N>>Q;\n  RMQ<ll> rmq(N);\n  rep(i,N){\n    int a;cin>>a;\n\
    \    rmq.set(i,a);\n  }\n  while(Q--){\n    int l,r;cin>>l>>r;\n    cout<<rmq.prod(l,r)<<endl;\n\
    \  }\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\n#include \"\
    ../../../template.hpp\"\n#include \"../../../data_structure/RMQ_square_decomposition.hpp\"\
    \nint main(){\n  int N,Q;cin>>N>>Q;\n  RMQ<ll> rmq(N);\n  rep(i,N){\n    int a;cin>>a;\n\
    \    rmq.set(i,a);\n  }\n  while(Q--){\n    int l,r;cin>>l>>r;\n    cout<<rmq.prod(l,r)<<endl;\n\
    \  }\n}\n"
  dependsOn:
  - template.hpp
  - data_structure/RMQ_square_decomposition.hpp
  isVerificationFile: true
  path: test/library_checker/data_structure/staticrmq_square_decomposition.test.cpp
  requiredBy: []
  timestamp: '2023-02-19 12:55:01+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/library_checker/data_structure/staticrmq_square_decomposition.test.cpp
layout: document
redirect_from:
- /verify/test/library_checker/data_structure/staticrmq_square_decomposition.test.cpp
- /verify/test/library_checker/data_structure/staticrmq_square_decomposition.test.cpp.html
title: test/library_checker/data_structure/staticrmq_square_decomposition.test.cpp
---
