int summingSeries(long n) {
     long sum = 0;
     for(int i=1;i<=n;i++){
         for(int j=0;j<n;j++){
             sum += (i*i)-(j*j);
         }
     }
    return sum % 1000000007;

}
