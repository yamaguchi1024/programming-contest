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

char s[500000];
int main(){
  scanf("%s",s);
  int len=strlen(s);
  int flg=1;
  reg(i,0,len-2){
    if(s[i]==s[i+1]){
      flg=0;
      printf("%d %d\n",i+1,i+2);
      break;
    }
  }
  if(flg){
    reg(i,0,len-3){
      if(s[i]==s[i+2]){
        flg=2;
        printf("%d %d\n",i+1,i+3);
        break;
      }
    }
  }
  if(flg==1) printf("-1 -1\n");



  return 0;

}
