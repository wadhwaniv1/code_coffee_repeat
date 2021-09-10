vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        bool prime[N+1];
        memset(prime, true, sizeof(prime));

        //check for all prime numbers i.e, p*p<=N
        for(int p=2;p*p<=N;p++){
            if(prime[p] == true){
                    //check for all multiples of p
                for(int i=p*p;i<=N;i+=p){
                    prime[i]=false;
                }
            }
        }
        vector<int> v;
        for(int i=2;i<=N;i++){
            if(prime[i])
            v.push_back(i);
        }

        return v;
    }
