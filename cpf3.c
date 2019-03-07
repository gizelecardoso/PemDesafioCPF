#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define true  1
#define false 0

int main(){
	
	long long cpf;
	long long ver, elevado, validacao = 0, val1, val2 = 0, val3;
	int x;
	float resto;
	
	printf("Digite seu CPF: \n");
	scanf("%lld", &cpf);
	
	for(x=10; x>=0; x=x-1){
		
		elevado = (pow(10,x));	
		ver = (cpf/elevado);
		cpf = cpf - (ver*(pow(10,x)));
		
		if(x>1){
			validacao = validacao + (ver*x);
		}
		
		if(x>0){
			val2 = val2 + (ver*(x+1));

		}

		if(x==1){
			val1 = (validacao*10)%11;
			if(val1 == 10){
				resto = 0;
			}if(val1 == ver){
				val1 == true;
			}else {
				printf("CPF INVALIDO");
				break;
			}
		}
		
		if(x==0){
			val3 = (val2*10)%11;
			if(val3 == ver){
				printf("CPF VALIDO!");
			} else{
				printf("CPF INVALIDO!");
			}
		}
		
	}
	
	return 0;
}
