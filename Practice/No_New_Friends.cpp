bool solve(int n, vector<vector<int>>& friends) {
    set<int> alln;
    int realsum = ((n-1)*n)/2;
    bool flag = false;
    int givensum = 0; 
    for(int i=0; i<friends.size(); i++){
        alln.insert(friends[i][0]);
        alln.insert(friends[i][1]);
    }
    if(accumulate(alln.begin(), alln.end(), 0) == realsum) flag = true;
    return flag;
}
