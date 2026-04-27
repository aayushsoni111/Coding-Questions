class Solution {
public:
    int myAtoi(string s) {
        long num=0;
        int flag = 0;
        int sLen = s.length();
        for(int i=0; i<sLen; i++){
            cout<<s[i]<<endl;
            if(int(s[i]) == 32){
                continue;
            }
            if(int(s[i])==45){
                flag = 2;
                i++;
            }
            if(flag==0 && int(s[i])==43){
                flag = 1;
                i++;
            }
            if(i<sLen && (int(s[i])<48 || int(s[i])>57)){
                break;
            }
            cout<<s[i]<<"  2"<<endl;
            while(i<sLen && int(s[i])>47 && int(s[i])<58 && num<INT_MAX && num>INT_MIN){
                num=(num*10)+(int(s[i])-48);
                i++;
            }
            break;   
        }
        if(flag == 2){
            num=num*-1;
        }
        if(num > INT_MAX){
            return INT_MAX;
        }
        else if(num < INT_MIN){
            return INT_MIN;
        }
        else{
            return int(num);
        } 
    }
};
