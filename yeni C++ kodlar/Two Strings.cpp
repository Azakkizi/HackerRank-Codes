string twoStrings(string s1, string s2) {
    string s="NO";
    string temp="0";
    for(int i=0; i<s1.length(); i++) {
        if(s1[i]!=temp[0]) {
            temp[0]=s1[i];
        }
        else {
            break;
        }
        for(int j=0; j<s2.length(); j++) {
            if(s1[i]==s2[j]) {
                s="YES";
            }
        }
    }
    return s;
}