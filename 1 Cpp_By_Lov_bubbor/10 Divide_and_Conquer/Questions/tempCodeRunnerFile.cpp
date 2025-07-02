    unordered_set<vector<int>> st;
    for (auto e : ans)
    {
        st.insert(e);
    }
ans.clear();
for(auto e:st){
    ans.push_back(e);
}