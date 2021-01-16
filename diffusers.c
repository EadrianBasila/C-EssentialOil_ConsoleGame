
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <string.h>

/*
int showAvailable(int *lemonDrops, int *lavenderDrops, int *rosemaryDrops, int *mintDrops, int difOil){

  int lemDrop = *lemonDrops; 
  int lavDrop = *lavenderDrops; 
  int rosDrop = *rosemaryDrops;
  int minDrop = *mintDrops;

  if (difOil == 1){
  
  int c,d;

  for (c = 0; c <d ; c++){
    if (*lemonDrops >= 3 && *rosemaryDrops >= 2 && *mintDrops >= 2){
      lemDrop -= 3; rosDrop -= 2; minDrop -=2;
      aCM += 1;   
    }
    else{}
    break;
  }
    

  }
return 0; 
}
*/
void makeDiffusers(int *lemonDrops, int *lavenderDrops, int *rosemaryDrops, int *mintDrops, int *cash, int *currentLocation, int *clearMinds, int *energyBooster, int *diffuserCalming){

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
  printf("1. Clear Minds                 \n");
  printf("2. Energy Booster              \n");
  printf("3. Calming                     \n");
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
  int lemonDrops = 10;
  int lavenderDrops = 10;
  int rosemaryDrops = 10;
  int mintDrops = 10;

  int cash = 1500;
  int loan = 4000; 
  int currentLocation = 0;

  int clearMinds = 0;
  int energyBooster = 0; 
  int diffuserCalming = 0;

  char cityLocations[][20] = {"Manila","Makati","Alabang", "Quezon City"};
  

  makeDiffusers(&lemonDrops, &lavenderDrops, &rosemaryDrops, &mintDrops, &cash, &currentLocation, &clearMinds, &energyBooster, &diffuserCalming); 

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
