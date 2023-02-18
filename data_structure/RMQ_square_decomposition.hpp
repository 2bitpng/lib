//参考
//https://www.slideshare.net/iwiwi/ss-3578491
//https://kujira16.hateblo.jp/entry/2016/12/15/000000
//蟻本P167~
int sqrtll(ll N){
  int ok = 0;
  int ng = N+1; 
  while(abs(ok-ng)>1){
    ll mid = (ok+ng)/2;
    if(mid<=N/mid)ok=mid;
    else ng = mid;
  }
  return ok;
}
template<typename T>
struct RMQ{
  //N :要素数 
  //B :バケットのサイズ
  //data_: 元の配列
  //bucket_data_ :バケットごとのデータ
  int N,B;
  vector<T> data_,bucket_data_;
  const T INF = numeric_limits<T>::max();
  RMQ(int N_) :N(N_),data_(N,INF) {
    B=sqrtll(N)+1;  
    bucket_data_.assign(B+1,INF);
  }
  //iにxをセットする
  //O(sqrt(N))
  void set(int i, T x){
    data_[i] = x;
    int k=i/B; 
    T now=INF;
    for(int i=k*B;i<(k+1)*B;i++){
      now=min(now,data_[i]);
    }
    bucket_data_[k] = now;
  }
  //区間[l,r)の最小値を答える
  //O(sqrt(N))
  T prod(int l,int r){
    T now=INF;
    //バケットを順に見て行って区間に入っている場合のみ操作をする
    //O(sqrt(N))
    for(int b=0;b<=B;b++){
      //[x,y)が今見ているバケットの区間
      int x=b*B,y=(b+1)*B;
      //今見ているバケットに区間に入っていない場合
      if(y<=l||r<=x)continue;
      //今見ているバケットに区間がちょうど入っている場合
      if(l<=x&&y<=r){
        now=min(now,bucket_data_[b]);
      }else{
        //今見ているバケットの一部分が区間に入っている場合
        for(int i=max<int>(l,x);i<min<int>(r,y);i++){
          now=min(now,data_[i]);
        }
      }
    }
    return now;
  }
};
