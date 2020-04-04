int main()
{
 char s[80];
 
 int i;
 
 printf("\nEnter the String:\n");
 
 gets(s);
 
 for(i=0;s[i]!='\0';i++)
 
 s[i]--;
 
 printf("\nThe Encrypted String is\n%s",s);
 
 }

