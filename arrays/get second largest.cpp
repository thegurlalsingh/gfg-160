int getSecondLargest(vector<int> &arr) {
        set<int> s(arr.begin(),arr.end());
        if(s.size()<2){
            return -1;
        }
        auto it = s.end();
        --it; 
        --it;
        return *it;
    }