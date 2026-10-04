class Solution {
public:
    int longestPalindrome(string s) {
        // sabse phle small a-z and A-Z wale sare alphabate ko count kr lege ki kitne bar koon aaya hai
        vector<int>lower(26,0);
        vector<int>upper(26,0);
        // ab jaise hi hm first string dekhege chahe vo lower ho ya upper usko is vector me jake uski count ko 
        // 1 se incresase kr dege

        for(int i=0; i<s.size(); i++){
            if(s[i]>='a'&& s[i] <= 'z') // iska mtlb ki vo element na lower case hai
            {
             lower[s[i]-'a']++; // mtlb lower vector me jo bhi positon hai is element ki vha pe jake increase kr do
            }
            else
            {
             upper[s[i]-'A']++;
            }
        }

            // ab hme abhi tk sabka pta chal gya ki koon se element kitni bar aaye hai 

            int count = 0;
            bool odd = 0;

            for(int i=0; i<26; i++){
                // lower
                if(lower[i]%2==0){
                    count = count+lower[i];
                }else{
                    count = count+lower[i]-1;
                    odd=1;
                }

                // upper

                  if(upper[i]%2==0){
                    count = count+upper[i];
                }else{
                    count = count+upper[i]-1;
                    odd=1;
                }
            }
            return count+odd;    

        

        

    }
};