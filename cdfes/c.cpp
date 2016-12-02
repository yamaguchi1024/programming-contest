#include<cstdio>
#include<cstring>
#include<vector>
#include<queue>
#include<algorithm>
#include<cmath>
#include<climits>
#include<string>
#include<set>
#include<map>
#include<iostream>
using namespace std;
#define rep(i,n) for(int i=0;i<((int)(n));i++)
#define reg(i,a,b) for(int i=((int)(a));i<=((int)(b));i++)
#define irep(i,n) for(int i=((int)(n))-1;i>=0;i--)
#define ireg(i,a,b) for(int i=((int)(b));i>=((int)(a));i--)
#define INF 1000000007
typedef long long int lli;
typedef pair<lli,lli> mp;
lli n;
lli t[10000000];
lli a[10000000];
lli po[10000000];

lli pow(lli x,lli y){
  if(y==0) return 1;

  lli u=pow(x,y/2)%INF;
  lli z=(u*u)%INF;
  if(y & 1){
    z*=x%INF;
    z=z%INF;
  }
  return z;
}

int main(){
  scanf("%lld",&n);
  rep(i,n) scanf("%lld",&t[i]);
  rep(i,n) scanf("%lld",&a[i]);

  if(t[n-1]!=a[0]){ printf("0\n"); return 0;}
  else{
    po[n-1]=a[n-1];
    po[0]=t[0];
  }
  lli bef=t[0];
  for(lli i=1;i<n-1;i++){
    if(bef!=t[i]){
      po[i]=t[i];
      bef=t[i];
    }
  }
  bef=a[n-1];
  for(lli i=n-2;i>0;i--){
    if(bef!=a[i] && po[i]!=0 && po[i]!=a[i]){
      printf("0\n"); return 0;
    }else if(bef!=a[i]){ po[i]=a[i]; bef=a[i];}
  }

  vector<mp> vec;
  for(lli i=0;i<n;i++){
    if(po[i]!=0){
 //     printf("po[i]: %lld, i: %lld \n",po[i],i);
      vec.push_back(mp(po[i],i));
    }
  }
  lli res=1;
  for(lli i=0;i<vec.size()-1;i++){
 //   printf("i: %lld, vec[i].first: %lld, vec[i].second: %lld \n",i,vec[i].first,vec[i].second);
    if(vec[i+1].first>vec[i].first && (vec[i+1].second-vec[i].second)>1){
      res*=(pow((vec[i].first),(vec[i+1].second-vec[i].second-1)))%INF;
      res=res%INF;
    }else if(vec[i+1].first<=vec[i].first && (vec[i+1].second-vec[i].second)>1){
      res*=(pow((vec[i+1].first),(vec[i+1].second-vec[i].second-1)))%INF;
      res=res%INF;
    }
  }

  printf("%lld\n",res%INF);



  return 0;

}
