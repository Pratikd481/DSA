#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    public:
    void generateFib(int n, vector<long long> &res, int i){
        if(i ==n){
            return;
        }
        res.push_back(res[i-1]+res[i-2]);
        generateFib(n, res,i+1);
    }
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        vector<long long> res;
        if(n== 0){
            return res;
        }
        res.push_back(1);
        if( n== 1){
            return res;
        }
        res.push_back(1);
       
        //code here
      
        generateFib(n, res, 2);
        return res;
    }
};
int main()
{
    long long N;
    cin >> N;
    Solution ob;
    vector<long long> ans = ob.printFibb(N);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}