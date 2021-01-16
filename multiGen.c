
/*
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <string.h>
void chargeEssentials() 
{
  
  //  In generating the random value, the function generates a 
  //  random value from 0 - 32767; the generated value then trimmed 
  //  down using modulo (arithmetic function) from the indicated minimum 
  //  and maximum charge range. Resulting value will be completely random 
  //  every single run.  
  
  
   int oilCharges[4];
   int n;
   int charge;

      int chargeLemon = (rand() % (150 - 100 + 1)) + 100;
        oilCharges[n] = chargeLemon;
      int chargeLavender = (rand() % (60 - 20 + 1)) + 20; 
        oilCharges[n+1] = chargeLavender;
      int chargeRosemary = (rand() % (100 - 70 + 1)) + 70; 
        oilCharges[n+2] = chargeRosemary;
      int chargeMint = (rand() % (200 - 130 + 1)) + 130; 
        oilCharges[n+3] = chargeMint;
    
   int chargeValues[4];

    for(int i = 0; i < 4; ++i) {
      
      charge = oilCharges[i];
      int chanceNum = (rand() % (100 - 1 + 1)) + 1; 
      int factorNum = (rand() % (199 - 102 + 1)) + 102;

      if (chanceNum >= 66 && chanceNum <= 100){ //add charge to value
        charge += factorNum;
        chargeValues[i] = charge;
      }

      else if (chanceNum >= 31 && chanceNum <= 65){ //subtract charge to value
        int retCharge = charge;
        charge -= factorNum;

        if (charge <= 0){ //nested statement; checks wether the generated value is a negative number. If yes, it returns the orginal value.
          chargeValues[i] = retCharge; 
        }
        
        else{
          chargeValues[i] = charge;
        }

      }

      else if (chanceNum >= 11 && chanceNum <= 30){ //multiply charge to value
        charge *= factorNum;
        chargeValues[i] = charge;
      }     

      else if (chanceNum >= 1 && chanceNum <= 10){ //retain value
        chargeValues[i] = charge;
      }   

      //printf("\nGenerated Value:  %d", charge);  
   }

  char essentialOils[][20] = {"Lemon","Lavender","Rosemary", "Mint"};
  
  //prints the generated values paired with string characters
  
  printf("          [City Essentials Market]\n");
  printf("---------------------------------------------\n");
  printf("     Essential       |   Price    |   Price  \n");
  printf("       Oils          | per Bottle | per drops\n");
  printf("---------------------------------------------\n");
  int a,b = 4;
  for (a = 0; a <4 ; a++){
     if (chargeValues[a] != 0){
       printf("\n %d)  %8s \t\t\t %d \t\t %d", a+1, essentialOils[a], chargeValues[a], chargeValues[a]/10);
     }
     else{}
  printf("\n");
  }
  printf("---------------------------------------------\n");
    
} 
  

int main() 
{ 
    srand(time(0)); 
    chargeEssentials(); 
  
    return 0; 
} 

*/