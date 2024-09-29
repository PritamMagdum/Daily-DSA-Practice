class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int duplicateNumber = x;
        long reversedNumber = 0;
        while(x>0){
            int lastDigit = x % 10;
            reversedNumber = reversedNumber * 10 + lastDigit;
            x = x / 10;
        }
        if(reversedNumber == duplicateNumber) return true;
        else return false;
    }
};