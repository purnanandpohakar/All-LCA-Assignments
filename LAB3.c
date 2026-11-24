#include<stdio.h>
int main(){
int choice;
float N1,N2;
float result;
printf("=====BASIC ARITHMETIC CALCULATOR=====\n");
printf("1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("Enter your choice(1-4)");
scanf("%d",&choice);
printf("Enter first number:");
scanf("%f",&N1);
printf("Enter second number:");
scanf("%f",&N2);
switch(choice){
case 1:
result=N1+N2;
printf("Result:%.2f+%.2f=%.2f\n",N1,N2,result);
break;
case 2:
result=N1-N2;
printf("Result:%.2f-%.2f=%.2f\n",N1,N2,result);
break;
case 3:
result=N1*N2;
printf("Result:%.2f*%.2f=%.2f\n",N1,N2,result);
break;
case 4:
if (N2!=0){
result=N1/N2;
printf("Result:%.2f/%.2f=%.2f\n",N1,N2,result);
}
else{
printf("Error:Division by zero is not allowed!\n");
}
break;
default:
printf("Invalid choice Please run program again.\n");
}
return 0;
}
