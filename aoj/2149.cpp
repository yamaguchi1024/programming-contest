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

int main(){

  int n,a,b,c,x;
  int y[200];
  while(scanf("%d%d%d%d%d",&n,&a,&b,&c,&x),n | a | b | c){
    bool mama=false;
    rep(i,n) scanf("%d",&y[i]);
    int res=0;
    rep(i,n){
      while(1){
        if(res>10000){mama=true; break;}
        if(x==y[i]){ x=(a*x+b)%c; res++; break;}
        x = (a*x + b)%c;
        res++;
      }
      if(mama) break; 
    }
    if(mama) printf("-1\n");
    else printf("%d\n",res);
  }

  return 0;

}
