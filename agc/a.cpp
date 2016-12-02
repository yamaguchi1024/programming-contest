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
typedef long long int lli;
typedef pair<int,int> mp;

lli a[3];
int main(){
  scanf("%lld%lld%lld",&a[0],&a[1],&a[2]);
  lli res=1;
  int flg=1;
  rep(i,3){
    if(a[i]%2==0){flg=0; res=0;}
  }

  if(flg){
    int max=0;
    rep(i,3) if(a[max]<a[i]) max=i;
    rep(i,3){
      if(max!=i) res*=a[i];
    }
  }
  printf("%lld\n",res);


  return 0;

}
