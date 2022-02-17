bool solve(vector<vector<string>>& matrix) {
    unordered_map <string, int> umr, umc;

    for(int i = 0; i < matrix.size(); ++i)
    {
        for(int j = 0; j < matrix.size(); ++j)
        {
            if(umr[matrix[i][j]] > 0) return false;
            else ++umr[matrix[i][j]];
        }

        for(int j = 0; j < matrix.size(); ++j)
        {
            if(umc[matrix[j][i]] > 0) return false;
            else ++umc[matrix[j][i]];
        }
         
        for(auto it : umr)
        {
            if(umc[it.first] > 0) continue;
            else return false;
        } 

        umr.clear();
        umc.clear();
   }

    
   return true;
}
