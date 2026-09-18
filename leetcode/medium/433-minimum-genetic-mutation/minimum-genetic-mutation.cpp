class Solution {
public:
    int minMutation(string startGene, string endGene, vector<string>& bank) {
        unordered_set <string> st(bank.begin(), bank.end());
        queue<pair<string, int>> q;
        vector<char> choices={'A','C','G','T'};

        q.push({startGene, 0});
        st.erase(startGene);

        while(!q.empty()){
            string word=q.front().first;
            int step=q.front().second;
            q.pop();
            if(word==endGene) return step;

            for(int i=0;i<word.length();i++){
                char original=word[i];
                for(char ch:choices){
                    word[i]=ch;
                    if(st.find(word)!=st.end()){
                        q.push({word, step+1});
                        st.erase(word);
                    }
                }
                word[i]=original;
            }
        }
        return -1;
    }
};