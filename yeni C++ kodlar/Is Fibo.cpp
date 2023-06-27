string isFibo(long n) {
    string fibo="IsNotFibo";
    long toplam;
    long sayi1=0;
    long sayi2=1;
    while(n>=toplam) {
        toplam = sayi1+sayi2;
        sayi1=sayi2;
        sayi2=toplam;
        if(toplam == n) {
            fibo="IsFibo";
        }
    }
    return fibo;
}