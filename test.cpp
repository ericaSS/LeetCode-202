#include <cmath>
#include <iostream>

class Solution {
public:
    Solution(){};
    int isHappy(int n){
        while(n){
         n = sumOfDigits(n);
         if(n==1) return true;
         if(n==4) return false;
        }
    }
    int sumOfDigits(int n){
        int sum = 0;
        while(n){
            sum += pow(n%10, 2);
            n = n/10;
        }
        return sum;
    }
};
int main(){
    Solution so;
    cout << so.isHappy(19);
}
