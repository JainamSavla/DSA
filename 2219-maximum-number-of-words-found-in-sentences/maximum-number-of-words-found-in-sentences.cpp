class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=0;
        int max=0;
        for(int i=0;i<sentences.size();i++){
            int count=0;
            for(char a:sentences[i]){
                if(a == ' ')count ++;
            }
            count++;
            if(max<count){
                max=count;
            }
        }
        return max;
    }
};