int main()
{
   
   
   char employeename[100];
   
   float bs;
   
   float da=0;
   
   
   printf("Enter the employee name:");
   
   gets(employeename);
   
   printf("\n Enter the basic salary:");
   
   scanf("%f",&bs);
   
   
   if(bs<2500)
   
   
    {
	   
	 
	   
	   da = bs * 0.5;
	   
	   
	   printf("\n below 2500 salary is %f",bs+da);
	   
    }
	
	else
	{
	
	   printf("\n %f",bs+da);
	
	}

  

}

