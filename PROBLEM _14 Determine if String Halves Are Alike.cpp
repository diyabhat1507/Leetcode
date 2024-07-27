/*You are given a string s of even length. Split this string into two halves of equal lengths, and let a be the first half and b be the second half.
Two strings are alike if they have the same number of vowels ('a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'). Notice that s contains uppercase and lowercase letters.
Return true if a and b are alike. Otherwise, return false.


Example 1:

Input: s = "book"
Output: true
Explanation: a = "bo" and b = "ok". a has 1 vowel and b has 1 vowel. Therefore, they are alike.
*/


class Solution {
public:
    bool halvesAreAlike(std::string s){
        std::unordered_set<char> vowels={'a','e','i','o','u','A','E','I','O','U'};
        int midpoint=s.length()/2;
        int vowelCount1=0,vowelCount2=0;
        for (int i=0;i<midpoint;i++) {
            if (vowels.count(s[i])>0)
                vowelCount1++;
            if (vowels.count(s[i+midpoint])>0)
                vowelCount2++;
        }
        return vowelCount1==vowelCount2;
    }
};
