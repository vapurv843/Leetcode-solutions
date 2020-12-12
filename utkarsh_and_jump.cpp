#include<bits/stdc++.h>
using namespace std ;

int main()
{
	int n,p;
	cin>>n>>p;
	double a = ((double)p/100);
    double b = 1 - a;
    double* prob;
    prob = (double*)calloc(n +1, sizeof(double));
    prob[0] = 1;
    prob[1] = 0;
    prob[2] = a;
    prob[3] = b;
    for(int i=4; i<=n; i++) {
        prob[i] = (prob[i-2]*a) + (prob[i-3]*b);
    }
    printf("%lf",prob[(int)n]);
    return 0;
}