class Solution
{
    public:
        void swapDigits(string &N1, string &N2)
        {
        	int n1 = N1.length();
        	int n2 = N2.length();
        	char temp1 = N1[0];
        	N1[0]= N2[n2-1];
        	N2[n2-1]= temp1;
        	temp1=N1[n1-1];
        	N1[n1-1]=N2[0];
        	N2[0]= temp1;
        	
        }
};