int main()
{
   
   float V,A,r;
   
   printf("Enter the radius r:");
  
   scanf("%f",&r);
   
   V = 4 * (22/7.0) * pow(r,3) /3 ;
   
   A = 4 * (22/7.0) * r * r;
   
   printf("\n Volume=%.4f, Area=%.4f",V,A);

}

