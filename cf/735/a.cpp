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
char c[1000];
int grass,insect;
int main(){

  cin >> n >> k;
  getchar();
  rep(i,n){
    c[i]=getchar();
    if(c[i]=='G') grass=i;
    if(c[i]=='T') insect=i;
  }
  bool flag=true, flag2=false;
  if(grass<insect){
    rep(i,(insect-grass)/k+1){
      if(c[i*k+grass]=='#') flag=false;
      if(i==(insect-grass)/k && c[i*k+grass]=='T' && flag) flag2=true;
    }
  }
  if(insect<grass){
    rep(i,abs((insect-grass)/k)+1){
      if(c[grass-i*k]=='#') flag=false;
      if(i==(grass-insect)/k && c[grass-i*k]=='T' && flag) flag2=true;
    }
  }

  if(flag2) printf("YES\n");
  else printf("NO\n");


  return 0;

}
