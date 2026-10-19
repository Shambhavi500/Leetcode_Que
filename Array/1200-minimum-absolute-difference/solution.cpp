class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());

        vector<vector<int>>mind;
        int mindiff=INT_MAX;
        int diff=0;

        for(int i=0; i<n-1; i++){
            diff=arr[i+1]-arr[i];
            mindiff=min(mindiff,diff);
            }

        for(int i=0; i<n-1; i++){
            if(mindiff==arr[i+1]-arr[i])
                mind.push_back({arr[i],arr[i+1]});
        }
        
        return mind;
    }
};
