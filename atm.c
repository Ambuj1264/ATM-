#include<stdio.h>
#include <conio.h>

int main (){
    
	int i;
	for(i=0;i<=50;i++){
	
	char ch;
    printf("\n-----------------------------------------welcome to punjab national bank----------------------------------------------\n Please write your four digit password: ");
    int p;
    scanf("%d",&p);
if(p==5000){

    int s=5000;
    int c=6000;
        
    
    printf("\n------------------------------------------Enter your choise ---------------------------------\nsaving or current ");
   scanf("%c",&ch);
    scanf("%c",&ch);
    switch (ch)
    for(i=0;i<=50;i++){
	
    {
    case 's':
            printf("\n------------------------------- Welcome sir this is your saving account-------------------------------- \nsir please choose withdrawal money OR balance enquiry ");
            char  mh;
            
            scanf("%c",&mh);
             int m;
             int av_b;
             char w;
          
                 printf("\nwithdraw OR balance enquiry:  ");
                 scanf("%c",&mh);
            switch (mh)
            
			
            {
             for(i=0;i<=50;i++){
               
            case 'w':
            printf("how much money you want :");
            scanf("%d",&m);
                    av_b=s-m;
                    if(m<=s){
                    printf("balance avilable\t%d",av_b);
                    }
                    else
                    {
                        printf("YOU INPUT MORE THAN YOUR MONEY PLEASE ENTER THE RIGHT INPUT NEXT TIME ");
                    }
                break;
            
            case 'b':
             printf("\nyour balance is :%d",s);
            
                break;
                default :
                printf("write value in 'w'OR 'b'");
            
                break;
            }
			}


        break;
        case 'c' :


            printf("\n------------------------------------------------ Welcome sir this is your CURRENT account \tsir please choose withdrawal money OR balance enquiry ------------------------------");
            char  ch;
            
            scanf("%c",&ch);
           
             
             
          
                 printf("\nwithdraw OR balance enquiry:  ");
                 scanf("%c",&ch);
            switch (ch)
            {
             
               
            case 'w':
            printf("how much money you want :");
            scanf("%d",&m);
                    av_b=c-m;
                    if(m<=c){
                    printf("balance avilable\t%d",av_b);
                    }
                    else
                    {
                        printf("YOU INPUT MORE THAN YOUR MONEY PLEASE ENTER THE RIGHT INPUT NEXT TIME ");
                    }
                break;
            
            case 'b':
             printf("\nyour balance is :%d",c);
            
                break;
                default :
                printf("\nwrite the value in 'w' OR 'b'");
            
                break;
            }

    
    default:
    
            printf("\nwrite the value in 's' OR 'c'");

        break;
    }
}
}
else 
{
	printf("Sorry this is wrong password");
}
}
}
