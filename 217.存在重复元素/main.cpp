//
// Created by wzycb on 2023/3/6.
//
#include<vector>
#include<iostream>
#include<algorithm>
#include<unordered_set>

class Solution {
public:
    static bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> a;
        for(int x:nums){
            a.insert(x);
        }        
        if(a.size()!=nums.size()) return true;
        else return false;
    }
};

int main()
{
    std::vector<int> a={1,2,3,4};
    auto b=Solution::containsDuplicate(a);
    std::cout<<b<<std::endl;
}

