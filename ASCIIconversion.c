int main()
{

  char s[80];
  
  char option;
  
  int i=0;
  
  
  do{
  printf("\n Enter the String: ");
  
  gets(s);
  
  scanf("%c",&option);
  
  while(s[i])
  {
  
  
    printf("\n%c  %d",s[i],s[i]);
	
	i++;
	}
	
	printf("\n Do u want to countiune to calculate:");
	
	option=getchar();
	
	}while (option=='Y' || option=='y');
	
	
	}

