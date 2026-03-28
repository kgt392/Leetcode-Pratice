class Solution {
public:
    vector<vector<int>> generate(int row) {
        vector <vector<int>> anss;
        for(int i =0;i<row;i++){
        long long ans=1;
        vector <int> answer;
        answer.push_back(1);
        for(int col = 1; col <= i; col++){
            ans = ans * (i - col + 1);;
            ans =ans/col;
            answer.push_back(ans);
        }
        // return answer;
        anss.push_back(answer);
        }
        return anss;
    }
};