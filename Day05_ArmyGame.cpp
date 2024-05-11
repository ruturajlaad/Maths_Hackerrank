nt gameWithCells(int n, int m) {
    if(n<=2 && m<=2){
        return 1;
    }
    else{
        return (((n%2)+(n/2))*((m%2)+(m/2)));
    }

}
