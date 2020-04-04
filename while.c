int main()

{
   
   
   long n,sum;
   
   
    char option;
   
   
   do{
   
      printf("\n Enter a number:");
	  
	  scanf("%d%c",&n,&option);
	  
	  sum=0;
   
   
   while(n>0)
    
	{
	  
	  sum = sum+n%10;
	  
	  n/=10;
	  
	  
	  }
	  
	  
	  printf("\n Sum ofDigits :%d",sum);
	  
	  
	  printf("\n Do you want to continue:(Y/N)?");
	  
	  option=getchar();
	  
	  
	  }
	  
	  while(option=='Y' || option=='y');
	  
	  }
	  
  

