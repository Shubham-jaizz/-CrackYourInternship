// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long>&a, long long n, long long m){
        sort(a.begin(),a.end());
        long long min = INT_MAX;
         if(m == 1){
             return 0;
         }else{
            int index = 0;
            while((index+m-1)<n){
                if((a[index+m-1]-a[index])<min){
                    min =a[index+m-1]-a[index];
                }
                index++;
            }
         }
         return min;
    
    }   
};

// { Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}  // } Driver Code Ends