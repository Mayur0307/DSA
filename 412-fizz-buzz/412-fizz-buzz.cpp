class Solution {
public:
    vector<string> fizzBuzz(int n) {
        
        vector<string> ans;
        for(int i=1;i<=n;i++){
            int a=i%3;
            int b=i%5;
            if(a==0 && b==0){
                ans.emplace_back("FizzBuzz");
            }
            else if(a==0){
                ans.emplace_back("Fizz");
            }
            else if(b==0){
                ans.emplace_back("Buzz");
            }
            else ans.emplace_back(to_string(i));
        }
        return ans;
    }
};