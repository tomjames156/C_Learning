#include <stdio.h>

int square(int num);

int square(int num){
    return num * num;
}

int factorial(int num);

// int factorial(int num){
//     if(num > 1){
//         return num * factorial(num - 1);
//     }else{
//         return 1;
//     }
// }

int fib(int num1, int num2, int len){
    if(len > 0){
        len--;
        int result = num1 + num2;
        printf("%d ", result);
        fib(num2, result, len);
        return result;
    }else{
        return 1;
    }
}

// void fave();

// void fave(){
//     printf("My favourite number is 1");
// }

// void fave(int a, int b);

// void fave(int a, int b){
//     printf("My favourite numbers are %d and %d", a, b);
// }

void fave(int num);

void fave(int num){
    printf("\nEnter a number from 1 to 3 to know a random fact about me or any other charcter to know my name\n=> ");

    scanf("%d", &num);

    switch(num){
        case 1:
            printf("My favourite programming language is Python");
            break;
        case 2:
            printf("My favourite movie is the Hunger games");
            break;
        case 3:
            printf("My favourite colour is green");
            break;
        default:
            printf("My name is Tomi");
            break;
    }

}


// #include <stdio.h>

int max();

int max(){
	int num1;
	int num2;
	int num3;
	
	printf("Enter three numbers to find the maximum among the three numbers");
	
	printf("Enter the first number\n=> ");
	scanf("%d", &num1);

	printf("Enter the second number\n=> ");
	scanf("%d", &num2);

	printf("Enter the third number\n=> ");
	scanf("%d", &num3);

	if(num1 >= num2 && num1 >= num3){
		return num1;
	}else if(num2 >= num1 && num2 >= num3){
		return num2;
	}else{
		return num3;
	}
}

void numbersInRange(int start, int stop);

void numbersInRange(int start, int stop){
	int num;
	printf("\nEven numbers from %d to %d:", start, stop);
	for(int num = start; num <= stop; num++){
		if(num % 2 == 0){
			printf(" %d", num);
		}
	}

	printf("\nOdd numbers from %d to %d:", start, stop);
	for(int num = start; num <= stop; num++){
		if(num % 2 == 1){
			printf(" %d", num);
		}
	}
}

void isPrime(int num);

int factorial(int num);

void fibonnaci(int num1, int num2, int length, int length2);

int main(){
    printf("%d", square(60));
    printf("%d", factorial(5));
    printf("\n\n");
    printf("1 3 ");
    fib(1, 3, 3);
    // fave(0);
    // printf("%d", max())
    fibonnaci(3, 5, 6, 6);
    isPrime(9);
    numbersInRange(1, 20);
    printf("\n%d", factorial(3));
    return 0;
}

void isPrime(int num){
    int i;
    int primeNum = 1;

    for(i = 0; i <= num / 2; i++){
        if(num % i == 0){
            primeNum = 0;
        }
    }

    if(!primeNum){
        printf("\n%d is not a prime number", num);
    }else{
        printf("\n%d is a prime number", num);
    }
}

int factorial(int num){
    if(num > 1){
        return num * factorial(num -1);
    }else{
        return 1;
    }
}

void fibonnaci(int num1, int num2, int length, int length2){
    int sum = num1 + num2;
    if(length == length2){
        printf("\n%d + %d", num1, num2);
    }
    if(length - 2 >= 1){
        length--;
        printf(" + %d", sum);
        fibonnaci(num2, sum, length, length2);
    }else{
        printf(".");
    }

}