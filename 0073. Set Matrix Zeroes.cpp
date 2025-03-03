class Solution {
    public:
        void setZeroes(vector<vector<int>>& matrix) {
            set<int> rowIndex;
            set<int> columnIndex;
    
            int m = matrix.size();
            int n = matrix[0].size();
            for(int i=0 ; i<m ; i++) {
                for(int j=0 ; j<n ; j++) {
                    if (matrix[i][j] == 0) {
                        rowIndex.insert(i);
                        columnIndex.insert(j);
                    }
                }
            }
            
            while (!rowIndex.empty()) {
                int loc = *rowIndex.begin();
                for(int q=0 ; q<n ; q++) {
                    matrix[loc][q] = 0; 
                }
                rowIndex.erase(loc);
            }
    
            while (!columnIndex.empty()) {
                int loc = *columnIndex.begin();
                for(int q=0 ; q<m ; q++) {
                    matrix[q][loc] = 0; 
                }
                columnIndex.erase(loc);
            }
    
        }
    };