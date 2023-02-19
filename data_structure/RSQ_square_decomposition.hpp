//参考
//https://www.slideshare.net/iwiwi/ss-3578491
//https://kujira16.hateblo.jp/entry/2016/12/15/000000
//蟻本P167~
template<typename T>
struct RSQ{
  int N,B;
  T e = 0;
  vector<T> data_,bucket_data_;
  RSQ(int N_) :N(N_),data_(N,e) {
    B=sqrt(N)+1;  
    bucket_data_.assign(B,e);
  }
  //iにxをセットする
  //O(sqrt(N))
  T get(int i){
    return data_[i];
  }
  void set(int i, T x){
    data_[i] = x;
    int k=i/B; 
    T now=e;
    for(int i=k*B;i<(k+1)*B;i++){
      now+= data_[i];
    }
    bucket_data_[k] = now;
  }
  //iにxを足す
  void add(int i, T x){
    set(i,get(i)+x);
  }
  //区間[l,r)のsumを答える
  T query(int l,int r){
    //それぞれのバケットについてみる
    T now = e;
    for(int b=0;b<B;b++){
      //[x,y)はバケットが管理している半開区間
      int x=b*B,y=(b+1)*B;
      //区間に入っていない場合
      if(y<=l||r<=x)continue;
      //区間に完全に含まれている場合
      if(l<=x&&y<=r){
        now += bucket_data_[b];
      }else{
        //一部分が含まれている場合
        for(int i=max(x,l);i<min(y,r);i++){
          now += data_[i];
        }
      }
    }
    return now;
  }
};
