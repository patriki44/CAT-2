#include<stdio.h>

int main(){
	float hoursworked;
	float hourlywage;
	float grosspay;
	float taxes;
	float netpay;
	 
    const float overtimerate = 1.5;
    const float taxrat1 = 0.15;
    const float taxrate2 = 0.20;
    const float threshold = 600.0;
     
     printf("Ente hours worked in a week: ");
     scanf("%f",&hoursworked);
     
     printf("Enter hourly wage: ");
     scanf("%f", &hourlywage );
     
     if(hoursworked>40){
     	float regularhours = 40;
     	float overtimehours = hoursworked - regularhours;
     	grosspay = (regularhours*hourlywage) + (overtimehours * hourlywage*overtimerate);
     	
	 }else{
	 	grosspay = hoursworked * hourlywage;
	 }
	  
	  netpay = grosspay - taxes;
	  
	 
	  printf("gross Pay: $%.2f\n",grosspay);
	  printf("taxes: $%.2f\n",taxes);
	  printf("net pay: $%.2f\n",netpay);
	  
	  return 0;
	  

}

