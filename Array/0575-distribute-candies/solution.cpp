class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
       unordered_set<int>s (candyType.begin(),candyType.end());
       int n=min(s.size(),candyType.size()/2);
       return n;
    }
};
