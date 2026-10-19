class Solution {
public:
    bool isPerfectSquare(int num) {
    float n=0.5;
    double x = pow(num, n);

    if (x == (int)x)
        return true;
    
    return false;
    }
};
