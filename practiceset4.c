// Write a program to print multiplication table of a given number n
// #include<stdio.h>

// int main(){
//     int n,i;
//     printf("Enter the intger:");
//     scanf("%d",&n);
//     for(i=1;i<11;++i){
//         printf("%d * %d = %d\n",n,i,n*i);
//     }
//     return 0;
// }
// Reverse the multiplication of table
// #include<stdio.h>

// int main(){
//     for(int i=10;i;--i)
//     {
//         printf("10 x %d = %d\n",i,10*i);
//     }
//     return 0;
// }

//
// #include<stdio.h>

// int main(){
//     int i,sum=0,n=10;
//     scanf("%d",&i);
//     for(i=0;i<=n;i++){
//         sum+=i;
//     }
//     printf("The value of sum(1 to 10)is %d",sum);
//     return 0;
// }


// #include<stdio.h>

// int main()
// {int n,i;
// printf("Enter an integer:");
// scanf("%d",&n);
//         for(i=1;i<=10;++i)
//         {
//                  printf("%d x %d = %d\n",n,i,n*i);
//         }    
//     return 0;
// }

#include<stdio.h>
int main(){
    int i=0,n=7,factorial=1;
    
    for(i=1;1<=n;i++)
    {
        factorial *=i;
    }
    printf("The value of factorial %d is %d",n, factorial);
    return 0;
}