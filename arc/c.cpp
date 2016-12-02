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

char s[12];
int main(){
  scanf("%s",s);
  int size=strlen(s);

  int ans=0;
  rep(i,1<<(size-1)){
    int cur=0,sum=0;
    rep(j,size){
      if((i & (1 << (j-1)) ) && j>0){
        sum+=cur;
        cur=0;
      }
      cur=cur*10+(s[j]-'0');
    }
    sum+=cur;
    ans+=sum;
  }

  printf("%d\n",ans);

  return 0;

}
