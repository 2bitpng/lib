---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: data_structure/RSQ_square_decomposition.hpp
    title: data_structure/RSQ_square_decomposition.hpp
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
  bundledCode: "#line 1 \"test/aoj/data_structure/Range_Sum_Query.test.cpp\"\n#define\
    \ PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B\"\n#line 1 \"template.hpp\"\
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
    \ 1LL << 60;\nconst ld PI = acos(-1);\n#line 1 \"data_structure/RSQ_square_decomposition.hpp\"\
    \n//\u53C2\u8003\n//https://www.slideshare.net/iwiwi/ss-3578491\n//https://kujira16.hateblo.jp/entry/2016/12/15/000000\n\
    //\u87FB\u672CP167~\ntemplate<typename T>\nstruct RSQ{\n  int N,B;\n  T e = 0;\n\
    \  vector<T> data_,bucket_data_;\n  RSQ(int N_) :N(N_),data_(N,e) {\n    B=sqrt(N)+1;\
    \  \n    bucket_data_.assign(B,e);\n  }\n  //i\u306Bx\u3092\u30BB\u30C3\u30C8\u3059\
    \u308B\n  //O(sqrt(N))\n  T get(int i){\n    return data_[i];\n  }\n  void set(int\
    \ i, T x){\n    data_[i] = x;\n    int k=i/B; \n    T now=e;\n    for(int i=k*B;i<(k+1)*B;i++){\n\
    \      now+= data_[i];\n    }\n    bucket_data_[k] = now;\n  }\n  //i\u306Bx\u3092\
    \u8DB3\u3059\n  void add(int i, T x){\n    set(i,get(i)+x);\n  }\n  //\u533A\u9593\
    [l,r)\u306Esum\u3092\u7B54\u3048\u308B\n  T query(int l,int r){\n    //\u305D\u308C\
    \u305E\u308C\u306E\u30D0\u30B1\u30C3\u30C8\u306B\u3064\u3044\u3066\u307F\u308B\
    \n    T now = e;\n    for(int b=0;b<B;b++){\n      //[x,y)\u306F\u30D0\u30B1\u30C3\
    \u30C8\u304C\u7BA1\u7406\u3057\u3066\u3044\u308B\u534A\u958B\u533A\u9593\n   \
    \   int x=b*B,y=(b+1)*B;\n      //\u533A\u9593\u306B\u5165\u3063\u3066\u3044\u306A\
    \u3044\u5834\u5408\n      if(y<=l||r<=x)continue;\n      //\u533A\u9593\u306B\u5B8C\
    \u5168\u306B\u542B\u307E\u308C\u3066\u3044\u308B\u5834\u5408\n      if(l<=x&&y<=r){\n\
    \        now += bucket_data_[b];\n      }else{\n        //\u4E00\u90E8\u5206\u304C\
    \u542B\u307E\u308C\u3066\u3044\u308B\u5834\u5408\n        for(int i=max(x,l);i<min(y,r);i++){\n\
    \          now += data_[i];\n        }\n      }\n    }\n    return now;\n  }\n\
    };\n#line 4 \"test/aoj/data_structure/Range_Sum_Query.test.cpp\"\nint main(){\n\
    \  int N,Q;cin>>N>>Q;\n  RSQ<ll> rsq(N);\n  while(Q--){\n    int t;cin>>t;\n \
    \   if(t==0){\n      ll i,x;cin>>i>>x;\n      rsq.add(i-1,x);\n    }else{\n  \
    \    ll l,r;cin>>l>>r;\n      cout<<rsq.query(l-1,r)<<endl;\n    }\n  }\n}\n\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_B\"\n#include\
    \ \"../../../template.hpp\"\n#include \"../../../data_structure/RSQ_square_decomposition.hpp\"\
    \nint main(){\n  int N,Q;cin>>N>>Q;\n  RSQ<ll> rsq(N);\n  while(Q--){\n    int\
    \ t;cin>>t;\n    if(t==0){\n      ll i,x;cin>>i>>x;\n      rsq.add(i-1,x);\n \
    \   }else{\n      ll l,r;cin>>l>>r;\n      cout<<rsq.query(l-1,r)<<endl;\n   \
    \ }\n  }\n}\n\n"
  dependsOn:
  - template.hpp
  - data_structure/RSQ_square_decomposition.hpp
  isVerificationFile: true
  path: test/aoj/data_structure/Range_Sum_Query.test.cpp
  requiredBy: []
  timestamp: '2023-02-19 14:26:53+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/data_structure/Range_Sum_Query.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/data_structure/Range_Sum_Query.test.cpp
- /verify/test/aoj/data_structure/Range_Sum_Query.test.cpp.html
title: test/aoj/data_structure/Range_Sum_Query.test.cpp
---
