int solve(vector<string>& shows, vector<int>& durations, int k) {
    int n = durations.size();

    map<string, int> mp;
    for(int i=0; i<n; i++){
            mp[shows[i]] += durations[i];
    }

    vector<int> vec;
    for(auto it:mp){
        vec.push_back(it.second);
    }

    sort(vec.begin(), vec.end());
    int ans = 0;
    for(int j=vec.size()-1; j>=vec.size()-k; j--){
        ans += vec[j];
    }
    return ans;
}
