char ucase(char c);

int main()

{

  char c;
  
  printf("\n Enter a String:\n");
  
  while((c=getchar())!='\n');
  
  {
  
    printf("%c", ucase(c));
  
  }
  
}

char ucase(char c)
{
   if(c>='a' && c<='z')
   
    return c-32;
	
	else return c;
	
	}

