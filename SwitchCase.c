int main()

{

   float salary;
   
   char grade;
   
   
  printf("\n Enter Grade:");
  
  grade = getchar();
  
  printf("\n Enter Salary:");
  
  scanf("%f",&salary);
  
  
  
  switch(grade)
  
  {
  
    case 'A':
	
   	   salary *=1.25;
	
    	break;
	
	case 'B':
	
	   salary *=1.22;
	
    	break;
	
	case 'C':
	
	   salary *= 1.18;
	   break;
	
	default:
	
	salary = salary * 1.15;
	
	
	}
	
	
	printf("\n Revised Salary %.2f", salary);
	
	
	}
	
	
   
   

   

