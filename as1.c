#include<stdio.h>

void main()
{
char name[100], address[100], bill_month[100];
int cust_Id, pincode, bill_amt;

printf("Enter your name :");
scanf("%s",name);
printf("Enter your address :");
scanf("%s",address);
printf("Enter customer ID :");
scanf("%d",&cust_Id);
printf("Enter Pin Code :");
scanf("%d",&pincode);
printf("Enter Bill Amount :");
scanf("%d",&bill_amt);
printf("Enter month of bill :");
scanf("%s",bill_month);

printf("\nElectric Bill details:- \n Name :%s \n Address :%s \n Customer ID :%d \n Pin Code :%d \n Bill Amount :%d \n Month of bill :%s",name,address,cust_Id,pincode,bill_amt,bill_month);
}
