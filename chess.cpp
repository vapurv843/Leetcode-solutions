class Solution {
  public:
    long long squaresInChessBoard(long long n) {
        if(n==1) return 1;
        return (n*(n+1)*(2*n+1))/6;
    }
};