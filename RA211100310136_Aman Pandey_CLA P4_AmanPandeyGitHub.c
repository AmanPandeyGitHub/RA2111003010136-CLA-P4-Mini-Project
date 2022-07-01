//Mini Project 13. Electricity Billing Application
//------------------------------------------------
//Importing standard library
#include <stdio.h>
//Defining structure variables
//1. For Set Values
struct BasicInfo
{
  int n;
  float ucost,cust;
}Basic;
//2. For Customer Specific Values
struct CustomerInfo
{
  int unit;
  char name[50];
  float base,total;
}User;
//Taking Input on set values
void TakeInfo()
{
  printf("-----\nEnter the cost per unit: ");
  scanf("%f", &Basic.ucost);
  printf("Enter the customer charge: ");
  scanf("%f", &Basic.cust);
  printf("Enter the number of people: ");
  scanf("%d", &Basic.n);
}
//Calculating basic Bill via unit_consumed*cost_per_unit
float baseCalc(int a,float b)
{
  float c=a*b;
  return c;
}
//Calculating total bill via Basic_Bill+Customer_Charge
float totalCalc(float x,float y)
{
  float z=x+y;
  return z;
}
//Taking customer data and calculating bill
void BillCalc()
{
  printf("-----\nName: ");
  scanf(" %[^\n]s", User.name);
  printf("Units consumed: ");
  scanf("%d", &User.unit);
  User.base = baseCalc(User.unit,Basic.ucost);
  User.total = totalCalc(User.base,Basic.cust);
}
//Printing the bill
void PrintBill()
{
  printf("-----\n");
  printf("B I L L\n\n");
  printf("Name               : %s\n",    User.name);
  printf("Units Consumed     : %d\n",    User.unit);
  printf("Consumption charge : %.2f\n",  User.base);
  printf("Customer charge    : %.2f\n\n",Basic.cust);
  printf("Total charge       : %.2f\n",  User.total);
}
//Main Function
int main()
{
  TakeInfo();          //Taking Set Info
  while(Basic.n--)     //Looping for Customer Count
    {
      BillCalc();      //Taking Customer Info
      PrintBill();     //Printing Customer Info
    }
  printf("-----\n");
  return 0;
}
//RA2111003010136
//Aman Pandey
//CSE B-1