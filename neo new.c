#include <stdio.h>
 #include <conio.h>
#define AND &&
#define range1 (product>=100 AND product<=200)
#define range2 (product>200 AND product<=300)
#define range3 (product>300 AND product<=400)
#define range4 (product>400 AND product<=500)
#define range5 (product>500)

 void greeting(){
 	char name[100];
 	int y;
 	printf("Id Name: \n");
 	scanf("%s",&name);
 	printf("\n");
 	printf("\n");
 	printf("\n");
 	for(y=1;y<50;y++){
		printf("%c ",250);
		printf("     ");
	}
	 printf("Hello %s, Welcome To Nirama's \n",name);
	 
	 }
void deng(){

	int i,y;
	
	for(i=0;i<80;i++){
		printf("%c",196);
	}
	for(y=1;y<24;y++){
		printf("%c ",200);
		printf("     ");
	}
	char offer;
    printf("      -:We have our festive offers going from September to November:-",offer);
    printf("\n");
}

	
	 
 void select(){
	 int product;
	 int mon;
	 int i;
	 int j;
	 int y;
	 int d;
	 char item[100];
	 printf("Please Enter Your Month Of Buying[In Number]:");
	 	scanf("%d",&mon);
	 	printf("\n");
	 	for(i=0;i<2;i++){
	for(j=0;j<=0;j++){
		printf("*");
	}
	    printf("\n");
        }  
	 printf("Please select your interested price range(Within 1000): \n");
	 scanf("%d",&product);
	 printf("\n");
 
	 
	 if(range1 && mon>=9 && mon<=11){
	 	
	for(i=0;i<80;i++){
		printf("%c",196);
	}
	 	printf("You Will have Discount\n");
	 	
	for(i=0;i<80;i++){
		printf("%c",196);
	}
		 printf("We Have This For You: \n");
		 printf("Earings--5 percent \n");
		 printf("Walet--5 percent \n ");
		 printf("Cosmetics--5 percent \n ");
		 for(i=0;i<10;i++){
		printf("%c",196);
		 }
		printf("Enter your product:");
        scanf("%s", item);
        for(y=1;y<24;y++){
		printf("%c ",260);
		printf("     ");
	}
        printf("Your Selected Item Is: %s\n",item);
		 d=product-(product*0.05);
		 printf("\n");
		 printf("Your Total Amount After Discount Is:%d",d);
		 
	 }else if(range2 && mon>=9 && mon<=11){
	 	
	for(i=0;i<80;i++){
		printf("%c",196);
	}
	 	printf("You Will have Discount\n");
	 	
	for(i=0;i<80;i++){
		printf("%c",196);
	}
	 	 printf("We Have This For You: \n");
		 printf("Top Wear For Women--10 percent \n");
		 printf("Formal Wear For Men--10 percent \n");
		 printf("Hand Bags--10 percent \n");
		 for(i=0;i<10;i++){
		printf("%c",196);
	}
	printf("Enter your product:");
        scanf("%s", item);
        for(y=1;y<24;y++){
		printf("%c ",260);
		printf("     ");
		}
        printf("Your Selected Item Is: %s\n",item);
		 d=product-(product*0.1);
		 printf("\n");
		 printf("Your Total Amount After Discount Is:%d",d);
		 
     }else if(range3 && mon>=9 && mon<=11){
     	
	for(i=0;i<0;i++){
		printf("%c",196);
	}
     	printf("You Will have Discount\n");
     	
	for(i=0;i<80;i++){
		printf("%c",196);
	}
	 	 printf("We Have This For You: \n");
		 printf("Kid's Shoes--15 percent \n");
		 printf("Salwar Set--15 percent \n");
		 printf("Chiffon Dress--15 percent \n");
		 for(i=0;i<10;i++){
		printf("%c",196);
	}
	printf("Enter your product:");
        scanf("%s", item);
        for(y=1;y<24;y++){
		printf("%c ",260);
		printf("     ");
		}
        printf("Your Selected Item Is: %s\n",item);
		 d=product-(product*0.15);
		 printf("\n");
		 printf("Your Total Amount After Discount Is:%d",d);
		 
	 }else if(range4 && mon>=9 && mon<=11){
	 	
	for(i=0;i<80;i++){
		printf("%c",196);
	}
	 	printf("You Will have Discount\n");
	 	
	for(i=0;i<80;i++){
		printf("%c",196);
	}
	 	 printf("We Have This For You: \n");
		 printf("Kid's Wear Set--20 percent \n");
		 printf("Denim--20 percent \n");
		 printf("Women's Footwear--20 percent \n");
		 for(i=0;i<10;i++){
		printf("%c",196);
	}
	printf("Enter your product:");
        scanf("%s", item);
        for(y=1;y<24;y++){
		printf("%c ",260);
		printf("     ");
		}
        printf("Your Selected Item Is: %s\n",item);
		 d=product-(product*0.2);
		 printf("\n");
		 printf("Your Total Amount After Discount Is: %d",d);
		 
	 }else if(range5 && mon>=9 && mon<=11){
	 
	for(i=0;i<80;i++){
		printf("%c",196);
	}
	 	printf("You Will have Discount\n");
	 
	for(i=0;i<80;i++){
		printf("%c",196);
	}
	 	 printf("We Have This For You: \n");
		 printf("Saaree--25 percent \n");
		 printf("Men's Festive Wear--25 percent \n");
		 printf("Men's Footwear--25 percent \n");
		  for(i=0;i<10;i++){
		printf("%c",196);
	}printf("Enter your product:");
        scanf("%s", item);
        for(y=1;y<24;y++){
		printf("%c ",260);
		printf("     ");
		}
        printf("Your Selected Item Is: %s\n",item);
		 d=product-(product*0.25);
		 printf("\n");
		
		 printf("Your Total Amount After Discount Is: %d",d);
	    }else{   
		 if(range1){
		 	for(i=0;i<10;i++){
		printf("%c",196);
		 }
		 	printf("Sorry You Will have no Discount\n");
		 	for(i=0;i<10;i++){
		printf("%c",196);
		 }
		 	printf("\n");
		 printf("We Have This For You: \n");
		 printf("Earings\n");
		 printf("Walet \n ");
		 printf("Cosmetics \n ");
		 for(i=0;i<10;i++){
		printf("%c",196);
	}
	printf("Enter your product:");
        scanf("%s", item);
        for(y=1;y<24;y++){
		printf("%c ",260);
		printf("     ");
		}
        printf("Your Selected Item Is: %s\n",item);
		 printf("Your Total Amount Will Be: %d",product);
	 }else if(range2){
	 	for(i=0;i<10;i++){
		printf("%c",196);
		 }
	 	printf("Sorry You Will have no Discount\n");
	 	for(i=0;i<10;i++){
		printf("%c",196);
		 }
	 	printf("\n");
	 	 printf("We Have This For You: \n");
		 printf("Top Wear For Women\n");
		 printf("Formal Wear For Men\n");
		 printf("Hand Bags \n");
		 for(i=0;i<10;i++){
		printf("%c",196);
	}
	printf("Enter your product:");
        scanf("%s", item);
        for(y=1;y<24;y++){
		printf("%c ",260);
		printf("     ");
		}
        printf("Your Selected Item Is: %s\n",item);
		 printf("Your Total Amount Will Be: %d",product);
     }else if(range3){
     	for(i=0;i<10;i++){
		printf("%c",196);
		 }
     	printf("Sorry You Will have no Discount\n");
     	for(i=0;i<10;i++){
		printf("%c",196);
		 }
     	printf("\n");
	 	 printf("We Have This For You: \n");
		 printf("Kid's Shoes \n");
		 printf("Salwar Set\n");
		 printf("Chiffon Dress \n");
		 for(i=0;i<10;i++){
		printf("%c",196);
	}
	printf("Enter your product:");
        scanf("%s", item);
        for(y=1;y<24;y++){
		printf("%c ",260);
		printf("     ");
		}
        printf("Your Selected Item Is: %s\n",item);
		 printf("Your Total Amount Will Be: %d",product);
	 }else if(range4){
	 	for(i=0;i<10;i++){
		printf("%c",196);
		 }
	 	printf("Sorry You Will have no Discount\n");
	 	for(i=0;i<10;i++){
		printf("%c",196);
		 }
	 	printf("\n");
	 	 printf("We Have This For You: \n");
		 printf("Kid's Wear Set\n");
		 printf("Denim \n");
		 printf("Women's Footwear\n");
		 for(i=0;i<10;i++){
		printf("%c",196);
	}
	printf("Enter your product:");
        scanf("%s", item);
        for(y=1;y<24;y++){
		printf("%c ",260);
		printf("     ");
		}
        printf("Your Selected Item Is: %s\n",item);
		 printf("Your Total Amount Will Be: %d",product);
	 }else if(range5){
	 	for(i=0;i<10;i++){
		printf("%c",196);
		 }
	 	printf("Sorry You Will have no Discount\n");
	 	printf("\n");
	 	 printf("We Have This For You: \n");
		 printf("Saaree \n");
		 printf("Men's Festive Wear\n");
		 printf("Men's Footwear \n");    
		 for(i=0;i<10;i++){
		printf("%c",196);
	}
	printf("Enter your product:");
        scanf("%s", item);
        for(y=1;y<24;y++){
		printf("%c ",260);
		printf("     ");
		}
        printf("Your Selected Item Is: %s\n",item);
		 printf("Your Total Amount Will Be: %d",product);
	 }else
	 {
		 printf("Not Present");
	 }
	 
 }
 }
 
	 
 
int main(){
	int i;
	int j;
    greeting();
	 deng();
	 
	 for(i=0;i<2;i++){
	for(j=0;j<=0;j++){
		printf("*");
	}
	printf("\n"); 
    }
	 select();
	 printf("\n");
	 for(i=0;i<80;i++){
		printf("%c",196);
	}
	return 0;
	}