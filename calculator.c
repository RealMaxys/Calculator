#include <math.h>
#include <stdio.h>

int main(void){

	double a, b, c;
	int a1, b1;
	char sym;
	
	printf("Incert smth for example 1 + 1, code supports: + - / : ^ * x\n");
	scanf("%lf %c %lf", &a, &sym, &b);
	a1 = a;
	b1 = b;
	
	
	switch(sym){

		case '+':
		printf("%.2lf", c = a + b);
		break;

		case '-':
		printf("%.2lf", c = a - b);
		break;

		case '/':
            	switch(a1) {
                	case 0:
			printf("ERROR!");
			break;

				default:
				switch (b1){

					case 0:	
        				printf("ERROR!");
					break;

						default:
						printf("%.2lf", c = a / b);
						break;

					}

				break;
			}

		break;
                    
 			
		case ':':
            	switch(a1) {
                	case 0:
			printf("ERROR!");
			break;

				default:
				switch (b1){

					case 0:	
        				printf("ERROR!");
					break;

						default:
						printf("%.2lf", c = a / b);
						break;

					}

				break;
			}

		break;
 
                    
           

		case '*':
		printf("%.2lf", c = a * b);
		break;
            
		case 'x':
		printf("%.2lf", c = a * b);
		break;

		case '^':
		printf("%.2lf", c = pow(a, b));
		break;
            

        default:
        printf("ERROR!");
        break;
	}

return 0;

}
