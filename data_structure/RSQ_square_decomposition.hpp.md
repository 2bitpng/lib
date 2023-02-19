---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj/data_structure/Range_Sum_Query.test.cpp
    title: test/aoj/data_structure/Range_Sum_Query.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"data_structure/RSQ_square_decomposition.hpp\"\nint sqrtll(ll\
    \ N){\n  int ok = 0;\n  int ng = N+1; \n  while(abs(ok-ng)>1){\n    ll mid = (ok+ng)/2;\n\
    \    if(mid<=N/mid)ok=mid;\n    else ng = mid;\n  }\n  return ok;\n}\ntemplate<typename\
    \ T>\nstruct RSQ{\n  int N,B;\n  T e = 0;\n  vector<T> data_,bucket_data_;\n \
    \ RSQ(int N_) :N(N_),data_(N,e) {\n    B=sqrtll(N)+1;  \n    bucket_data_.assign(B,e);\n\
    \  }\n  //i\u306Bx\u3092\u30BB\u30C3\u30C8\u3059\u308B\n  //O(sqrt(N))\n  T get(int\
    \ i){\n    return data_[i];\n  }\n  void set(int i, T x){\n    data_[i] = x;\n\
    \    int k=i/B; \n    T now=e;\n    for(int i=k*B;i<(k+1)*B;i++){\n      now+=\
    \ data_[i];\n    }\n    bucket_data_[k] = now;\n  }\n  //i\u306Bx\u3092\u8DB3\u3059\
    \n  void add(int i, T x){\n    set(i,get(i)+x);\n  }\n  //\u533A\u9593[l,r)\u306E\
    sum\u3092\u7B54\u3048\u308B\n  T query(int l,int r){\n    //\u305D\u308C\u305E\
    \u308C\u306E\u30D0\u30B1\u30C3\u30C8\u306B\u3064\u3044\u3066\u307F\u308B\n   \
    \ T now = e;\n    for(int b=0;b<B;b++){\n      //[x,y)\u306F\u30D0\u30B1\u30C3\
    \u30C8\u304C\u7BA1\u7406\u3057\u3066\u3044\u308B\u534A\u958B\u533A\u9593\n   \
    \   int x=b*B,y=(b+1)*B;\n      //\u533A\u9593\u306B\u5165\u3063\u3066\u3044\u306A\
    \u3044\u5834\u5408\n      if(y<=l||r<=x)continue;\n      //\u533A\u9593\u306B\u5B8C\
    \u5168\u306B\u542B\u307E\u308C\u3066\u3044\u308B\u5834\u5408\n      if(l<=x&&y<=r){\n\
    \        now += bucket_data_[b];\n      }else{\n        //\u4E00\u90E8\u5206\u304C\
    \u542B\u307E\u308C\u3066\u3044\u308B\u5834\u5408\n        for(int i=max(x,l);i<min(y,r);i++){\n\
    \          now += data_[i];\n        }\n      }\n    }\n    return now;\n  }\n\
    };\n"
  code: "int sqrtll(ll N){\n  int ok = 0;\n  int ng = N+1; \n  while(abs(ok-ng)>1){\n\
    \    ll mid = (ok+ng)/2;\n    if(mid<=N/mid)ok=mid;\n    else ng = mid;\n  }\n\
    \  return ok;\n}\ntemplate<typename T>\nstruct RSQ{\n  int N,B;\n  T e = 0;\n\
    \  vector<T> data_,bucket_data_;\n  RSQ(int N_) :N(N_),data_(N,e) {\n    B=sqrtll(N)+1;\
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
    };\n"
  dependsOn: []
  isVerificationFile: false
  path: data_structure/RSQ_square_decomposition.hpp
  requiredBy: []
  timestamp: '2023-02-19 10:19:26+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj/data_structure/Range_Sum_Query.test.cpp
documentation_of: data_structure/RSQ_square_decomposition.hpp
layout: document
redirect_from:
- /library/data_structure/RSQ_square_decomposition.hpp
- /library/data_structure/RSQ_square_decomposition.hpp.html
title: data_structure/RSQ_square_decomposition.hpp
---
