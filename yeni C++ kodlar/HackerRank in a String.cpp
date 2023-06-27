string hackerrankInString(string s) {
    string h="hackerrank";
    string sonuc="NO";
    int j=0;
    for(int i=0; i<s.length(); i++) {
        if(s[i]==h[j]) {
            j++;
            if(j==h.length()) {
                sonuc="YES";
            }
        }
    }
    return sonuc;
}