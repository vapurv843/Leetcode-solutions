long long int count2sinRangeAtDigit(long long int num, long long int d,long long int n)
{
// Your code goes here
    int p = pow(10,d);
    int q = num/p;
    if(n>2)
    {
        return ((q+1)*p)/10;
        
    }
    else if(n==2)
    {
        return (q*p)/10+num%(p/10)+1;
        
    }
    else
    {
        return (q*p)/10;
    }
}

/* Counts the number of '2' digits between 0 and n */
long long int numberOf2sinRange(long long int num)
{
// Your code goes here
    long long n = num,ans = 0,i=1,r;
    while(n>0)
    {
        r=n%10;
        ans +=count2sinRangeAtDigit(num,i,r);
        n=n/10;
        i++;
        
    }
    return ans;
}