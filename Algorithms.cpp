
#include "Algorithms.hpp"
//#include "Algorithms.hpp"

Algorithms::Algorithms() {
}


int Algorithms::calcfibonacci(int n) {
    if(n==1||n==2)
        return 1;
        return calcfibonacci(n-1)+calcfibonacci(n-2);
    
}
int Algorithms::calcMcd(int numOne, int numTwo) {
    if(numOne%numTwo==0)
        return numTwo;
    return calcMcd(numTwo,numOne%numTwo);
}
int Algorithms::isCousing(int n) {
    int cont =2;
    bool cousing=true;
    while(cont<=n/2 && cousing){
        cousing=!(n%cont++==0);
        }
    return cousing;
}
int Algorithms::calcsumDiv(int n){
    int sum=1;
    for(int i=2;i<=n/2;i++){
      sum +=n% i==0?i:0;  
    }
    return sum;
}
bool Algorithms::isFriends(int one, int two){
    return calcsumDiv(one)==two && calcsumDiv(two)==one;
}
Algorithms::~Algorithms() {
}
