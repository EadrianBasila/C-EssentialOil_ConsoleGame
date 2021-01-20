/*
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <string.h>

 
void chargeDiffusers(int essentialOil) 
{
  
    //This function takes the essential oil as an input,
    //and then generate a random price based on the specified
    //value range.

    //In generating the random value, the function generates a 
    //random value from 0 - 32767; the generated value then trimmed 
    //down using modulo (arithmetic function) from the indicated minimum 
    //and maximum charge range. Resulting value will be completely random 
    //every single run.  
  

  int num;  
  int charge;

  switch(essentialOil){ 

    case 1: //Lemon    
        num = (rand() % (150 - 100 + 1)) + 100; 
        charge = num; 
        break;

    case 2: //Lavender
        num = (rand() % (60 - 20 + 1)) + 20; 
        charge = num; 
        break;
    
    case 3: //Rosemary
        num = (rand() % (100 - 70 + 1)) + 70; 
        charge = num; 
        break;
    
    case 4: //Mint
        num = (rand() % (200 - 130 + 1)) + 130; 
        charge = num; 
        break;

    default:
        printf("[!]Essential oil not found.");
      
    }
  
    int chanceNum = (rand() % (100 - 1 + 1)) + 1; 
    int factorNum = (rand() % (199 - 102 + 1)) + 102;
      
      if (chanceNum >= 66 && chanceNum <= 100){ //add charge to value
        charge += factorNum;
        printf("Value: %d", charge);
        return;
      }

      else if (chanceNum >= 31 && chanceNum <= 65){ //subtract charge to value
        int retCharge = charge;
        charge -= factorNum;

        if (charge <= 0){ //nested statement; checks wether the generated value is a negative number. If yes, it returns the orginal value.
          printf("Value: %d", retCharge); 
          return;
        }
        
        else{
          printf("Value: %d", charge);
          return;
        }

      }

      else if (chanceNum >= 11 && chanceNum <= 30){ //multiply charge to value
        charge *= factorNum;
        printf("Value: %d", charge);
        return;

      }     

      else if (chanceNum >= 1 && chanceNum <= 10){ //retain value
        printf("Value: %d", charge);
        return;
      }     

      

} 
  

int main() 
{ 
    int essentialOil =3 ; //Lemon
    srand(time(0)); 

  
    chargeDiffusers(essentialOil); 

    return 0; 
} 

*/