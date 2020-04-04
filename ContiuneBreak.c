int main()

{

   float r;
   float area;
   
   
   do{
   
   
      printf("\n Enter Radius :(100 to quit) ?");
	  
	  scanf("%f",&r);
	  
	  
	  if(r<1)
	  
	  
	 {
	    
		
    	printf("\n Invalid input");
		continue;
	 
	 }
	 
	 
	 if (r==100)
	 
	 break;
	 
	 area = (22.0/7) * r * r;
	 
	 printf("\n Area=%f",area);
	 
	 
	 }while(r>=1 || r<=99);
	 
	 
	 }
	 
	 

