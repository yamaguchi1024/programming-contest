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

int a[300000];
int dp[200009];
lli res[200009];
int main(){
  int N;
  scanf("%d",&N);
  rep(i,N) scanf("%d",&a[i]);

  lli fres=0;
  rep(i,N){
    reg(q,1,i){
    if(i!=0 && a[i]<=a[i-q]){
      res[i]=res[i-1]-a[i-1];
      continue;
    }
    fill(dp,dp+N,0);
    reg(j,i,N-1){
      if(i==j){
        dp[j]=a[i];
      }
      if(i<j){
        dp[j]=min(dp[j-1],a[j]);
      }
      res[i]+=dp[j];
      //printf("i:%d j:%d dp[j]:%d res:%lld\n",i,j,dp[j],res);
    }
  }

  rep(i,N) fres+=res[i];

  printf("%lld\n",fres);

  return 0;

}
