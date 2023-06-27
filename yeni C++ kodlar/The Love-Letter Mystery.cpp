int theLoveLetterMystery(string s) {
    int sonuc=0;
    for(long unsigned int i=0; i<s.size()/2; i++) {
        if(s[i]!=s[s.size()-1-i]) {
            sonuc+=abs(s[i]-s[s.size()-1-i]);
        }
    }
    return sonuc;
}