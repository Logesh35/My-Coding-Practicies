int main()
{

   char in[80] = "thus is 007 from *Russia";
   
   int ac,dc,wsc,oc;
   
   ac = dc = wsc = oc = 0;
   
   char c;
   
   int i;
   
   for(i=0; in[i]!='\0';i++)
   
   {
   
   
      c=in[i];
	  
	  if((c>='A' && c<='Z') || (c>='a' && c<='z'))
	  
	    ac++;
	      
	  else if(c>='0' && c<='9')
	  
	    dc++;
		
		
      else if(c=' ' || c=='\t' || c=='\n')
	  
	      wsc++;
		  
	  else oc++;
	}	    
		   
		   
	printf("\n char vount=%d",ac);
	
	 printf("\n digit=%d",dc);
	 
	 printf("\n white space=%d",wsc);
	 
	 printf("\n others=%d",oc);	      	    
	  
   }
   
   
   
   
   

