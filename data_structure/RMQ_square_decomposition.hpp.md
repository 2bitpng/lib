---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: test/library_checker/data_structure/staticrmq_square_decomposition.cpp
    title: test/library_checker/data_structure/staticrmq_square_decomposition.cpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links:
    - https://kujira16.hateblo.jp/entry/2016/12/15/000000
    - https://www.slideshare.net/iwiwi/ss-3578491
  bundledCode: "#line 1 \"data_structure/RMQ_square_decomposition.hpp\"\n//\u53C2\u8003\
    \n//https://www.slideshare.net/iwiwi/ss-3578491\n//https://kujira16.hateblo.jp/entry/2016/12/15/000000\n\
    //\u87FB\u672CP167~\nint sqrtll(ll N){\n  int ok = 0;\n  int ng = N+1; \n  while(abs(ok-ng)>1){\n\
    \    ll mid = (ok+ng)/2;\n    if(mid<=N/mid)ok=mid;\n    else ng = mid;\n  }\n\
    \  return ok;\n}\ntemplate<typename T>\nstruct RMQ{\n  //N :\u8981\u7D20\u6570\
    \ \n  //B :\u30D0\u30B1\u30C3\u30C8\u306E\u30B5\u30A4\u30BA\n  //data_: \u5143\
    \u306E\u914D\u5217\n  //bucket_data_ :\u30D0\u30B1\u30C3\u30C8\u3054\u3068\u306E\
    \u30C7\u30FC\u30BF\n  int N,B;\n  vector<T> data_,bucket_data_;\n  const T INF\
    \ = numeric_limits<T>::max();\n  RMQ(int N_) :N(N_),data_(N,INF) {\n    B=sqrtll(N)+1;\
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
    \  now=min(now,data_[i]);\n        }\n      }\n    }\n    return now;\n  }\n};\n"
  code: "//\u53C2\u8003\n//https://www.slideshare.net/iwiwi/ss-3578491\n//https://kujira16.hateblo.jp/entry/2016/12/15/000000\n\
    //\u87FB\u672CP167~\nint sqrtll(ll N){\n  int ok = 0;\n  int ng = N+1; \n  while(abs(ok-ng)>1){\n\
    \    ll mid = (ok+ng)/2;\n    if(mid<=N/mid)ok=mid;\n    else ng = mid;\n  }\n\
    \  return ok;\n}\ntemplate<typename T>\nstruct RMQ{\n  //N :\u8981\u7D20\u6570\
    \ \n  //B :\u30D0\u30B1\u30C3\u30C8\u306E\u30B5\u30A4\u30BA\n  //data_: \u5143\
    \u306E\u914D\u5217\n  //bucket_data_ :\u30D0\u30B1\u30C3\u30C8\u3054\u3068\u306E\
    \u30C7\u30FC\u30BF\n  int N,B;\n  vector<T> data_,bucket_data_;\n  const T INF\
    \ = numeric_limits<T>::max();\n  RMQ(int N_) :N(N_),data_(N,INF) {\n    B=sqrtll(N)+1;\
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
    \  now=min(now,data_[i]);\n        }\n      }\n    }\n    return now;\n  }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: data_structure/RMQ_square_decomposition.hpp
  requiredBy:
  - test/library_checker/data_structure/staticrmq_square_decomposition.cpp
  timestamp: '2023-02-18 23:02:44+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: data_structure/RMQ_square_decomposition.hpp
layout: document
redirect_from:
- /library/data_structure/RMQ_square_decomposition.hpp
- /library/data_structure/RMQ_square_decomposition.hpp.html
title: data_structure/RMQ_square_decomposition.hpp
---
