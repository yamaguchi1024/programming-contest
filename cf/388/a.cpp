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

    int n;
    scanf("%d",&n);
    int two = 0;
    int three = 0;
    if(n%2==0){
        two = n/2;
        printf("%d\n",two);
        rep(i,two){
            printf("2");
            if(i==two-1) printf("\n");
            else printf(" ");
        }
    }else{
        two = n/2 - 1;
        three = 1;
        printf("%d\n",two + three);
        int t = two + three;
        rep(i,two) printf("2 ");
        printf("3\n");
    }

    return 0;

}
