#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	float gross_sal,a;
	scanf("%d\n",&n);
	while(n--)
	{  
	    float salary; 
	    float gross_salary,hra,DA;
	    scanf("%f\n",&a);
	    if(a<1500)
	    {
	        hra=(a*10)/100;
	        DA=a-hra;
	        gross_salary=hra+DA+a;
	        printf("%0.2f\n",gross_salary);
	    }
	    else
	    {
	        hra=500;
	        DA= (a*98)/100;
	        gross_salary=hra+a+DA;
	         printf("%0.2f\n",gross_salary);
	        
	    }
	}
	
	
	
	return 0;
}

