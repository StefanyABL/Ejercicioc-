

//#include <cstdlib>

#include "Algorithms.hpp"

#include <iostream>
#include<cstdlib>
using namespace std;

 mainMenu();
   void fibonacci(){
        cout<<"Fibonacci"<<endl;
    }
    void mcd(){
        cout<<"mcd"<<endl;
    }
    void cousing(){
        int n;
        cout<<"Digite Valor";
        cin>>n;
        cout<<"PRIMOS ENTRE 1 Y"<<n<<endl;
        while(n-->0){
         if(algorithms->isCousing(n)){
             cout<<n<<endl;
         }   
        }
    }
    Algorithms algorithms=new Algorithms();
int main(int argc, char** argv) {
   
    
   /* Algorithms*alg=new Algorithms();
    cout<<alg->calcfibonacci(9)<<endl;
    cout<<alg->calcMcd(40,5)<<endl;*/
   return EXIT_SUCCESS ;
}
void mainMenu(){
    string menu="---MENU PRINCIPAL\n\n"
            "1. fibonacci\n"
            "2.MCD\n"
            "8.salir";
    char option;
    do{
        system("cls");
        cout<<menu;
        cin.get(option);
        cin.ignore();
        
        switch(option){
            case "1": fibonacci();
            break;
            
            case"2": mcd();
            break;
            
        }
        
    }while(option !="8");
    
  
}
