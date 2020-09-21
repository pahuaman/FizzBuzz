#include <stdio.h>

/*FizzBuzz imprimir los numeros de 1 - 100, por cada 
número divisible entre 3 cambiarlo por la palabra "Fizz", 
por cada número divisible entre 5 cambiarlo por la palabra "Buzz"
y por cada número que sea dividible por ambos numeros cambiarlo por
la palabra "FizzBuzz"*/ 

void Fizz(int n){
	n = 0;
	char f[] = "Fizz";
	printf("%s\n", f);
}//Fizz

void Buzz(int n){
	n = 0;
	char b[] = "Buzz";
	printf("%s\n", b);
}//Buzz

void FizzBuzz(int n){
	n = 0;
	char fb[] = "FizzBuzz";
	printf("%s\n", fb);
}//FizzBuzz

int main()
{
	
	int i = 1;
	
	for(i=1; i<=100; i++){
		if(i % 15 == 0){
			FizzBuzz(i);
		}//if
		else if(i % 5 == 0){
			Buzz(i);	
		}//else-if
		else if(i % 3 == 0){
			Fizz(i);
		}//else-if
		else{
			printf("%d\n", i);
		}//else
	}//for
		
	
	system("pause");
	return 0;
	
}//main
