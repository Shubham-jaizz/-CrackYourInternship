class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        set<int> row;
        set<int> col;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(row.find(i)!=row.end() || col.find(j)!=col.end())
                {
                    matrix[i][j]=0;
                }
            }
        }
    }
};