/* 
 * File:   main.c
 * Author: Joseph
 *
 * This program prints out numbers from 1-100 and prints out fizzbuzz if a number is divisible by both 3 and 5 fizz if its
 * divisible by just 3 and buzz if the number is only divisible by 5
 */

#include<stdio.h> 

int main(){
    //this is the main of the program
 
    int num = 1;
    //we set a number equal to 1
 
    print(num);
    //we print that number to begin
 
    return 0;
    //we return 0 here
}
 
int print(num){
    //this is a function called print that takes in our int named num
 
    if(num<=100 && num%3 != 0 && num%5 !=0){
        //if our number is less than or equal to 100 and when you mod it by 3 and 5 and not get 0 
        
         printf("%d ",num);
         //if those conditions are true then we print out the number
         
         print(num+1);
         //we do a recursive call to run the function over with the next number +1
    }
    else if(num%3==0 && num%5==0){
        //if the number is divisible by 3 and 5 then we print out fizzbuzz
        
          printf("fizzbuzz ");
          //this is where we print out fizzbuzz
          
           print(num+1);
           //we have another recursive call to the print function
    }
    
    else if(num%3==0){
        //if the number is only divisible by 3 we need to print fizz
        
          printf("fizz ");
          //this is where we print fizz
          
           print(num+1);
           //we have another recursive call to the print function with the next number +1
           
    }
    else if(num%5==0){
        //if the number is only divisible by 5 then we print buzz
        
          printf("buzz ");
          //this is where we print out buzz
          
           print(num+1);
           //we make a recursive call to print with the next number in line
    }
    }      
    
    
    
 
    
 
