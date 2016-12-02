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
typedef unsigned long long int lli;
typedef pair<int,int> mp;

lli poww(lli a,lli b){
  lli p=1;
  for(lli i=0;i<b;i++){
    p=p*a;
  }
  return p;
}

int main(){
  lli a;
  cin >> a;
  lli i=0;
  
  while(1){
    if(poww(2,i) < a && a <= poww(2,(i+1))){
      cout << poww(2,i) << poww(2,(i+1)) << endl;
      cout << i+1 << endl;
      break;
    }
    else i++;
  }
  

  return 0;

}
