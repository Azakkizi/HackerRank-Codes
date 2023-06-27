int stringConstruction(string s) {
    map<char, int> m;
    int sayac=0;
    for(int i=0; i<s.length(); i++) {
        if(!m[s[i]]) {
            m[s[i]]=1;
            sayac++;
        }
    }
    return sayac;
}