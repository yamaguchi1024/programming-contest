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

int n,k;
char p[100];
int a[300];
int main(){

  scanf("%d%d",&n,&k);
  rep(i,n) {
    scanf("%s",p);
    a[p[0]]++;
  }

  int res=0;
  int flg=1;
  while(flg){
    int cur=0;
    int max=*max_element(a,a+200);
    if(cur==3){
      res++;
      break;
    }
    if(a[i+'A']>0 && cur<3){
      cur++;
      a[i+'A']--;
    }
  }

  printf("%d\n",res);

  return 0;

}
