#include <string>
#include "../tests/test.cpp"
#include "../utility/utility.cpp"
#include "../utility/colors.cpp"

namespace findDiff {
    class Solution {
    public:
        static char findTheDifference(const std::string& s, const std::string& t) {
            char alphabets[26]={0};
            char ans = {0};

            // increment the occurence of each character in t on the alphabets array
            for(int i=0;i<t.length();i++)
                alphabets[t[i]-'a']++;

            // decrement the occurence of each character in s on the alphabets array
            for(int i=0;i<s.length();i++)
                alphabets[s[i]-'a']--;

            // now we go through the 26 alphabets and
            // the character that has a count of 1 is the answer
            for(int i=0;i<26;i++) {
                if(alphabets[i] != 0) {
                    ans = i+'a'; // converts the index to the character (even though if we do 1+'a' we get the ASCII Values, it will be converted to char automatically)
                    break;
                }
            }

            return ans;
        }

        static void runTests() {
            Utility::print("\n================ LeetCode 'Find difference' Solution Tests BEGIN ================\n");

            ASSERT_EQ("should return 'e' when finding the difference between 'abcd' and 'abcde'",
                findTheDifference("abcd", "abcde"), 'e');
            ASSERT_EQ("should return 'h' when finding the difference between 'hqweghkitsdfndfjkaweffvsyjeukj' and 'hqweghkitsdfnhdfjkaweffvsyjeukj'",
                findTheDifference("hqweghkitsdfndfjkaweffvsyjeukj", "hqweghkitsdfnhdfjkaweffvsyjeukj"), 'h');
            ASSERT_EQ("should return 'y' when finding the difference between '' and 'y'",
                findTheDifference("", "y"), 'y');

            ASSERT_NOT_EQ("should not return 'a' when finding the difference between 'abcd' and 'abcde'",
                findTheDifference("abcd", "abcde"), 'a');
            ASSERT_NOT_EQ("should not return 'h' when finding the difference between 'hqweghkitsdfndfjkaweffvsyjeukj' and 'hqweghkitsdfnhdfjkaweffvsyjeukj'",
                findTheDifference("hqweghkitsdfndfjkaweffvsyjeukj", "hqweghkitsdfjdfjkaweffvsyjeukj"), 'h');

            Utility::print("\n================ LeetCode 'Find difference' Solution Tests FINISH ================\n");
        }
    };
}