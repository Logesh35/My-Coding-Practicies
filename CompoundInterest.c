int main()

{
   float p;
   
   float r;
   
   float n;
   
   float i;
   
   float F;
   
    
   printf("Enter the principal amount:");
   
   scanf("%f",&p);
   
   printf("\n Enter the rate of interest:");
   
   scanf("%f",&r);
   
   printf("\n Enter the number of years of investment:");
   
   scanf("%f",&n);
	
   i = r/100;
   
   F = p * pow(1+i,n);
   
   printf("\n The compound interest is %.4f",F);
	
	
	

}

