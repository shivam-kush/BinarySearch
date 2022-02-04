string solve(string s) {
    string ans = "";
    
    int stringlong = s.size();
    for(int i=0; i<stringlong; i++){
        if(i == 0 || s[i] != s[i-1]) ans += s[i];
    }
    return ans;
}
