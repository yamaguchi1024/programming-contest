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

int n;
int a[500];
int main(){
  scanf("%d",&n);
  rep(i,n) scanf("%d",&a[i]);

  int max=a[0];
  rep(i,n){
    if(max <= a[i]) max=a[i];
  }
  int min=a[0];
  rep(i,n){
    if(min>=a[i]) min=a[i];
  }

  lli res=100000000000000;
  reg(i,min,max){
    int cnt=0;
    rep(j,n){
      cnt+=abs((i-a[j])*(i-a[j]));
    }
//    printf("i:%d cnt:%d\n",i,cnt);
    if(cnt<=res) res=cnt;
  }

  printf("%lld\n",res);


  return 0;

}
