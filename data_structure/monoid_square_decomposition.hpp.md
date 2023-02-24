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
    links:
    - https://algo-logic.info/segment-tree/
    - https://kujira16.hateblo.jp/entry/2016/12/15/000000
    - https://www.slideshare.net/iwiwi/ss-3578491
  bundledCode: "#line 2 \"data_structure/monoid_square_decomposition.hpp\"\n//\u53C2\
    \u8003\n//https://www.slideshare.net/iwiwi/ss-3578491\n//https://kujira16.hateblo.jp/entry/2016/12/15/000000\n\
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
    \  }\n};\n"
  code: "#pragma once\n//\u53C2\u8003\n//https://www.slideshare.net/iwiwi/ss-3578491\n\
    //https://kujira16.hateblo.jp/entry/2016/12/15/000000\n//https://algo-logic.info/segment-tree/\n\
    //\u87FB\u672CP167~\ntemplate<typename T>\nstruct monoid_range_query{\n  using\
    \ FX = function<T(T, T)>;\n  int N,B;\n  FX fx;\n  const T ex;\n  vector<T> data_,bucket_data_;\n\
    \  monoid_range_query(int N_,FX fx_, T ex_) : N(N_),fx(fx_),ex(ex_),data_(N,ex_){\n\
    \    B = sqrt(N) + 1;\n    bucket_data_.assign(B,ex_);\n  }\n  T get(int i){\n\
    \    return data_[i];\n  }\n  void set(int i,T x){\n    data_[i] = x;\n    int\
    \ k = i/B;\n    T now = ex;\n    for(int j=k*B;j<(k+1)*B;j++){\n      now = fx(now,data_[j]);\n\
    \    }\n    bucket_data_[k] = now;\n  }\n  void add(int i,T x){\n    set(i,get(i)+x);\n\
    \  }\n  T prod(int l,int r){\n    T now = ex;\n    for(int b=0;b<=B;b++){\n  \
    \    int x=b*B,y=(b+1)*B;\n      if(y<=l||r<=x)continue;\n      if(l<=x&&y<=r){\n\
    \        now=fx(now,bucket_data_[b]);\n      }else{\n        for(int i=max<int>(l,x);i<min<int>(r,y);i++){\n\
    \          now=fx(now,data_[i]);\n        }\n      }\n    }\n    return now;\n\
    \  }\n};\n"
  dependsOn: []
  isVerificationFile: false
  path: data_structure/monoid_square_decomposition.hpp
  requiredBy: []
  timestamp: '2023-02-24 16:30:32+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/library_checker/data_structure/staticrmq_square_decomposition.test.cpp
  - test/aoj/data_structure/Range_Sum_Query._square_decomposition.test.cpp
documentation_of: data_structure/monoid_square_decomposition.hpp
layout: document
redirect_from:
- /library/data_structure/monoid_square_decomposition.hpp
- /library/data_structure/monoid_square_decomposition.hpp.html
title: data_structure/monoid_square_decomposition.hpp
---
