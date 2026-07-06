class Solution {
public:
    int maxVowels(string s, int k) {
        int curr=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                curr++;
            }
        }
        int maxivowel =0;
        maxivowel=max(maxivowel,curr);
        for(int i=k;i<s.size();i++){
            if(s[i]=='a' ||s[i]=='e' ||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                curr++;
            }
             if(s[i-k]=='a' ||s[i-k]=='e' ||s[i-k]=='i'||s[i-k]=='o'||s[i-k]=='u'){
                curr--;
            }
            maxivowel= max(maxivowel,curr);
            if(maxivowel==k) return k;
        }
        return maxivowel;
    }
};
