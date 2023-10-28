
#include<bits/stdc++.h>

vector<vector<int>> triplet(int n, vector<int> &arr)
{
    // Write your code here.


    set<vector<int>> st;
   
    for (int i = 0; i < n; i++) {
        set<int> hashset;
        for (int j = i + 1; j < n; j++) {
            //Calculate the 3rd element:
            int third = -(arr[i] + arr[j]);

            //Find the element in the set:
            if (hashset.find(third) != hashset.end()) {
                vector<int> temp = {arr[i], arr[j], third};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hashset.insert(arr[j]);
        }
    }

    //store the set in the answer:
    vector<vector<int>> ans(st.begin(), st.end());
    return ans;

}

int main()
{
    vector<int> arr={1,8,102,2,3,104,102,103};
    int  result=triplet(arr.size(),arr);
    cout<<result<<endl;
    
}