def sumsDivisibleByK(a, k):
    count = 0
    for i in range(len(a)):
        for j in range(i+1):
            sum = a[i]+a[j]
            if sum%k==0 and i!=j:
               
                count = count+1;
    return count           
        

