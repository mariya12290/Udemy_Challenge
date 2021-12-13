#include <iostream>
#include <string>
#include <algorithm>


bool is_palindrome(const std::string& s)
{
    std::cout<<"====================="<<std::endl;
    // You must implement this function.
    // Since we are learning the STL - use a deque to solve the problem.
    std::string str{s};
    std::string special_char{",!-'"};
  
     str.erase(std::remove(s.begin(),s.end(),' '),s.end());
     for(int i{0};i<special_char.size();++i){
     str.erase(std::remove(str.begin(),str.end(),special_char[i]),str.end());
     str.erase(std::remove(str.begin(),str.end(),special_char[i]),str.end());
     str.erase(std::remove(str.begin(),str.end(),special_char[i]),str.end());
     str.erase(std::remove(str.begin(),str.end(),special_char[i]),str.end());
     }
std::cout<<str<<std::endl;
std::cout<<s<<std::endl;
    int size{str.size()};
    if(size ==1){
        return true;
    }else{
        int j = size-1;
        std::cout<<j<<" size is "<<size<<std::endl;
        for(int i{0};i<size;++i){

            std::cout<<"i "<<i<<"   "<<j<<std::endl;

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

int main(){

    std::cout<<is_palindrome("aba")<<std::endl;
}