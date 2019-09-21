#include<stdio.h>



int main()

	{	


		int a,b,usr;	  /*dilosh metavlhton*/	
				
				
					

	    printf("welcome user please provide two numbers: \n");


		scanf("%d",&a);
                                           /*zhtaei 2 arithmous apo ton xrhsth*/
		scanf("%d",&b);                  

	

	



//////////////////////////////////////////////////////////////////////////////////////////////////////////////

			/*typoi prapseon*/

		
		printf("Choose method of calculation (1+ , 2- , 3* , 4/): \n");





/*gia kathe praksh yparxei arithmos exa.(Ean o user epileksei 1 tha ginei prosthesi e.t.c)*/
		
		scanf("%d",&usr);


		
		if (usr==1) {

		   printf("the sum is: %d \n",a+b);
		
		
		}


		else if (usr==2) {

		   printf("The Sum is: %d \n",a-b);

		}



		
		else if (usr==3) {

		   printf("The Sum is: %d \n",a*b);

		}


		
		
		else if (usr==4) {

		   printf("The Sum is: %d \n",a/b);

		}





		return 0;

	}
