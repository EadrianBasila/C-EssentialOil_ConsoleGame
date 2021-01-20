/*
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <string.h>

void showAvailable(int*cash, int*charge, int*clearMinds, int*energyBooster, int*diffuserCalming, int*avblCM, int*selCM, int*avblEB, int*selEB, int*avblC, int*selC, int*avblLem, int*selLem, int*avblLav, int*selLav, int*avblRos, int*selRos , int*avblMin, int*selMin, int*ppbLem, int*ppbLav, int*ppbRos, int*ppbMin, int*lemonDrops, int*lavenderDrops, int*rosemaryDrops, int*mintDrops){

  int testCash = *cash;
  char essentialOils[][20] = {"Lemon","Lavender","Rosemary", "Mint"};

  int invLemDrops = *lemonDrops;
  int invLavDrops = *lavenderDrops;
  int invRosDrops = *rosemaryDrops;
  int invMinDrops = *mintDrops;

  int availableEsBottles[4];
  int availableDfBottles[3];
  int pricePerBottles[4];

  pricePerBottles[0] = *ppbLem;
  pricePerBottles[1] = *ppbLav;
  pricePerBottles[2] = *ppbRos;
  pricePerBottles[3] = *ppbMin;
  

  //Checks how many bottles of essential oil he can buy
  //printf("\n[Testing Max numbers for Essential Oils]\n");
  for(int i = 0; i < 4; ++i) {
    int testA = testCash;
    int testPriceA = pricePerBottles[i]; 
    int resA;

    while(testA >= 1){ 
      testA -= testPriceA;
      availableEsBottles[i] +=1;
      //printf("\n +%s Bottle. Cash Remaining: %d ", essentialOils[i], testA);
      }

    //printf("\nRemaining Cash = %d | %s Bottles = %d\n", testA+testPriceA, essentialOils[i], availableEsBottles[i]-1);
  } 

  //updates generated values for maximum number of essential oil bottles to main 
  *avblLem = availableEsBottles[0]-1;
  *avblLav = availableEsBottles[1]-1;
  *avblRos = availableEsBottles[2]-1;
  *avblMin = availableEsBottles[3]-1;

  *selLem = invLemDrops/10;   
  *selLav = invLavDrops/10;
  *selRos = invRosDrops/10;
  *selMin = invMinDrops/10;
                                                       //
  //printf("\n[Testing Max numbers for Diffuser Oils]\n");
  char diffuserOils[][20] = {"ClearMinds","EnergyBooster","Calming"};
   
  for(int i = 0; i < 3; ++i) {
      int a;

      if (a == 0){ // clearMinds
        int lemonD = invLemDrops; int rosemaryD = invRosDrops; int mintD = invMinDrops;

        while(lemonD >= 3 && rosemaryD >= 2 && mintD >= 2){
            lemonD -= 3; rosemaryD -= 2; mintD -=2;
            availableDfBottles[i] += 1; 
            //printf("\n+1 Clearminds Bottle");
          }
        a += 1;
      }

      else if (a == 1){ //energyBooster
        int lemonD = invLemDrops; int rosemaryD = invRosDrops; int mintD = invMinDrops;

        while(lemonD >= 1 && rosemaryD >= 1 && mintD >= 1){
            lemonD -= 1; rosemaryD -= 1; mintD -=1;
            availableDfBottles[i] += 1; 
            //printf("\n+1 Energy Booster Oil Bottle");
          }
        a += 1;
      }
      
      else if (a == 2){ //calming
        int lemonD = invLemDrops; int rosemaryD = invRosDrops; int lavenderD = invLavDrops;

        while(lemonD >= 1 && rosemaryD >= 1 && lavenderD >= 1){
            lemonD -= 1; rosemaryD -= 1; lavenderD -=1;
            availableDfBottles[i] += 1; 
            //printf("\n+1 Calming Oil Bottle");
          }
        a += 1;
      }

      //printf("\n%s Bottles = %d\n", diffuserOils[i], availableDfBottles[i]);

  }
  //updates generated values for maximum number of diffuser oils to main
  *avblCM = availableDfBottles[0];
  *avblEB = availableDfBottles[1];
  *avblC = availableDfBottles[2];

  *selCM = *clearMinds;
  *selEB = *energyBooster;
  *selC = *diffuserCalming;

}

void makeDiffusers(int *lemonDrops, int *lavenderDrops, int *rosemaryDrops, int *mintDrops, int *cash, int *currentLocation, int *clearMinds, int *energyBooster, int *diffuserCalming, int*avblCM, int*avblEB, int*avblC){

  int productionCharge;

  int lemDrop = *lemonDrops; 
  int lavDrop = *lavenderDrops; 
  int rosDrop = *rosemaryDrops;
  int minDrop = *mintDrops;

  if ( *currentLocation == 0){ //Manila
      int pCharge = (rand() % (30 - 20 + 1)) + 20;
      productionCharge = pCharge;
  }
  else if ( *currentLocation == 1){ //Makati
      int pCharge = (rand() % (100 - 80 + 1)) + 80;
      productionCharge = pCharge;
  }
  else if ( *currentLocation == 2){ //Alabang
      int pCharge = (rand() % (90 - 70 + 1)) + 70;
      productionCharge = pCharge;
  }
  else if ( *currentLocation == 3){ //Quezon City
      int pCharge = (rand() % (60 - 40 + 1)) + 40;
      productionCharge = pCharge;
  }

  int option;
  printf("            [City Diffusers Factory]\n");
  printf("\nProduction Charge: $ %d\n", productionCharge);
  printf("---------------------------------------------\n");
  printf("     Diffuser        |     Available bottles  \n");
  printf("       Oils          |    based on inventory \n");
  printf("---------------------------------------------\n");
  printf("1. Clear Minds                 %d\n", *avblCM);
  printf("2. Energy Booster              %d\n", *avblEB);
  printf("3. Calming                     %d\n", *avblC);
  printf("--[Options]----------------------------------");
  printf("\nPress 1. Make Clear Minds.\nPress 2. Make Energy Booster. \nPress 3. Make Calming. \nPress 4. Exit\n[Enter Choice]: ");
  scanf("%d",&option);
  int a,b;
  while (option != 4) {
      *cash -= productionCharge;
      switch(option){
        
        case 1:
          printf("\n[You chose to make Clear Minds]");

          printf("\nHow many bottles would you like to make? ");
          scanf("%d", &b);
          for (a = 0; a <b ; a++){
            if (*lemonDrops >= 3 && *rosemaryDrops >= 2 && *mintDrops >= 2){
              *lemonDrops -= 3; *rosemaryDrops -= 2; *mintDrops -=2;
              //*cash -= productionCharge;
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
              //*cash -= productionCharge;
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
              //*cash -= productionCharge;
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


int main(){
  srand(time(0)); 

  int cash = 1200;
  int loan = 4000; 
  int currentLocation = 0;

  int clearMinds = 0;
  int energyBooster = 0; 
  int diffuserCalming = 0;

  int avblCM = 0, selCM = 0;
  int avblEB = 0, selEB = 0;
  int avblC = 0,  selC = 0;

  int lemonDrops = 20;     // Test inv
  int lavenderDrops = 30;  // Test inv
  int rosemaryDrops = 40;  // Test inv
  int mintDrops = 50;      // Test inv

  int avblLem = 0, selLem = 0;
  int avblLav = 0, selLav = 0; 
  int avblRos = 0, selRos = 0;
  int avblMin = 0, selMin = 0;
  
  int ppbLem = 65; // Test price
  int ppbLav = 85; // Test price
  int ppbRos = 75; // Test price
  int ppbMin = 45; // Test price

  char cityLocations[][20] = {"Manila","Makati","Alabang", "Quezon City"};
  
  int charge;

  showAvailable(&cash, &charge, &clearMinds, &energyBooster, &diffuserCalming, &avblCM, &selCM, &avblEB, &selEB, &avblC, &selC, &avblLem, &selLem, &avblLav, &selLav, &avblRos, &selRos,&avblMin, &selMin, &ppbLem, &ppbLav, &ppbRos, &ppbMin, &lemonDrops, &lavenderDrops, &rosemaryDrops, &mintDrops); 

  makeDiffusers(&lemonDrops, &lavenderDrops, &rosemaryDrops, &mintDrops, &cash, &currentLocation, &clearMinds, &energyBooster, &diffuserCalming, &avblCM, &avblEB, &avblC); 

  printf("\n New Val");
  printf("\n Cash: %d", cash);
  printf("\n Clear Minds    %d",clearMinds);
  printf("\n Energy Booster %d",energyBooster);
  printf("\n Calming        %d",diffuserCalming);
  printf("\n Lemon Drops    %d",lemonDrops);
  printf("\n Lavender Drops %d",lavenderDrops);
  printf("\n Rosemary Drops %d",rosemaryDrops);
  printf("\n Mint Drops     %d",mintDrops);

}
*/

