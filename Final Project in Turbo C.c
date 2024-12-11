#include<stdio.h>
#include<conio.h>

void performConversion(int choice);

void main(){

    int choice;
    char *menu[] = {"Fahrenheit - Celcius", "Meters - Kilometers", "Inches - Feet", "Milimeters - Centimeters" , "Pounds - Kilograms"};
    int num_menu = sizeof(menu) / sizeof(menu[0]);
    
    do{
     printf(" ---- CONVERSION MENU ---- \n");
     for (int i =0; i<num_menu; i++){
        printf("[%d] %s\n", i + 1, menu[i]);
        }
        printf("--------------------------\n");
        printf("Enter Your Choice Here (1-5): ");
        scanf("%d", &choice);
        
        if (choice >= 1 && choice <=5){
             performConversion(choice);
        }else{
             printf("Invalid Input, Please Try Again");
             }
             printf("\n-------------");
             printf("\nDo you want to perform another conversion? (y/n): ");
             getchar();
    }while(getchar() == 'y');          

   getch();
}

void performConversion(int choice){
          int ch;
          float f, c, m, km, in, ft, mm, cm, lb, kg;
          
          switch(choice){
             case 1: 
                printf("--------------------------\n");
                printf("WHAT CONVERSION DO YOUR PREFER?: ");
                printf("\n1. °F - °C");
                printf("\n2. °C - °F");
                printf("\nEnter your choice here (1-2): ");
                scanf("%d", &ch);
                    if(ch == 1){
                       printf("\nEnter Fahrenheit Value: ");
                       scanf("%f", &f);
                       printf("Converted to Celcius: %.2f", f - 32 * 5/9);
                    }else if(ch == 2){
                       printf("\nEnter Celcius Value: ");
                       scanf("%f", &c);
                       printf("Converted to Fahrenheit: %.2f", c * 9/5 + 32);
                       }else{
                          printf("Invalid Input!");
                          }
                       break;
             case 2:
                printf("--------------------------\n");
                printf("WHAT CONVERSION DO YOUR PREFER?: ");
                printf("\n1. M - KM");
                printf("\n2. KM - M");
                printf("\nEnter your choice here (1-2): ");
                scanf("%d", &ch);
                    if(ch == 1){
                       printf("\nEnter Meters Value: ");
                       scanf("%f", &m);
                       printf("Converted to Kilometers: %.2f", m / 1000);
                    }else if(ch == 2){
                       printf("\nEnter Kilometers Value: ");
                       scanf("%f", &km);
                       printf("Converted to Meters: %.2f", km * 1000);
                       }else{
                         printf("Invalid input!");
                         }
                       break; 
             case 3:
                printf("--------------------------\n");
                printf("WHAT CONVERSION DO YOUR PREFER?: ");
                printf("\n1. Inches - Feet");
                printf("\n2. Feet - Inches");
                printf("\nEnter your choice here (1-2): ");
                scanf("%d", &ch);
                    if(ch == 1){
                       printf("\nEnter Inches Value: ");
                       scanf("%f", &in);
                       printf("Converted to Feet: %.2f", in / 12);
                    }else if(ch == 2){
                       printf("\nEnter Feet Value: ");
                       scanf("%f", &ft);
                       printf("Converted to Inches: %.2f", ft * 12);
                       }else{
                         printf("Invalid input!");
                         }
                       break; 
             case 4:
                printf("--------------------------\n");
                printf("WHAT CONVERSION DO YOUR PREFER?: ");
                printf("\n1. mm - cm");
                printf("\n2. cm - mm");
                printf("\nEnter your choice here (1-2): ");
                scanf("%d", &ch);
                    if(ch == 1){
                       printf("\nEnter Milimeters Value: ");
                       scanf("%f", &mm);
                       printf("Converted to Centimeters: %.2f", mm / 10);
                    }else if(ch == 2){
                       printf("\nEnter Centimeters Value: ");
                       scanf("%f", &cm);
                       printf("Converted to Milimeters: %.2f", cm * 10);
                       }else{
                         printf("Invalid input!");
                         }
                       break;  
             case 5 :
                printf("--------------------------\n");
                printf("WHAT CONVERSION DO YOUR PREFER?: ");
                printf("\n1. Pounds - Kilograms");
                printf("\n2. Kilograms - Pounds");
                printf("\nEnter your choice here (1-2): ");
                scanf("%d", &ch);
                    if(ch == 1){
                       printf("\nEnter Pound Value: ");
                       scanf("%f", &lb);
                       printf("Converted to Kilograms: %.2f", lb / 2.20462);
                    }else if(ch == 2){
                       printf("\nEnter Kilograms Value: ");
                       scanf("%f", &kg);
                       printf("Converted to Pounds: %.2f", kg * 2.20462);
                       }else{
                         printf("Invalid input!");
                         }
                       break;          
   }
}