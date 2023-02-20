template<typename T>
struct monoid_range_query_square{
  using FX = function<T(T, T)>;
  int N,B;
  FX fx;
  const T ex;
  vector<T> data_,bucket_data_;
  monoid_range_query_square(int N_,FX fx_, T ex_) : N(N_),fx(fx_),ex(ex_),data_(N,ex_){
    B = sqrt(N) + 1;
    bucket_data_.assign(B,ex_);
  }
  T get(int i){
    return data_[i];
  }
  void set(int i,T x){
    data_[i] = x;
    int k = i/B;
    T now = ex;
    for(int i=k*B;i<(k+1)*B;i++){
      now = fx(now,data_[i]);
    }
    bucket_data_[k] = now;
  }
  void add(int i,T x){
    set(i,get(i)+x);
  }
  T prod(int l,int r){
    T now = ex;
    for(int b=0;b<=B;b++){
      int x=b*B,y=(b+1)*B;
      if(y<=l||r<=x)continue;
      if(l<=x&&y<=r){
        now=fx(now,bucket_data_[b]);
      }else{
        for(int i=max<int>(l,x);i<min<int>(r,y);i++){
          now=fx(now,data_[i]);
        }
      }
    }
    return now;
  }
};
