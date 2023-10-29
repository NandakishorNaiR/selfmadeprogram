#include <stdio.h>
int main(){
  int pieces,cost,sell;
  cost = 150;
  sell = 299;
 float disa = 35.5;
 float disb = 28.0;
 float disc = 21.5;
float disd = 14.0;
  float dise = 7.5;
  float disf = 3.5;

  printf("ENTER QUANTITY (per piece price is 299/-):");
  scanf("%d",&pieces);
  if(pieces>=60000 && pieces<=1000000){
    printf("😊 you have got 50%% special discount");
    printf("\nWOW! 😍 your discount  is: \u20B9\%.2f\n",disa*pieces);
      printf("your Total price is: \u20B9\%.2f",pieces*sell - disa*pieces);
      printf("\nprofit=\u20B9\%.2f",(pieces*sell)-(cost*pieces)-(disa-pieces));
      printf("\nThankyou for purchasing (^///^)");
  }
  else if(pieces>=35000 && pieces<=59999){
  printf("😊 you have got 35%% special discount\n");
    printf("WOW! 😍 your discount  is: \u20B9\%.2f\n",disb*pieces);
     printf("your Total price is: \u20B9\%.2f",pieces*sell - disb*pieces);
     printf("\nprofit=\u20B9\%.2f",(pieces*sell)-(disb*pieces)-(cost*pieces));
 printf("\nThankyou for purchasing (^///^)");
 }
   else if(pieces>=25000 && pieces<=34999){
  printf("😊 you have got 17.5%% special discount");
    printf("\nWOW! 😍 your discount  is:\u20B9\%.2f\n",disc*pieces);
     printf("your Total price is:\u20B9\%.2f",pieces*sell - disc*pieces);
     printf("\nprofit=\u20B9\%.2f",(pieces*sell)-(disc*pieces)-(cost*pieces));
     printf("\nThankyou for purchasing (^///^)");
  }
     else if(pieces>15000 && pieces<=24999){
         printf("😊 you have got 7%% special discount ");
       printf("\nWOW! 😍 your discount  is:\u20B9\%.2f\n",disd*pieces);
          printf("your Total price is:\u20B9\%.2f",pieces*sell - disd*pieces);
       printf("\nprofit=\u20B9\%.2f",(pieces*sell)-(disd*pieces)-(cost*pieces));
          printf("\nThankyou for purchasing (^///^)");
     }

  else if(pieces>5000 && pieces<=14999){
      printf("😊 you have got 7%% special discount ");
       printf("\nWOW! 😍 your discount  is:\u20B9\%.2f\n",dise*pieces);
          printf("yourTotal price is:\u20B9\%.2f",pieces*sell - dise*pieces);
       printf("\nprofit=\u20B9\%.2f",(pieces*sell)-(dise*pieces)-(cost*pieces));
       printf("\nThankyou for purchasing (^///^)");
  }
  else if(pieces>0 && pieces<=4999){
      printf("😊 you have got 7%% special discount ");
       printf("\nWOW! 😍 your discount  is:\u20B9\%.2f\n",disf*pieces);
          printf("your Total price is:\u20B9\%.2f",pieces*sell - disf*pieces);
       printf("\nprofit=\u20B9\%.2f",(pieces*sell)-(disf*pieces)-(cost*pieces));
       printf("\nThankyou for purchasing (^///^)");
  }
 return 0;
}