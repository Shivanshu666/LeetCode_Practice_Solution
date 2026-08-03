class Solution {
public:
    bool isPalindrome(string s) {
        int left=0;
        int right=s.length()-1;
// isalnum(ch)  for check only letter and only alphabetices
// tolower(ch) for, lowering the alphabet
        while(left<right){

            while(left<right && !isalnum(s[left])){
                left++;
            };

            // now left remove special character

            while(left<right && !isalnum(s[right])){
                right--;
            }
            // now right remove special charcter;

            // now we compare left and right 

            if(tolower(s[left])!=tolower(s[right])){
                return false;
            }

            left++;
            right--;

        }
     return true;
    }
};