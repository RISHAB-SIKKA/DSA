// T.C. = O(M*N*4^L)
// S.C. = O(L)

class Solution {
    public:
        vector<vector<int>> directions = {{1,0}, {0,1}, {-1,0}, {0,-1}};
        int m,n;
        bool find(int i, int j, int idx, vector<vector<char>> &board, string word){
            
            if(idx == word.size()) return true;
    
            if(i<0 || j<0 || i>=m || j>=n || board[i][j]=='$' || board[i][j] != word[idx]) return false;
    
            char temp = board[i][j];
            board[i][j] = '$';
    
            for(auto& dir: directions){
                int i_ = i + dir[0];
                int j_ = j + dir[1];
    
                if(find( i_ ,j_ , idx+1, board, word) ) return true;
            }
            board[i][j] = temp;
            return false;
        }
        
        bool exist(vector<vector<char>>& board, string word) {
            m = board.size();
            n = board[0].size();
    
            for(int i = 0 ; i<m; i++){
                for(int j = 0; j<n; j++){
                    if(board[i][j] == word[0]  && find(i,j,0,board,word) ) return true;
                }
            }
            return false;
        }
    };