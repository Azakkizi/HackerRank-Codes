long marcsCakewalk(vector<int> calorie) {
    sort(calorie.begin(), calorie.end(), greater<int>());
    long sonuc=0;
    for(int i=0; i<calorie.size(); i++) {
        sonuc+=pow(2,i)*calorie[i];
    }
    return sonuc;
}