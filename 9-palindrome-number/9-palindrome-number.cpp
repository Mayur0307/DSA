


class Solution {
public:
    bool isPalindrome(int x) {
        vector <int>arr;
        if (x<0){
            return false;
        }else{
        while(x>0){
            int a=0;
            a=x%10;
            arr.emplace_back(a);
            x=x/10;
        }
    }
    for (int i=0;i<arr.size()/2;i++){
        if(arr[i]!=arr[arr.size()-1-i]){
            return false;
        }
    }return true;
    }
};