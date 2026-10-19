class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>x;

        for(string s : operations){
            if(s == "+"){
                int n=x.size();
                x.push_back(x[n-1]+x[n-2]);
            }
            else if(s =="D"){
                x.push_back(2*x.back());
            }
            else if(s == "C"){
                x.pop_back();
            }
            else{
                x.push_back(stoi(s));
            }
        }

            int sum=0;
            for(int no : x)
                sum+=no;
            return sum;

    }
};
