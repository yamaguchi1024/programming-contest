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
int k,n;
int a[100000000];

int main(){
  scanf("%d%d",&k,&n);
  int max=0;
  int cou=0;
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    if(max<a[i])
    { cou=i;
      max=a[i];
    }
  }
  int tmp=0;
  rep(i,n){
    if(i!=cou)
    {
      tmp+=a[i];
    }
  }
  if(tmp>=max){ printf("0\n");
  }else{
    printf("%d\n",max-tmp-1);
  }

  return 0;

}
