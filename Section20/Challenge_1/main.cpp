// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>


bool is_palindrome(const std::string& s)
{
  //  std::cout<<"====================="<<std::endl;
    // You must implement this function.
    // Since we are learning the STL - use a deque to solve the problem.
    std::string str{s};
    std::string special_char{",!-'"};
  
     str.erase(std::remove(str.begin(),str.end(),' '),str.end());
     for(int i{0};i<special_char.size();++i){
     str.erase(std::remove(str.begin(),str.end(),special_char[i]),str.end());
     str.erase(std::remove(str.begin(),str.end(),special_char[i]),str.end());
     str.erase(std::remove(str.begin(),str.end(),special_char[i]),str.end());
     str.erase(std::remove(str.begin(),str.end(),special_char[i]),str.end());
     }
//std::cout<<str<<std::endl;
//std::cout<<s<<std::endl;
    int size{str.size()};
    if(size ==1){
        return true;
    }else{
        int j = size-1;
        //std::cout<<j<<" size is "<<size<<std::endl;
        for(int i{0};i<size;++i){

        //    std::cout<<"i "<<i<<"   "<<j<<std::endl;

            if(std::tolower(str[i])==std::tolower(str[j])){
                if (i==j ){
                    return true;
                }else if(i==j && size ==2){
                    return true;
                }

                --j;
                continue;
            }else{
                return false;
            }
        }
    }
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}