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

lli n,a,b;
lli t[1009];
int main(){
  scanf("%lld%lld%lld",&n,&a,&b);
  lli res=n;
  rep(i,n){
    scanf("%lld",&t[i]);
    if(t[i]>=a && t[i]<b) res--;
  }
  printf("%lld\n",res);



  return 0;

}