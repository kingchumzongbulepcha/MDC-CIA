#include <stdio.h>

int main() {
  char i;
  char category;
  int tempChoice;
  int currencyChoice;
  int inputF; 
  int inputC; 
  int inputK;
  int inputINRtoUSD; 
  int inputINRtoKRW; 
  int inputINRtoEURO; 
  int inputINRtoRUB;
  int inputINRtoKWD;
  int inputINRtoJPY;
  int fahrenheitTocel; 
  int celToFahrenheit;
  int KelvinTocel; 
  float INRtoUSD ; 
  float INRtoKRW; 
  float INRtoEURO; 
  float INRtoRUB;
  float INRtoKWD;
  float INRtoJPY;
  printf("Welcome to a Unit Converter for temperature and currency \n");
  printf("press Y if you wish to exit to continue press N\n");
  scanf("%c",&i);
  if(i == 'Y'||i =='y');{
  printf("To use the Temperature convertor enter 'T'\nTo use the Currency convertor enter 'C'\n");
  scanf("%c",&category);
  
  if(category == 'T'||category == 't'){
      printf("Welcome to the Temperature Converter \n");
      printf("Here is a list of conversions to choose from: \n");
      printf("Enter 1 for Fahrenheit to Celsius. \n");
      printf("Enter 2 for Celsius to Fahrenheit. \n");
      printf("Enter 3 for kelvin to Celcius. \n");
      scanf("%d",&tempChoice);
      if(tempChoice == 1){
          printf("Please enter the Fahrenheit degree: \n");
          scanf("%d",&inputF);
          fahrenheitTocel =  ((inputF-32) * (5.0/9.0));
          printf("Celcius: %d",fahrenheitTocel);
      }
      else if(tempChoice == 2){
        printf("Please enter the Celcius degree: \n");
        scanf("%d",&inputC);
        celToFahrenheit = ((9.0/5.0)*inputC + 32);
        printf("Fahrenheit: %d",celToFahrenheit);
      }
      else if(tempChoice == 3){
        printf("Please enter the Kelvin degree: \n");
        scanf("%d",&inputK);
        KelvinTocel = inputK-273;
        printf("Celcius: %d",KelvinTocel);
    }
      else
        printf("Please enter the correct choice. \n");
  }
  
  else if(category == 'C' || category == 'c') {
      printf("Welcome to the Currency Converter \n");
      printf("Here is a list of conversions to choose from: \n");
      printf("Enter 1 for Indian Rupees to United States Dollar. \n");
      printf("Enter 2 for Indian Rupees to Euro. \n");
      printf("Enter 3 for Indian Rupees to Korean Won. \n");
      printf("Enter 4 for Indian Rupees to Russian Ruble. \n");
      printf("Enter 5 for Indian Rupees to Kuwaiti Dinar. \n");
      printf("Enter 6 for Indian Rupees to Japanese Yen. \n");
      scanf("%d",&currencyChoice);
      if(currencyChoice == 1){
          printf("Please enter the INR amount: \n");
          scanf("%d",&inputINRtoUSD);
          INRtoUSD = inputINRtoUSD / 83.12;
          printf("USD: %.2f",INRtoUSD);
      }
      else if(currencyChoice == 2){
          printf("Please enter the INR amount: \n");
          scanf("%d",&inputINRtoEURO);
          INRtoEURO = inputINRtoEURO / 88.71;
          printf("EUR: %.2f",INRtoEURO);
      }
      else if(currencyChoice == 3) {
        printf("Please enter the INR amount: \n");
        scanf("%d",&inputINRtoKRW);
        INRtoKRW = inputINRtoKRW * 16.25;
        printf("KRW: %.2f",INRtoKRW);
      }
      else if(currencyChoice == 4) {
        printf("Please enter the INR amount: \n");
        scanf("%d",&inputINRtoRUB);
        INRtoRUB = inputINRtoRUB * 1.13;
        printf("RUB: %.2f",INRtoRUB);
      }
       else if(currencyChoice == 5) {
        printf("Please enter the INR amount: \n");
        scanf("%d",&inputINRtoKWD);
        INRtoKWD = inputINRtoKWD /269.09;
        printf("KWD: %.2f",INRtoKWD);
    }
     else if(currencyChoice == 6) {
        printf("Please enter the INR amount: \n");
        scanf("%d",&inputINRtoJPY);
        INRtoJPY = inputINRtoJPY *1.802;
        printf("JPY: %.2f",INRtoJPY);
    }
      else
        printf("Please enter correct choice. \n");
   }
   else if(i =='N'||i =='n'){
   	 printf("thank you for using the convertor");
   }
}
  return 0;
}
