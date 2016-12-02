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

int N;
int x[100];
float A;
int main(){
  scanf("%d%f",&N,&A);
  rep(i,N) scanf("%d",&x[i]);
  lli res=0;
  for(lli i=0;i< (1 << N);i++){
    int sum=0,div=0;
    rep(j,N){
      if(1<<j & i){
        sum+=x[j];
        div++;
      }
    }
    if(div!=0){
      if(((float)sum/div)==A) res++;
    }
  }

  printf("%lld\n",res);


  return 0;

}
