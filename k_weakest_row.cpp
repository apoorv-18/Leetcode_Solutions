class Solution {
public:
int total_one(vector<int>row){
        int l=0,r=row.size()-1;
        int ans=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(row[mid]==1){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return ans+1;
    }
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>vec;
        for(int i=0;i<mat.size();i++){
            int one=total_one(mat[i]);
            vec.push_back({one,i});
        }
        sort(vec.begin(),vec.end());
        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(vec[i].second);
        }
        return res;
    }
};
