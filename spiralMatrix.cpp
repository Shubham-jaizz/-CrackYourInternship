class Solution {
public:
    typedef pair<int, int> pairs;
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
         set<pair<int,int>>mpp;
        int m = matrix[0].size();
        vector<int>v;
        v.push_back(matrix[0][0]);
        int i = 0,j =0;
        pair y = make_pair(0,0);
        mpp.insert(y);
      for(int k = 1;k<=2*min(n,m);k++){
           while(j+1<m && mpp.find({i,j+1}) == mpp.end()){
               v.push_back(matrix[i][j+1]);
               pairs x = make_pair(i,j+1);
               mpp.insert(x);
               j++;
           }while(i+1<n && mpp.find({i+1,j}) == mpp.end()){
               v.push_back(matrix[i+1][j]);
               pairs x = make_pair(i+1,j);
               mpp.insert(x);
               i++;
           }while(j-1 >=0 && mpp.find({i,j-1}) == mpp.end()){
               v.push_back(matrix[i][j-1]);
               pairs x = make_pair(i,j-1);
               mpp.insert(x);
               j--;
           }while(i-1 >=0 && mpp.find({i-1,j}) == mpp.end()){
               v.push_back(matrix[i-1][j]);
               pairs x = make_pair(i-1,j);
               mpp.insert(x);
               i--;
           }
           
        }
       return v;
        }
    
};
