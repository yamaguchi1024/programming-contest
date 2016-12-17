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

char str[100300];
mp dp[100300];

int main(){
    scanf("%s",str);
    memset(dp, 0, sizeof(dp));
    dp[0].first = -2;
    for(int i=0; i<strlen(str); i++) {
        switch (str[i]) {
            case '2':
                dp[i+1].first= dp[i].second;
                break;
            case '5':
                dp[i+1].first = -2;
                dp[i+1].second= dp[i].first+2;
                break;
            case '?':
                dp[i+1].first= dp[i].second;
                dp[i+1].second=dp[i].first+2;
                break;
            default:
                dp[i+1].first = -2;
                break;
        }
//        printf("(%d,%d) ", dp[i+1].first, dp[i+1].second);
    }
    int res=0;
    for(int i=0; i<strlen(str); i++) {
        res=max(res, dp[i+1].first);
        res=max(res, dp[i+1].second);
    }

    printf("%d\n",res);

  return 0;

}
