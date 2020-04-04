int main()

{
   
   int n;
   
   float sum=0;
   
   float in;
   
   int i;
   
   printf("\nHow many numbers");
   
   scanf("%d", &n);
   
   printf("\nEnter the numbers one by one:");
   
   for(i=1; i<=n; i++)
   {
      
	  scanf("%f",&in);
	  sum= sum+in;
   
   }
   
   printf("\n Sum=%f Average=%f",sum,sum/n);
}

