#include<stdio.h>
struct location
{
  int l_key;
  char street[30];
  char city[30];
  char country[30];
}l[10];

struct product
{ 
  int p_key;
  char p_name[30];
  char pur_date[10];
  int cost_price;
  int sell_price;
}p[10];

struct sales_fact
{
  int l_key;
  int p_key;
  int unitsold;
  int amount;
}s[20];

int main()
{
  int n1,n2,n3,i,j,k;
  printf("\n********location table**********\n");
  printf("enter the no. of entries :");
  scanf("%d",&n1);
  for(i=0;i<n1;)
  {
    printf("\n enter the values for l[%d]",i+1);
    printf("\n enter the location key :");
    scanf("%d",&l[i].l_key);
    if(i>0)
    {
      for(j=0;j<i;j++)
      {
        if(l[i].l_key==l[j].l_key)
        {
          printf("\n duplicates are not allowed \n");
          break;
        }
      }
    }
    if(i==j || i==0)
    {
      printf("enter street:");
      scanf("%s",&l[i].street);
      printf("\n enter city:");
      scanf("%s",&l[i].city);
      printf("\n enter country:");
      scanf("%s",&l[i].country);
      i++;
    }
  }
  printf("\n*********production table*********\n");
  printf("enter no. of entries:");
  scanf("%d",&n2);
  for(i=0;i<n2;)
  {
    printf("\n enter values for p[%d]",i+1);
    printf("\n enter product key :");
    scanf("%d",&p[i].p_key);
    if(i>0)
    {
      for(j=0;j<i;j++)
      {
        if(p[i].p_key==p[j].p_key)
        {
          printf("\n duplicates are not allowed \n");
          break;
        }
      }
    }
    if(i==j || i==0)
    {
      printf("\n enter p_name ");
      scanf("%s",&p[i].p_name);
      printf("\n enter pur_date");
      scanf("%s",&p[i].pur_date);
      printf("\n enter cost_price");
      scanf("%d",&p[i].cost_price);
      printf("\n enter sell_price");
      scanf("%d",&p[i].sell_price);
      i++;
    }
  }
  printf("\n*************sales fact table************\n");
  printf("enter the no. of entries :");
  scanf("%d",&n3);
  for(i=0;i<n3;)
  {
    printf("\n enter values for s[%d]",i+1);
    printf("\n enter the location key");
    scanf("%d",&s[i].l_key);
    printf("\n enter the product key");
    scanf("%d",&s[i].p_key);
    for(j=0;j<n1;j++)
   {
    if(s[i].l_key==l[j].l_key)
    break;
   }
  for(k=0;k<n2;k++)
   {
    if(s[i].p_key==p[k].p_key)
    break;
   }
  if!(j<n1 && k<n2)
    printf("\n data must be present in d tables\n");
  else
  {
    printf("enter the no. of units sold");
    scanf("%d",&s[i].unitsold);
    s[i].amount=s[i].unit_sold*p[k].sell_price;
    i++;
  }
 }
  printf("\n\n the entries of location table is:\n");
  for(i=0;i<n1;i++)
  {
    printf("%d\t%s\t%s\t%s\n",l[i].l_key,l[i].street,l[i].city,l[i].state,l[i].country);
  }
  printf("\n entries of product table is:\n");
  for(i=0;i<n2;i++)
  {
    printf("%d\t%s\t%s\t%d\t%d\n",p[i].p_key,p[i].p_name,p[i].pur_date,p[i].cost_price,p[i].sell_price);
  }
  printf("\n the entries of fact_sales table:\n");
  for(i=0;i<n3;i++)
  {
    printf("%d\t%d\t%d\t%d\n",s[i].l_key,s[i].p_key,s[i].unitsold,s[i].amount);
  }
  return 0;
}
 
}
