
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <string.h>

//ascci arts from http://www.ascii-art.de/

//price ng oils
void freebie(int*lemonDrops, int*lavenderDrops, int*rosemaryDrops, int*mintDrops, int*clearMinds, int *energyBooster, int*diffuserCalming){

  int freebieChance = (rand() % (100 - 1 + 1)) + 1; 
      
      if (freebieChance >= 1 && freebieChance <= 30){ 
        printf("\n\t[*] You won a free Diffuser Oil :) \n");
          int diffusersChance = (rand() % (3 - 1 + 1)) + 1;
          //printf("Val: %d",diffusersChance);
            if (diffusersChance == 1){
              *clearMinds += 1;
              printf("\n\t[+] Free Clear Minds Bottle.");
             }
            else if (diffusersChance == 2){
              *energyBooster += 1;
              printf("\n\t[+] Free Energy Booster Bottle.");
             }
            else if (diffusersChance == 3){
              *diffuserCalming += 1;
              printf("\n\t[+] Free Calming Bottle.");
             }
            else{}
      }

      else if (freebieChance >= 31 && freebieChance <= 71){ 
        printf("\n\t[*] You won a free Essential Oil :) \n");
        int essentialsChance = (rand() % (4 - 1 + 1)) + 1;
        //printf("Val: %d",essentialsChance);
          if (essentialsChance == 1){
            *lemonDrops += 10;
            printf("\n\t[+] Free Lemon Oil Bottle.");
           }
          else if (essentialsChance == 2){
            *lavenderDrops += 10;
            printf("\n\t[+] Free Lavender Oil Bottle.");
           }
          else if (essentialsChance == 3){
            *rosemaryDrops += 10;
             printf("\n\t[+] Free Rosemary Oil Bottle.");
           }
          else if (essentialsChance == 4){
            *mintDrops += 10;
             printf("\n\t[+] Free Mint Oil Bottle.");
           }
          else{}
      }

      else{
        //No Freebie
      }
   
   }


int chargeEssentials(int*ppbLem, int*ppbLav, int*ppbRos, int*ppbMin) 
{
  
  //  In generating the random value, the function generates a 
  //  random value from 0 - 32767; the generated value then trimmed 
  //  down using modulo (arithmetic function) from the indicated minimum 
  //  and maximum charge range. Resulting value will be completely random 
  //  every single run.  

   int oilCharges[4];
   int n = 0;
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

    char essentialOils[][20] = {"Lemon","Lavender","Rosemary", "Mint"};
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
          //chargeValues[i] = retCharge; //reverts value to original price if genval == 0 
          chargeValues[i] = 0; 
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

      else{}
      //printf("\n%8s Generated Value:  %d", essentialOils[i], charge);  
   }


  *ppbLem = chargeValues[0];
  *ppbLav = chargeValues[1];
  *ppbRos = chargeValues[2];
  *ppbMin = chargeValues[3];
  printf("\n\t[New Prices Generated]");
  //printf("\n lemon price: %d", *ppbLem);
  //printf("\n lavender price: %d", *ppbLav);
  //printf("\n rosemary price: %d", *ppbRos);
  //printf("\n mint price: %d", *ppbMin);
  return 0;
} 


void buyEssentials(int*cash, int*ppbLem, int*ppbLav, int*ppbRos, int*ppbMin, int*lemonDrops, int*lavenderDrops, int*rosemaryDrops, int*mintDrops,int*avblLem, int*avblLav, int*avblRos, int*avblMin, int*avblCM, int*avblEB, int*avblC, int*selCM, int*selEB, int*selC) 
{
  char essentialOils[][20] = {"Lemon","Lavender","Rosemary", "Mint"};
  
  int chargeValues[4];

  chargeValues[0] = *ppbLem;
  chargeValues[1] = *ppbLav; 
  chargeValues[2] = *ppbLav; 
  chargeValues[3] = *ppbMin;


printf("           oO0        oO                 \n");
printf("    _____oO_____________0o___________    \n");
printf("    [=U=U=U=U=U=U=U=U=U=U=U=U=U=U=U=]    \n");
printf("    |.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.|    \n");
printf("    |        +-+-+-+-+-+-+-+        |    \n");
printf("    |        | City Market |        |    \n");
printf("    |        +-+-+-+-+-+-+-+        |    \n");
printf("    |.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.|    \n");
printf("    |  _________  __ __  _________  |    \n");
printf("  _ | |___   _  ||[]|[]||  _      | | _  \n");
printf(" (!)||OPEN|_(!)_|| ,| ,||_(!)_____| |(!) \n");
printf(".T~T|:.....:T~T.:|__|__|:.T~T.:....:|T~T.\n");
printf("||_||||||||||_|||||||||||||_||||||||||_||\n");
  //prints the generated values paired with string characters
  int option;
  printf("\n              [City Market]\n");
  printf("---------------------------------------------\n");
  printf("     Essential       |   Price    |   Price  \n");
  printf("       Oils          | per Bottle | per drops\n");
  printf("---------------------------------------------\n");
  if(*ppbLem > 0){
    printf("1. Lemon              $%6d       $%5d\n", *ppbLem, *ppbLem/10);
  } else{
      printf("1. Lemon              [  -NOT AVAILABLE-  ]\n");
  }
  if(*ppbLav > 0){
    printf("2. Lavender           $%6d       $%5d\n", *ppbLav, *ppbLav/10);
  } else{
      printf("2. Lavender           [  -NOT AVAILABLE-  ]\n");  
  }
  if(*ppbRos > 0){
    printf("3. Rosemary           $%6d       $%5d\n", *ppbRos, *ppbRos/10);
  } else{
    printf("3. Rosemary           [  -NOT AVAILABLE-  ]\n");
  }
  if(*ppbMin > 0){
    printf("4. Mint               $%6d       $%5d\n", *ppbMin, *ppbMin/10);
  } else{
    printf("4. Mint               [  -NOT AVAILABLE-  ]\n");
  }


  /*
  int a = 0;
  int b = 4;
  for (a = 0; a <b ; a++){
     if (chargeValues[a] != 0){
       //printf("\n counter: %d",a);
       printf("\n %d)  %8s\t\t$%6d   $%5d", a+1, essentialOils[a], chargeValues[a], chargeValues[a]/10);
      }
     else{
       //printf("\n %d)  %8s   [ Not Available ] ", a+1, essentialOils[a]);
      }
  printf("\n");
  }
  */
   
  printf("---------------------------------------------\n");                 
 
  printf("                     [Buy]\n");
  printf("---------------------------------------------\n");
  printf("    Essential  |  Max bottles   | Max bottles\n");
  printf("      Oils     | to be acquired | to be sold \n");
  printf("---------------------------------------------\n");
  printf("1. Lemon             %3d             %3d\n", *avblLem, *lemonDrops/10);
  printf("2. Lavender          %3d             %3d\n", *avblLav, *lavenderDrops/10);
  printf("3. Rosemary          %3d             %3d\n", *avblRos, *rosemaryDrops/10);
  printf("3. Mint              %3d             %3d\n", *avblMin, *mintDrops/10);
  
  printf("\n--[Options]----------------------------------");
  printf("\nPress 1. Lemon Oil.\nPress 2. Lavender Oil. \nPress 3. Rosemary Oil. \nPress 4. Mint Oil. \nPress 5. Exit Essentials Market. \n[Enter Choice]: ");
  scanf("%d",&option);

  int c,d,e,f; 
  while (option != 5) {
      switch(option){
        
          case 1:
          printf("\n[You chose to buy Lemon Oil]");
          
            printf("\n\t[Buying Lemon Oil...]");
               printf("\nPlease enter the number of bottles: ");
               scanf("%d", &e);
              for (c = 0; c <e ; c++){
                  if (*cash >= chargeValues[0]){
                    *lemonDrops += 10;    
                    *cash -= chargeValues[0];
                    printf("\n[*] Succesfully bought Lemon Oil.");
                    printf("\n[$] Current Money : %d", *cash);
                    printf("\nTotal Lemon Oil Bottles: %d", (*lemonDrops/10)); 
                    printf("\nTotal Lemon Oil Drops: %d\n", *lemonDrops); 
                  }
                  else{
                    printf("\n[!]You do not have enough money to buy the oil.\n");
                    }
                }
          break;

        //////////////////////////////////////////////////////////////
        case 2:
          printf("\n[You chose to buy Lavender Oil]");
          
            printf("\n\t[Buying Lavender Oil...]");
            printf("\nPlease enter the number of bottles: ");
            scanf("%d", &e);
              for (c = 0; c <e ; c++){
                  if (*cash >= chargeValues[1]){
                    *lavenderDrops += 10;    
                    *cash -= chargeValues[1];
                    printf("\n[*] Succesfully bought Lavender Oil.");
                    printf("\n[$] Current Money : %d", *cash);
                    printf("\nTotal Lavender Oil Bottles: %d\n", (*lavenderDrops/10));
                    printf("\nTotal Lavender Oil Drops: %d\n", *lavenderDrops);
                  }
                  else{
                    printf("\n[!]You do not have enough money to buy the oil.\n");
                    }
                }
          break;

        //////////////////////////////////////////////////////////////
        case 3:
          printf("\n[You chose to buy Rosemary Oil]");
          
            printf("\n\t[Buying Rosemary Oil...]");
            printf("\nPlease enter the number of bottles: ");
            scanf("%d", &e);
              for (c = 0; c <e ; c++){ 
                  if (*cash >= chargeValues[2]){
                    *rosemaryDrops += 10;    
                    *cash -= chargeValues[2];
                    printf("\n[*] Succesfully bought Rosemary Oil.");
                    printf("\n[$] Current Money : %d", *cash);
                    printf("\nTotal Rosemary Oil Bottles: %d\n", (*rosemaryDrops/10));
                    printf("\nTotal Rosemary Oil Drops: %d\n", *rosemaryDrops);  
                  }
                  else{
                    printf("\n[!]You do not have enough money to buy the oil.\n");
                    }
                }
          break;

        //////////////////////////////////////////////////////////////
        case 4:
          printf("\n[You chose to buy Mint Oil]");
          
            printf("\n\t[Buying Mint Oil...]");
            printf("\nPlease enter the number of bottles: ");
            scanf("%d", &e);
              for (c = 0; c <e ; c++){ 
                  if (*cash >= chargeValues[3]){
                    *mintDrops += 10;    
                    *cash -= chargeValues[3];
                    printf("\n[*] Succesfully bought Mint Oil.");
                    printf("\n[$] Current Money : %d", *cash);
                    printf("\nTotal Mint Oil Bottles: %d\n", (*mintDrops/10));
                    printf("\nTotal Mint Oil Drops: %d\n", *mintDrops);  
                  }
                  else{
                    printf("\n[!]You do not have enough money to buy the oil.\n");
                    }
                }
            
          break;

          //////////////////////////////////////////////////////////////
        default:
          printf("\n [!]Please choose from the options above.");
    }
    printf("\n--[Options]----------------------------------");
    printf("\nPress 1. Lemon Oil.\nPress 2. Lavender Oil. \nPress 3. Rosemary Oil. \nPress 4. Mint Oil. \nPress 5. Exit Essentials Market. \n[Enter Choice]: ");
    scanf("%d",&option);
  }
 
}


void sellEssentials(int*cash, int*ppbLem, int*ppbLav, int*ppbRos, int*ppbMin, int*lemonDrops, int*lavenderDrops, int*rosemaryDrops, int*mintDrops,int*avblLem, int*avblLav, int*avblRos, int*avblMin, int*avblCM, int*avblEB, int*avblC, int*selCM, int*selEB, int*selC) 
{
  char essentialOils[][20] = {"Lemon","Lavender","Rosemary", "Mint"};
  
  int chargeValues[4];

  chargeValues[0] = *ppbLem;
  chargeValues[1] = *ppbLav; 
  chargeValues[2] = *ppbLav; 
  chargeValues[3] = *ppbMin;

printf("           oO0        oO                 \n");
printf("    _____oO_____________0o___________    \n");
printf("    [=U=U=U=U=U=U=U=U=U=U=U=U=U=U=U=]    \n");
printf("    |.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.|    \n");
printf("    |        +-+-+-+-+-+-+-+        |    \n");
printf("    |        | City Market |        |    \n");
printf("    |        +-+-+-+-+-+-+-+        |    \n");
printf("    |.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.|    \n");
printf("    |  _________  __ __  _________  |    \n");
printf("  _ | |___   _  ||[]|[]||  _      | | _  \n");
printf(" (!)||OPEN|_(!)_|| ,| ,||_(!)_____| |(!) \n");
printf(".T~T|:.....:T~T.:|__|__|:.T~T.:....:|T~T.\n");
printf("||_||||||||||_|||||||||||||_||||||||||_||\n");
  //prints the generated values paired with string characters
  int option;
  printf("\n              [City Market]\n");
  printf("---------------------------------------------\n");
  printf("     Essential       |   Price    |   Price  \n");
  printf("       Oils          | per Bottle | per drops\n");
  printf("---------------------------------------------\n");
  if(*ppbLem > 0){
    printf("1. Lemon              $%6d       $%5d\n", *ppbLem, *ppbLem/10);
  } else{
      printf("1. Lemon              [  -NOT AVAILABLE-  ]\n");
  }
  if(*ppbLav > 0){
    printf("2. Lavender           $%6d       $%5d\n", *ppbLav, *ppbLav/10);
  } else{
      printf("2. Lavender           [  -NOT AVAILABLE-  ]\n");  
  }
  if(*ppbRos > 0){
    printf("3. Rosemary           $%6d       $%5d\n", *ppbRos, *ppbRos/10);
  } else{
    printf("3. Rosemary           [  -NOT AVAILABLE-  ]\n");
  }
  if(*ppbMin > 0){
    printf("4. Mint               $%6d       $%5d\n", *ppbMin, *ppbMin/10);
  } else{
    printf("4. Mint               [  -NOT AVAILABLE-  ]\n");
  }

  /*
  int a,b = 4;
  for (a = 0; a <4 ; a++){
     if (chargeValues[a] != 0){
       printf("\n %d) %8s\t $%8d \t\t $%d", a+1, essentialOils[a], chargeValues[a], chargeValues[a]/10);
     }
     else{
       printf("\n %d)  %8s   [ Not Available ] ", a+1, essentialOils[a]);
     }
  printf("\n");
  }
  */

  printf("---------------------------------------------\n");                 
 
  printf("                     [sell]\n");
  printf("---------------------------------------------\n");
  printf("    Essential  |  Max bottles   | Max bottles\n");
  printf("      Oils     | to be acquired | to be sold \n");
  printf("---------------------------------------------\n");
  printf("1. Lemon             %3d             %3d\n", *avblLem, *lemonDrops/10);
  printf("2. Lavender          %3d             %3d\n", *avblLav, *lavenderDrops/10);
  printf("3. Rosemary          %3d             %3d\n", *avblRos, *rosemaryDrops/10);
  printf("3. Mint              %3d             %3d\n", *avblMin, *mintDrops/10);
  printf("\n--[Options]----------------------------------");
  printf("\nPress 1. Lemon Oil.\nPress 2. Lavender Oil. \nPress 3. Rosemary Oil. \nPress 4. Mint Oil. \nPress 5. Exit Essentials Market. \n[Enter Choice]: ");
  scanf("%d",&option);

  int c,d,e,f; 
  while (option != 5) {
      switch(option){
        
          case 1:
              printf("\n\t[Selling Lemon Oil]");
              printf("\nPlease enter the number drops to be sold: ");
              scanf("%d", &f);

              for (c = 0; c <f ; c++){
                    if (*lemonDrops >= 1){
                      *lemonDrops -= 1;    
                      *cash += chargeValues[0]/10;
                      printf("\n[*] Succesfully sold drops ofLemon Oil.");
                      printf("\n[$] Current Money : %d", *cash);
                      printf("\nTotal Lemon Drops: %d\n", *lemonDrops);  
                    }
                    else{
                      printf("\n[!]You do not have enough oil to sell.\n");
                      }
                  }  
            break;

        //////////////////////////////////////////////////////////////
        case 2:
            printf("\n\t[Selling Lavender Oil]");
            printf("\nPlease enter the number drops to be sold: ");
            scanf("%d", &f);

            for (c = 0; c <f ; c++){
                  if (*lavenderDrops >= 1){
                    *lavenderDrops -= 1;    
                    *cash += chargeValues[1]/10;
                    printf("\n[*] Succesfully sold drops of Lavender Oil.");
                    printf("\n[$] Current Money : %d", *cash);
                    printf("\nTotal Lavender Drops: %d\n", *lavenderDrops);  
                  }
                  else{
                    printf("\n[!]You do not have enough oil to sell.\n");
                    }
                }

          break;

        //////////////////////////////////////////////////////////////
        case 3:
            printf("\n\t[Selling Rosemary Oil]");
            printf("\nPlease enter the number drops to be sold: ");
            scanf("%d", &f);

            for (c = 0; c <f ; c++){
                  if (*rosemaryDrops >= 1){
                    *rosemaryDrops -= 1;    
                    *cash += chargeValues[2]/10;
                    printf("\n[*] Succesfully sold drops of Rosemary Oil.");
                    printf("\n[$] Current Money : %d", *cash);
                    printf("\nTotal Rosemary Drops: %d\n", *rosemaryDrops);  
                  }
                  else{
                    printf("\n[!]You do not have enough oil to sell.\n");
                    }
                }
          break;

        //////////////////////////////////////////////////////////////
        case 4:
          printf("\n\t[Selling Mint Oil]");
          printf("\nPlease enter the number drops to be sold: ");
          scanf("%d", &f);

            for (c = 0; c <f ; c++){
                  if (*mintDrops >= 1){
                    *mintDrops -= 1;    
                    *cash += chargeValues[3]/10;
                    printf("\n[*] Succesfully sold drops of Mint Oil.");
                    printf("\n[$] Current Money : %d", *cash);
                    printf("\nTotal Mint Drops: %d\n", *mintDrops);  
                  }
                  else{
                    printf("\n[!]You do not have enough oil to sell.\n");
                    }
                }
          break;

          //////////////////////////////////////////////////////////////
        default:
          printf("\n [!]Please choose from the options above.");
    }

    printf("\n--[Options]----------------------------------");
    printf("\nPress 1. Lemon Oil.\nPress 2. Lavender Oil. \nPress 3. Rosemary Oil. \nPress 4. Mint Oil. \nPress 5. Exit Essentials Market. \n[Enter Choice]: ");
    scanf("%d",&option);
  }

}




//INVENTORY
int showAvailable(int*cash, int*charge, int*clearMinds, int*energyBooster, int*diffuserCalming, int*avblCM, int*selCM, int*avblEB, int*selEB, int*avblC, int*selC, int*avblLem, int*selLem, int*avblLav, int*selLav, int*avblRos, int*selRos , int*avblMin, int*selMin, int*ppbLem, int*ppbLav, int*ppbRos, int*ppbMin, int*lemonDrops, int*lavenderDrops, int*rosemaryDrops, int*mintDrops, int*currentLocation, int*productionCharge){

  int testCash = *cash;
  char essentialOils[][20] = {"Lemon","Lavender","Rosemary", "Mint"};

  int invLemDrops = *lemonDrops;
  int invLavDrops = *lavenderDrops;
  int invRosDrops = *rosemaryDrops;
  int invMinDrops = *mintDrops;

  int availableEsBottles[4]= {0,0,0,0};
  int pricePerBottles[4];

  pricePerBottles[0] = *ppbLem;
  pricePerBottles[1] = *ppbLav;
  pricePerBottles[2] = *ppbRos;
  pricePerBottles[3] = *ppbMin;
  

  //Checks how many bottles of essential oil he can buy

  printf("\n[Testing Max numbers for Essential Oils]\n");
    for(int i = 0; i < 4; ++i) {
      int testA = testCash;
      int testPriceA = pricePerBottles[i];
      int resA;
      if (testA >= 1 && testA > testPriceA && testPriceA != 0){
        //printf("\n[Cash: $%d \t Price: %d]", testA, testPriceA );
        while(testA >= testPriceA){ 
          testA -= testPriceA;
          availableEsBottles[i] +=1;
          
          //printf("\n +%s Bottle. Cash Remaining: %d ", essentialOils[i], testA);
          }
           //printf("\n[$]Remaining Cash = %d | %s Bottles = %d\n", testA, essentialOils[i], availableEsBottles[i]);
       } 
      else{
          //printf("\n[Cash: %d \t Price: %d]", testA, testPriceA );

          //printf("\n[!]Cannot acquire %s bottle. Insufficient Funds\n", essentialOils[i]);
          availableEsBottles[i] = 0;
       }
    
    } 
   printf("[Testing Complete = Generated Values Loaded.]\n");
  //updates generated values for maximum number of essential oil bottles to main 
  *avblLem = availableEsBottles[0];
  *avblLav = availableEsBottles[1];
  *avblRos = availableEsBottles[2];
  *avblMin = availableEsBottles[3];
  

  if ( *currentLocation == 0){ //Manila
      int pCharge = (rand() % (30 - 20 + 1)) + 20;
      *productionCharge = pCharge;
  }
  else if ( *currentLocation == 1){ //Makati
      int pCharge = (rand() % (100 - 80 + 1)) + 80;
      *productionCharge = pCharge;
  }
  else if ( *currentLocation == 2){ //Alabang
      int pCharge = (rand() % (90 - 70 + 1)) + 70;
      *productionCharge = pCharge;
  }
  else if ( *currentLocation == 3){ //Quezon City
      int pCharge = (rand() % (60 - 40 + 1)) + 40;
      *productionCharge = pCharge;
  }


  return 0;
}

//make
void makeDiffusers(int *lemonDrops, int *lavenderDrops, int *rosemaryDrops, int *mintDrops, int *cash, int *currentLocation, int *clearMinds, int *energyBooster, int *diffuserCalming, int*avblCM, int*avblEB, int*avblC, int*productionCharge){

  int lemDrop = *lemonDrops; 
  int lavDrop = *lavenderDrops; 
  int rosDrop = *rosemaryDrops;
  int minDrop = *mintDrops;

  int availableDfBottles[3]= {0,0,0};
  int invLemDrops = *lemonDrops;
  int invLavDrops = *lavenderDrops;
  int invRosDrops = *rosemaryDrops;
  int invMinDrops = *mintDrops;


  printf("\n[Testing Max numbers for Diffuser Oils]\n");
  char diffuserOils[][20] = {"ClearMinds","EnergyBooster","Calming"};
  int e= 0; 
  for(int i = 0; i < 3; ++i) {
     
      
      if (e == 0){ // clearMinds
        int lemonD = invLemDrops; int rosemaryD = invRosDrops; int mintD = invMinDrops;

        while(lemonD >= 3 && rosemaryD >= 2 && mintD >= 2){
            lemonD -= 3; rosemaryD -= 2; mintD -=2;
            availableDfBottles[i] += 1; 
            //printf("\n+1 Clearminds Bottle");
          }
        e += 1;
      }

      else if (e == 1){ //energyBooster
        int lemonD = invLemDrops; int rosemaryD = invRosDrops; int mintD = invMinDrops;

        while(lemonD >= 1 && rosemaryD >= 1 && mintD >= 1){
            lemonD -= 1; rosemaryD -= 1; mintD -=1;
            availableDfBottles[i] += 1; 
            //printf("\n+1 Energy Booster Oil Bottle");
          }
        e += 1;
      }
      
      else if (e == 2){ //calming
        int lemonD = invLemDrops; int rosemaryD = invRosDrops; int lavenderD = invLavDrops;

        while(lemonD >= 1 && rosemaryD >= 1 && lavenderD >= 1){
            lemonD -= 1; rosemaryD -= 1; lavenderD -=1;
            availableDfBottles[i] += 1; 
            //printf("\n+1 Calming Oil Bottle");
          }
        e += 1;
      }

      //printf("%s Bottles = %d\n", diffuserOils[i], availableDfBottles[i]);

  }
  //updates generated values for maximum number of diffuser oils to main
  printf("[Testing Complete = Generated Values Loaded.]\n");
  *avblCM = availableDfBottles[0];
  *avblEB = availableDfBottles[1];
  *avblC = availableDfBottles[2];

  int option;

  printf("         _._._                       _._._         \n");
  printf("        _|   |_                     _|   |_        \n");
  printf("        | ... |_._._._._._._._._._._| ... |        \n");
  printf("        | ||| |   [Oilery Factory]  | ||| |        \n");
  printf("        | " " |  """    """    " "  | " " |        \n");
  printf("   ())  |[-|-]| [-|-]  [-|-]  [-|-] |[-|-]|  ())   \n");
  printf("  (())) |     |---------------------|     | (()))  \n");
  printf(" (())())| " " |  """    """    " "  | " " |(())()) \n");
  printf(" (()))()|[-|-]|  :::   .-^-.   :::  |[-|-]|(()))() \n");
  printf(" ()))(()|     | |~|~|  |_|_|  |~|~| |     |()))(() \n");
  printf("    ||  |_____|_|_|_|__|_|_|__|_|_|_|_____|  ||    \n");
  printf(" ~ ~^^ @@@@@@@@@@@@@@|=======|@@@@@@@@@@@@@@ ^^~ ~ \n");
  printf("      ^~^~                                ~^~^     \n");

  printf("\n            [City Diffusers Factory]\n");
  printf("\nProduction Charge: $ %d\n", *productionCharge);
  printf("---------------------------------------------\n");
  printf("     Diffuser        |     Available bottles  \n");
  printf("       Oils          |    based on inventory \n");
  printf("---------------------------------------------\n");
  printf("1. Clear Minds                 %d\n", *avblCM);
  printf("2. Energy Booster              %d\n", *avblEB);
  printf("3. Calming                     %d\n", *avblC);
  printf("--[Options]----------------------------------\n");
  printf("\nPress 1. Make Clear Minds.\nPress 2. Make Energy Booster. \nPress 3. Make Calming. \nPress 4. Exit\n[Enter Choice]: ");
  scanf("%d",&option);
  int a,b;

  while (option != 4) {
      *cash -= *productionCharge;
      switch(option){
        
        case 1:
          printf("\n[You chose to make Clear Minds]");

          printf("\nHow many bottles would you like to make? ");
          scanf("%d", &b);
          for (a = 0; a <b ; a++){
            if (*lemonDrops >= 3 && *rosemaryDrops >= 2 && *mintDrops >= 2){
              *lemonDrops -= 3; *rosemaryDrops -= 2; *mintDrops -=2;
              *clearMinds += 1;    

              printf("\n[*] Succesfully crafted Clear Minds.");
              printf("\n[$] Current Money : %d", *cash);
              printf("\nTotal Clear Minds: %d\n", *clearMinds);  
            }
            else{
              printf("\n[!]You do not have the necessary ingredients to make the diffuser oil.\n");
            }
          }
          break;
        
        case 2:
          printf("\n [You chose to make Energy Booster]");

          printf("\nHow many bottles would you like to make? ");
          scanf("%d", &b);
          for (a = 0; a <b ; a++){
            if (*lemonDrops >= 1 && *rosemaryDrops >= 1 && *mintDrops >= 1){
              *lemonDrops -= 1; *rosemaryDrops -= 1; *mintDrops -=1;
              *energyBooster += 1;    
              printf("\n [*] Succesfully crafted Energy Booster.");
              printf("\n [$] Current Money : %d", *cash);
              printf("\n Total Energy Booster: %d\n", *energyBooster);   
            }
            else{
              printf("\n [!] You do not have the necessary ingredients to make the diffuser oil.\n");
            }
          }
          break;

        case 3:
          printf("\n [You chose to make Calming]");

          printf("\nHow many bottles would you like to make? ");
          scanf("%d", &b);
          for (a = 0; a <b ; a++){
            if (*lavenderDrops >= 3 && *rosemaryDrops >= 2 && *lemonDrops >= 1){
              *lavenderDrops -= 3; *rosemaryDrops -= 2; *lemonDrops -=2;
              *diffuserCalming += 1;
              printf("\n [*] Succesfully crafted Calming Oil.");
              printf("\n [$] Current Money : %d", *cash);
              printf("\n Total Calming Oil: %d\n", *diffuserCalming);    
            }
            else{
              printf("\n [!] You do not have the necessary ingredients to make the diffuser oil.\n");
            }
          }
          break;

        default:
           printf("\n [!]Please choose from the options above.");
      }
      
    printf("\n--[Options]----------------------------------");
    printf("\nPress 1. Make Clear Minds.\nPress 2. Make Energy Booster. \nPress 3. Make Calming. \nPress 4. Exit Diffuser Factory\nEnter Choice: ");
    scanf("%d",&option);
  }
 
}

void sellDiffuser (int*cash, int*ppbLem, int*ppbLav, int*ppbRos, int*ppbMin, int*avblCM, int*avblEB, int*avblC, int*selCM, int*selEB, int*selC, int*clearMinds, int*energyBooster, int*diffuserCalming){
  
  int oilDFCharges[3];
  int d;
  int dropLemon = *ppbLem/10;
  int dropLav = *ppbLav/10;
  int dropRos = *ppbRos/10;
  int dropMin = *ppbMin/10;
  int option;

  int selPriceCM = 1.15* ((3*dropLemon)+(2*dropLav)+(2*dropMin));
    oilDFCharges[d] = selPriceCM;
  int selPriceEB = 1.15* ((1*dropLemon)+(1*dropRos)+(1*dropMin));
    oilDFCharges[d+1] = selPriceEB;
  int selPriceC  = 1.15* ((1*dropLemon)+(2*dropRos)+(3*dropLav));
    oilDFCharges[d+2] = selPriceC;

  *selCM = oilDFCharges[0];
  *selEB = oilDFCharges[1];
  *selC  = oilDFCharges[2];
  
  printf("\t           oO0        oO                 \n");
  printf("\t    _____oO_____________0o___________    \n");
  printf("\t    [=U=U=U=U=U=U=U=U=U=U=U=U=U=U=U=]    \n");
  printf("\t    |.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.|    \n");
  printf("\t    |        +-+-+-+-+-+-+-+        |    \n");
  printf("\t    |        |  City Market|        |    \n");
  printf("\t    |        +-+-+-+-+-+-+-+        |    \n");
  printf("\t    |.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.|    \n");
  printf("\t    |  _________  __ __  _________  |    \n");
  printf("\t  _ | |___   _  ||[]|[]||  _      | | _  \n");
  printf("\t (!)||OPEN|_(!)_|| ,| ,||_(!)_____| |(!) \n");
  printf("\t.T~T|:.....:T~T.:|__|__|:.T~T.:....:|T~T.\n");
  printf("\t||_||||||||||_|||||||||||||_||||||||||_||\n");
  int optionB;
  printf("---------------------------------------------\n");
  printf("     Diffuser       |   Price    |  Current\n");
  printf("       Oils         | per Bottle |   Stock\n");
  printf("---------------------------------------------\n");
  printf("1. Clear Minds      %8d            %d\n", *selCM,*clearMinds);
  printf("2. Energy Booster   %8d            %d\n", *selEB,*energyBooster);
  printf("3. Calming          %8d            %d\n", *selC,*diffuserCalming);
  printf("--[Options]----------------------------------\n");
  printf("\nPress 1. Clear Minds.\nPress 2. Energy Booster. \nPress 3. Calming.\nPress 4. Exit Diffusers Market. \n[Enter Choice]: ");
  scanf("%d",&optionB);
  int g,h,i,j,k; 
  while (optionB != 4) {
      switch(optionB){
        
        case 1:
            printf("\n\t[Selling Clear Minds]");
            printf("\nPlease enter the number bottles to be sold: ");
            scanf("%d", &j);

            for (k = 0; k <j ; k++){
                  if (*clearMinds >=1){
                    *clearMinds -= 1;    
                    *cash += oilDFCharges[0];
                    printf("\n[*] Succesfully sold bottle of Clear Minds.");
                    printf("\n[$] Current Money: %d", *cash);
                    printf("\nTotal Clear Minds: %d\n", *clearMinds);  
                  }
                  else{
                    printf("\n[!]You do not have enough oil to sell.\n");
                    }
                }  
          break;

        //////////////////////////////////////////////////////////////
        case 2:
            printf("\n\t[Selling Energy Booster]");
            printf("\nPlease enter the number drops to be sold: ");
            scanf("%d", &j);

            for (k = 0; k <j ; k++){
                  if (*energyBooster >= 1){
                    *energyBooster -= 1;    
                    *cash += oilDFCharges[1];
                    printf("\n[*] Succesfully sold bottle of Energy Booster.");
                    printf("\n[$] Current Money : %d", *cash);
                    printf("\nTotal Energy Booster: %d\n", *energyBooster);  
                  }
                  else{
                    printf("\n[!]You do not have enough oil to sell.\n");
                    }
                }

          break;

        //////////////////////////////////////////////////////////////
        case 3:
            printf("\n\t[Selling Calming Oil]");
            printf("\nPlease enter the number drops to be sold: ");
            scanf("%d", &j);

            for (k = 0; k <j ; k++){
                  if (*diffuserCalming >= 1){
                    *diffuserCalming -= 1;    
                    *cash += oilDFCharges[2];
                    printf("\n[*] Succesfully sold bottle of Calming Oil.");
                    printf("\n[$] Current Money: %d", *cash);
                    printf("\nTotal Calming Oil: %d\n", *diffuserCalming);  
                  }
                  else{
                    printf("\n[!]You do not have enough oil to sell.\n");
                    }
                }
          break;

          //////////////////////////////////////////////////////////////
        default:
          printf("\n [!]Please choose from the options above.");
    }
     printf("\nPress 1. Clear Minds.\nPress 2. Energy Booster. \nPress 3. Calming. \nPress 4. Exit Diffusers Market. \n[Enter Choice]: ");
     scanf("%d",&optionB);
  }

}
  

int main() 
{ 
    srand(time(0));

    int cash = 1500;
    int loan = 4000; 
    int interest = 10;
    int currentLocation = 0;
    int day = 15;
    int currentDay = 1;
    int clearMinds = 0;
    int energyBooster = 0; 
    int diffuserCalming = 0;
    int productionCharge = 0;

    int avblCM = 0; int selCM = 0;
    int avblEB = 0; int selEB = 0;
    int avblC = 0; int  selC = 0;

    int lemonDrops = 0;     // Test inv
    int lavenderDrops = 0;  // Test inv
    int rosemaryDrops = 0;  // Test inv
    int mintDrops = 0;      // Test inv

    int avblLem = 0; int selLem = 0;
    int avblLav = 0; int selLav = 0; 
    int avblRos = 0; int selRos = 0;
    int avblMin = 0; int selMin = 0;
  
  
    int ppbLem = 0; // Test price
    int ppbLav = 0; // Test price
    int ppbRos = 0; // Test price
    int ppbMin = 0; // Test price

    


    char cityLocations[][20] = {"Manila","Makati","Quezon City","Alabang"};
  
    int charge;
    int menu; 
    printf(" {}  ======================================+ \n");
    printf(" ||        Oil-bularyo ON THE GO           | \n");    
    printf(" )(       CCPROG1 MACHINE PROJECT          | \n");
    printf("|OO|       By: David Avellaneda            | \n");
    printf("|__| ======================================+ \n");

    printf("\n================[Options Menu]==============\n");
    printf("|  1. Start a new game.                    |\n");    
    //printf("|  2. View Top 10 list.                    |\n");
    printf("|  2. Change game settings.                |\n");
    printf("|  3. Exit game.                           |\n");
    printf("============================================\n\n");
    printf("Choose Action: ");
    scanf("%d", &menu);
    while(menu!= 3){    
      switch(menu){
        case 1:
        //system("clear");
        chargeEssentials(&ppbLem, &ppbLav, &ppbRos, &ppbMin);

        freebie(&lemonDrops, &lavenderDrops, &rosemaryDrops, &mintDrops, &clearMinds,&energyBooster, &diffuserCalming);

        showAvailable(&cash, &charge, &clearMinds, &energyBooster, &diffuserCalming, &avblCM, &selCM, &avblEB, &selEB, &avblC, &selC, &avblLem, &selLem, &avblLav, &selLav, &avblRos, &selRos , &avblMin, &selMin, &ppbLem, &ppbLav, &ppbRos, &ppbMin, &lemonDrops, &lavenderDrops, &rosemaryDrops, &mintDrops, &currentLocation, &productionCharge);

        while(1){
          int q;
          for (q = 0; q <day+1 ; q++){
            
            
            printf("\n===============[Game Stats]=================\n");
            printf("\tCurrent City: %s\n", cityLocations[currentLocation]);
            printf("\tCurrent Day : #%d\n", currentDay);    
            printf("\tCash on-hand: $%d\n", cash);
            printf("\tCurrent debt: $%d\n", loan);
            printf("============================================\n\n");
            

            int option;
            printf("\n============[Choose an Action]==============\n");
            printf("|  1. Buy        4. Pay Debt /Loan Money   |\n");    
            printf("|  2. Sell       5. Travel                 |\n");
            printf("|  3. Make       6. End Game.              |\n");
            printf("============================================\n\n");
            printf("Choose Action: ");
            scanf("%d", &option);
            
            if (option == 1 || option == 2){ 
               showAvailable(&cash, &charge, &clearMinds, &energyBooster, &diffuserCalming, &avblCM, &selCM, &avblEB, &selEB, &avblC, &selC, &avblLem, &selLem, &avblLav, &selLav, &avblRos, &selRos , &avblMin, &selMin, &ppbLem, &ppbLav, &ppbRos, &ppbMin, &lemonDrops, &lavenderDrops, &rosemaryDrops, &mintDrops, &currentLocation, &productionCharge);

              if(option == 1) //buy 
              { 

                buyEssentials(&cash, &ppbLem, &ppbLav, &ppbRos, &ppbMin, &lemonDrops, &lavenderDrops, &rosemaryDrops, &mintDrops, &avblLem,&avblLav, &avblRos, &avblMin, &avblCM, &avblEB, &avblC,&selCM, &selEB, &selC);
                
              }
              else if(option ==2){ //sell
                int choose;

                printf("===============[Choose Market]==============\n");
                printf("| 1. Ess. Oil Market   2. Diff. Oil Market |\n"); 
                printf("============================================\n");
                printf("Enter choice: ");
                scanf("%d", &choose);
                if (choose == 1){
                  sellEssentials(&cash,&ppbLem, &ppbLav,&ppbRos, &ppbMin,&lemonDrops, &lavenderDrops, &rosemaryDrops, &mintDrops,&avblLem, &avblLav, &avblRos, &avblMin, &avblCM, &avblEB, &avblC, &selCM, &selEB, &selC); 
                }
                else if (choose == 2){
                  sellDiffuser(&cash, &ppbLem, &ppbLav, &ppbRos, &ppbMin, &avblCM, &avblEB, &avblC, &selCM, &selEB, &selC, &clearMinds, &energyBooster, &diffuserCalming);
                }

                else{
                  printf("[!]Please choose from the options above.");
                }
              }        
            }
            
            else if (option == 3) //make
            {
              makeDiffusers(&lemonDrops, &lavenderDrops, &rosemaryDrops, &mintDrops, &cash, &currentLocation, &clearMinds, &energyBooster, &diffuserCalming,&avblCM, &avblEB, &avblC,&productionCharge); 
            } 
            
            else if (option == 4)//pay debt loan
            {
              
              printf("\t          _.-*(               _.- \n");
              printf("\t    .-*'``     ``*---..-i__.-`:'  \n");
              printf("\t .'o   ((   ,         _ .---..(   \n");
              printf("\t `-^^._'._(__...--*^^     ``     \n");

              int choice;
              int payment;
              int newLoan;
          
              printf("\n           [ Local Loan Shark ]\n\n");
              printf("Current Money = $%d\n", cash);
              printf("---------------------------------------------\n");
              printf("     Outstanding        |    Interest rate   \n");
              printf("        debt            |       per day      \n");
              printf("---------------------------------------------\n");
              printf("  $%10d                  %d-percent\n", loan, interest);
              printf("--[Options]----------------------------------\n");
              printf("\nPress 1. Pay Outstanding Debt. \nPress 2. Loan Money.\nPress 3. Exit LoanShark. \n[Enter Choice]: ");
              scanf("%d",&choice);
              while (choice != 3) {
              switch(choice){
                case 1:
                  printf("[You chose to pay your Debt.]\n");
                  printf("Please enter the debt you are going to pay: ");
                  scanf("%d", &payment);
                  if (payment <= cash && payment <= loan ){
                    cash -= payment;
                    loan -= payment;
                    printf("\n---------------------------------------------");
                    printf("\n\t\t\t[Payment Receipt]");
                    printf("\n---------------------------------------------");
                    printf("\n[#]You paid: %d", payment);
                    printf("\n[*]Your current debt: %d", loan);
                    printf("\n[$]Money left: %d", cash);
                    printf("\n---------------------------------------------");
                  }
                  else{
                    printf("\n[!]Payment Unsuccesful.\n");
                  }
                break;

              case 2:
                printf("$[You chose to make another loan.]$\n");
                printf("Please enter the money you are going to loan: ");
                scanf("%d", &newLoan);
                if (newLoan > 0){
                  cash += newLoan;
                  loan += newLoan;
                  printf("\t\t\t[Loan Receipt]\n");
                  printf("\n---------------------------------------------");
                  printf("\n[#]You loaned: %d", newLoan);
                  printf("\n[*]Your current debt: %d", loan);
                  printf("\n[$]Current Money : %d", cash);
                  printf("\n---------------------------------------------");
                }
                else{
                  printf("\n[!]Loan Unsuccesful.\n");
                }
              
              break;

              default:
                printf("\n[!]Please choose from the options above.\n");
              }
                printf("\nPress 1. Pay Outstanding Debt. \nPress 2. Loan Money.\nPress 3. Exit LoanShark. \n[Enter Choice]: ");
                scanf("%d",&choice);
              }
            }
              

            else if (option == 5)//travel
            {
              int select;
              int basis = currentLocation;
              printf("\t     ____     \n");
              printf("\t   _/____]__  \n");
              printf("\t |_v'_]*=-=*] \n");     
              printf("\t  `UJ-uJ--uJ  \n");
              printf("=============[Choose a City]================\n");
              printf("|    1. Manila       3. Quezon City        |\n");    
              printf("|    2. Makati       4. Alabang            |\n");
              printf("============================================\n");
              printf("Current Location: %s\n", cityLocations[currentLocation]);
              printf("\nEnter choice: ");
              scanf("%d", &select);
              if(select != basis +1 && select <= 4){
                if (select == 1){ //manila
                  currentLocation = 0;
                  currentDay +=1 ; 
                  printf("New Location: %s\n", cityLocations[currentLocation]);
                  if(loan > 0){ //BAT AYAW
                    loan += (interest*loan)/100;
                  }
                  else{}
                }

                else if (select == 2){ //makati 
                  currentLocation = 1; 
                  currentDay +=1; 
                  printf("New Location: %s\n", cityLocations[currentLocation]);
                  if(loan > 0){ 
                
                    loan += (interest*loan)/100;
                  } 
                  else{}
                }
                else if (select == 3){ //Quezon City
                  currentLocation = 2;
                  currentDay +=1;
                  printf("New Location: %s\n", cityLocations[currentLocation]);
                  if(loan > 0){
                    loan += (interest*loan)/100;
                  }
                  else{} 
                }
                else if (select == 4){ //Alabang
                  currentLocation = 3;
                  currentDay +=1;
                  printf("New Location: %s\n", cityLocations[currentLocation]);
                  if(loan > 0){
                    loan += (interest*loan)/100;
                  }
                  else{} 
                }
                  //system("clear");
                  freebie(&lemonDrops, &lavenderDrops, &rosemaryDrops, &mintDrops, &clearMinds,&energyBooster, &diffuserCalming);
                  
                  chargeEssentials(&ppbLem, &ppbLav, &ppbRos, &ppbMin);

                               
              }
              else{
                printf("\n[!]Please choose from the options above.");
                printf("\n[!]Choice not Available.");
              
              }

            } 

            else if (option == 6)//Exit
            {
              
              printf("\n=============[Game Summary]=================\n");
              printf("\tCurrent City: %s\n", cityLocations[currentLocation]);
              printf("\tCurrent Day : #%d\n", currentDay);    
              printf("\tCash on-hand: $%d\n", cash);
              printf("\tCurrent debt: $%d\n", loan);
              printf("============================================\n");
              printf("\tFinal Score:  %d\n", cash-loan);
              printf("============================================\n");
              printf("Enter your nickname: ");
              char nickname[20];
              scanf("%s",nickname);
              int standing = cash - loan;
              //write nickname + standing to file
              return 0;
            }
          }
              printf("\n=============[Game Summary]=================\n");
              printf("\tCurrent City: %s\n", cityLocations[currentLocation]);
              printf("\tCurrent Day : #%d\n", currentDay);    
              printf("\tCash on-hand: $%d\n", cash);
              printf("\tCurrent debt: $%d\n", loan);
              printf("============================================\n");
              printf("\tFinal Score:  %d\n", cash-loan);
              printf("============================================\n");
              printf("Enter your nickname: ");
              char nickname[20];
              scanf("%s",nickname);
              int standing = cash - loan;
              return 0;

      break;

      //case 2:
        //printf("\nShows List");
      //break;

      case 2:
        printf("\n===============[Settings Menu]==============\n");
        printf("|  1. Change the number of days [per game] |\n");    
        printf("|  2. Change starting money.               |\n");
        printf("|  3. Change starting loan.                |\n");
        printf("|  4. Change loan interest rate.           |\n");
        printf("|  5. Exit settings.                       |\n");
        printf("============================================\n\n");
        printf("Choose Action: ");
        int settingsMenu; 
        scanf("%d", &settingsMenu);
        while(settingsMenu != 5){
        switch(settingsMenu){
          int s;
          case 1:
            printf("\n\t[Change Game Days]");
            printf("\nPlease enter the new number of days: ");
            scanf("%d", &s);
            if (s != day){
              day = s;
              printf("\n[@]New number of days: %d", day);
            }
            else{
              printf("\n[!]Error. Please try again :("); 
            }
          break;

          case 2:
            printf("\n\t[Change Starting Money]");
            printf("\nPlease enter the new starting money: ");
            scanf("%d", &s);
            if (s != cash){
              cash = s;
              printf("\n[$]New starting cash: %d", cash);
            }
            else{
              printf("\n[!]Error. Please try again :("); 
            }
          break;

          case 3:
            printf("\n\t[Change Starting Loan]");
            printf("\nPlease enter the new starting loan: ");
            scanf("%d", &s);
            if (s != loan){
              loan = s;
              printf("\n[#]New starting loan: %d", loan);
            }
            else{
              printf("\n[!]Error. Please try again :("); 
            }
          break;

          case 4:
            printf("\n\t[Change Interest Rate]");
            printf("\nPlease enter the new interest rate: ");
            scanf("%d", &s);
            if (s != interest){
              interest = s;
              printf("\nN[*]ew interest rate: %d", day);
            }
            else{
              printf("\n[!]Error. Please try again :("); 
            }
        

          default:
            printf("[!]Please choose from the options above.");

          }
           printf("\n===============[Settings Menu]==============\n");
          printf("|  1. Change the number of days [per game] |\n");    
          printf("|  2. Change starting money.               |\n");
          printf("|  3. Change starting loan.                |\n");
          printf("|  4. Change loan interest rate.           |\n");
          printf("|  5. Exit settings.                       |\n");
          printf("============================================\n\n");
          printf("Choose Action: ");
          scanf("%d", &settingsMenu);
        }
        break;

      default:
        printf("\n[!]Please choose from the options above.\n");
      }
        printf("\n================[Options Menu]==============\n");
        printf("|  1. Start a new game.                    |\n");    
        //printf("|  2. View Top 10 list.                    |\n");
        printf("|  2. Change game settings.                |\n");
        printf("|  3. Exit game.                           |\n");
        printf("============================================\n\n");
        printf("Choose Action: ");
        scanf("%d", &menu);
      }

  }
      printf("\n-End-");
      return 0;
}
    
  
 




\n");
        printf("Choose Action: ");
        int settingsMenu; 
        scanf("%d", &settingsMenu);
        while(settingsMenu != 5){
        switch(settingsMenu){
          int s;
          case 1:
            printf("\n\t[Change Game Days]");
            printf("\nPlease enter the new number of days: ");
            scanf("%d", &s);
            if (s != day){
              day = s;
              printf("\n[@]New number of days: %d", day);
            }
            else{
              printf("\n[!]Error. Please try again :("); 
            }
          break;

          case 2:
            printf("\n\t[Change Starting Money]");
            printf("\nPlease enter the new starting money: ");
            scanf("%d", &s);
            if (s != cash){
              cash = s;
              printf("\n[$]New starting cash: %d", cash);
            }
            else{
              printf("\n[!]Error. Please try again :("); 
            }
          break;

          case 3:
            printf("\n\t[Change Starting Loan]");
            printf("\nPlease enter the new starting loan: ");
            scanf("%d", &s);
            if (s != loan){
              loan = s;
              printf("\n[#]New starting loan: %d", loan);
            }
            else{
              printf("\n[!]Error. Please try again :("); 
            }
          break;

          case 4:
            printf("\n\t[Change Interest Rate]");
            printf("\nPlease enter the new interest rate: ");
            scanf("%d", &s);
            if (s != interest){
              interest = s;
              printf("\nN[*]ew interest rate: %d", day);
            }
            else{
              printf("\n[!]Error. Please try again :("); 
            }
        

          default:
            printf("[!]Please choose from the options above.");

          }
           printf("\n===============[Settings Menu]==============\n");
          printf("|  1. Change the number of days [per game] |\n");    
          printf("|  2. Change starting money.               |\n");
          printf("|  3. Change starting loan.                |\n");
          printf("|  4. Change loan interest rate.           |\n");
          printf("|  5. Exit settings.                       |\n");
          printf("============================================\n\n");
          printf("Choose Action: ");
          scanf("%d", &settingsMenu);
        }
        break;

      default:
        printf("\n[!]Please choose from the options above.\n");
      }
        printf("\n================[Options Menu]==============\n");
        printf("|  1. Start a new game.                    |\n");    
        //printf("|  2. View Top 10 list.                    |\n");
        printf("|  2. Change game settings.                |\n");
        printf("|  3. Exit game.                           |\n");
        printf("============================================\n\n");
        printf("Choose Action: ");
        scanf("%d", &menu);
      }

  }
      printf("\n-End-");
      return 0;
}
    
  
 




