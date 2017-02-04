#include <stdio.h>
// int main()
// {
// 	int number; // an int
// 	int* int_ptr; // a pointer to an int

// 	int_ptr = &number;
// 	number = 5;

// 	printf("%d %d\n",number, *int_ptr);

// 	*int_ptr = 6;
// 	printf("%d %d\n",number, *int_ptr);

// 	number = 7;
// 	printf("%d %d\n",number, *int_ptr);

// 	return 0;
// }
// void swap(int x,int y){
// 	int temp=x;
// 	x=y;
// 	y=temp;
// }

// void good_swqp(int *xp, int *yp){
// 	int temp = *xp; //read the value pointed to by xp
// 	*xp = *yp;
// 	*yp = temp;
// }

// int main()
// {
// 	int a = 3;
// 	int b = 5;

// 	printf("a=%d, b=%d\n",a,b);
// 	// swap(a,b);
// 	good_swqp(&a,&b);
// 	printf("a=%d, b=%d\n",a,b);
// }
// int main()
// {

// 	int numbers[4] = {3,1,4,5};
// 	int* int_ptr = numbers;

// 	printf("%p %p\n",numbers,&numbers);
// 	printf("%d %d\n",numbers[0], *int_ptr);
// 	printf("%p %p %p\n",numbers,&numbers[1],&numbers[2]);
// 	printf("%p %p %p\n",int_ptr[0],int_ptr[1],int_ptr[2]); //wrong print out type
// 	printf("%d %d %d\n",int_ptr[0],int_ptr[1],int_ptr[2]);
// 	return 0;

// }

int main(){

int numbers[4] = {3,1,4,5};
int * int_ptr = numbers;// have 4 byte
double * db_ptr = 0x0; // have 8 byte

printf("%p\n",int_ptr);
printf("%p\n",int_ptr + 1);
printf("%p\n",int_ptr + 2);
printf("%p\n",int_ptr + 2048);

printf("%p\n",db_ptr);
printf("%p\n",db_ptr + 1);
printf("%p\n",db_ptr + 2);
printf("%p\n",db_ptr + 2048);
return 0;
}




















































