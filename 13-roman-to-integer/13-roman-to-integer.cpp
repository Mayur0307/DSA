class Solution {
public:
    int romanToInt(string s) {
        
        unordered_map<char,int> hash;
        hash['I']=1;
        hash['V']=5;
        hash['X']=10;
        hash['L']=50;
        hash['C']=100;
        hash['D']=500;
        hash['M']=1000;
        
        char j;
        int value,sum=0;
        for (int i=0;i<s.length();i++){
            j=s[i];
        auto it=hash.find(j);
        value=it->second;
            sum+=value;
            
        if(s[i]=='I' && (s[i+1]=='V' || s[i+1]=='X')){
            sum=sum-2;
        }
        if(s[i]=='X' && (s[i+1]=='L' || s[i+1]=='C')){
            sum=sum-20;
        }
        if(s[i]=='C' && (s[i+1]=='D' || s[i+1]=='M')){
            sum=sum-200;
        }
            
        }
        return sum;
        
    }
};