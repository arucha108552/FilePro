#include <stdio.h>

// int main()
// {
//  unsigned char b[8] = {0x01, 0x23, 0x45, 0x67, 0x89, 0x1a, 0xbc, 0xde};
//  unsigned int *y = (unsigned int *) &b;

//  printf("start of b: %p\n", &b);
//  printf("locations of b[0] -- b[7]: ");
//  for (int i=0; i<8; i++)
//   printf(" %p", &b[i]);
//  printf("\n");

//  printf("locations of y[0], y[1]: %p %p\n", &y[0], &y[1]);

//  printf("values y[0], y[1]: %x %x\n", y[0], y[1]); // it printed reverse because of little Endian

// }

// int main(){
// 	unsigned char b[8] = {0x01,0x23,0x45,0x67,0x89,0x1a,0xbc,0xde};
// 	unsigned int *y = (unsigned int *) &b;
// 	printf("start of b: %p\n", &b);
// 	printf("location of b[0]==b[7]: ");
// 	for(int i = 0;i<8;i++)
// 		printf(" %p",&b[i]);
// 	printf("\n");

// 	printf("location of y[0], y[1]:%p %p\n",&y[0],&y[1]);

// 	printf("values y[0], y[1]: %x %x\n",y[0],y[1]);// print out reverse by little Endian and it come from the location of b[0]
// }

// int main(){
// 	int numbers[10];
// 	int numbers[10];

// 	int* int_ptr;

// 	int_ptr = numbers;
// 	numbers = numbers2; // don't know what to do in this line
// }


// int factorial(int n){
// 		int ans = 1;
// 		for(int i = 1;i <=n;i++){
// 			ans *= i;
// 		}
// 		return ans;
// 	}

// int main(){
// 	int n;
// 	scanf("%d",&n);

// 	int nfac = factorial(n);
// 	printf("factorial of %d = %d\n",n,nfac);
// }


// int main(){
// 	int mat[4][4];

// 	for(int i = 0;i < 4;i++){
// 		for(int j = 0;j<4;j++){
// 			printf(" %p ", &mat[i][j]);
// 		}

// 		printf("\n");
// 	}
// }


// void fun(int a)
// {
// 	printf("Value pf a is %d\n", a);
// }

// int main(){
// 	void (*fun_ptr)(int) = &fun;

// 	(*fun_ptr)(10);
// }


int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mult(int a,int b){return a*5;}

int main(){
	// int (*wit)(int,int) = &add;
	// int (*taro)(int,int) = &mult;

	int (*fun_ptr_arr[])(int,int) = {&add,&sub,&mult};
	int a = 5, b = 10;
	char* names[] = {"add","subtract","multiply"};

	for(int i = 0;i<3;i++)
		printf("%s: %d\n",names[i],(*fun_ptr_arr[i])(a,b));
		// printf("%d\n",(*fun_ptr_arr[i])(a,b));

}


