#include<bits/stdc++.h>
using namespace std;
int solve(int ind,int w,vector<int>&weights,vector<int>&values,vector<vector<int>>&dp)
{
    if(ind == 0){
        if(weights[0]<=w){
            return values [0];
            }
        return 0;

    }

    if(dp[ind][w]!=-1)
        {
    return dp[ind][w];
    }
    int nottaken=solve(ind-1,w,weights,values,dp);
    int taken=INT_MIN;
    if(weights[ind]<=w)
    {
        taken=values[ind]+solve(ind-1,w-weights[ind],weights,values,dp);
    }
    return dp[ind][w]=max(nottaken,taken);
}
int main()
{
    int capacity=60;
    vector<int>values={60,50,120};
    vector<int>weights={25,25,20};
    int n=values.size();
    vector<vector<int>>dp(n,vector<int>(capacity+1,-1));
    int maxvalue=solve(n-1,capacity,weights,values,dp);
    cout<<"maximum profit:"<<maxvalue<<endl;
}
