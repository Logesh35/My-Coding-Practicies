int main()
{


  int i;
  
  int smallest,temp;
  
  int n;
  
  
  printf("\n Enter thre numbers in a single line.");
  
  printf("\n First number should indicate th count of numbers.\n\n");
  
  
  scanf("%d",&n);
  
  for(i=1;i<=n;i++)
  
  {
  
    scanf("%d",&temp);
	
	if(i==1 || smallest>temp)
	
	smallest = temp;
	
	
	}
	
	printf("\n Smallnujmber is: %d",smallest);
	
	}
	
	
	
	
	
  
  

