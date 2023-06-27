string pangrams(string s) {
    string s_lower="";
    for (int i=0; i<s.length(); i++) {
        s_lower+=tolower(s[i]);
    }
    string alphabet="abcdefghijklmnopqrstuvwxyz";
    string sonuc="pangram";
    map<char,int> abc;
    for(char c : alphabet) {
        abc[c]=0;
    }
    for(int i=0; i<s_lower.length(); i++) {
        abc[s_lower[i]]++;
    }
    for(auto const& miktar : abc) {
        if (miktar.second == 0) {
            sonuc="not pangram";
            break;
        }
    }   
    return sonuc;
    /*
    for(int i=0; i<26; i++) {
        if (s.find(abc[i]) != std::string::npos) {
            if(i==25) {
                sonuc="pangram";
            }
        }
        else {
            if(i==25) {
                sonuc="not pangram";
                break;
            }
        }
    }*/

    return sonuc;
}