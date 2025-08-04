//square star pattern

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n;j++)
//         printf("* ");
//         printf("\n");
//     }
//     return 0;
// }

// right Triangle
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<i+1;j++)
//         printf("* ");
//         printf("\n");
//     }
//     return 0;
// }

// inverted half
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n-i;j++)
//         printf("* ");
//         printf("\n");
//     }
//     return 0;
// }

// hollow square
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n;j++){
//             if(i==0||i==n-1||j==0||j==n-1)
//             printf("* ");
//             else printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// pyramid star
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n+i;j++){
//             if(j<n-i-1)
//                 printf("  ");
//             else
//                 printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// inverted pyramid
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<2*n-i-1;j++){
//             if(j<i)
//                 printf("  ");
//             else
//                 printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// mirror-image pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=-n; i<=n; i++){
//         if(i<0) l = -i;
//         else l = i;
//         for(int j=0;j<n+l+1;j++){
//             if(j<n-l) printf("  ");
//             else
//                 printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// left arrow pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=-n; i<=n; i++){
//         if(i<0) l = -i;
//         else l = i;
//         for(int j=0;j<l+1;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// right arrow pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=-n; i<=n; i++){
//         if(i<0) l = -i;
//         else l = i;
//         for(int j=0;j<n+1;j++){
//             if(j<n-l)
//                 printf("  ");
//             else
//                 printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// diamond star pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=-n; i<=n; i++){
//         if(i<0) l = -i;
//         else l = i;
//         for(int j=0;j<2*n-l+1;j++){
//             if(j<l)
//                 printf("  ");
//             else
//                 printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// down-arrow pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<=n; i++){
//         for(int j=-n;j<=n;j++){
//             if((-n+i)<j&&j<(n-i))
//                 printf("  ");
//             else
//                 printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// up-arrow pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<=n; i++){
//         for(int j=-n;j<=n;j++){
//             if(-i<j&&j<i)
//                 printf("  ");
//             else
//                 printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// inverted-mirror-right-triangle
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n;j++){
//             if(j<i)
//                 printf("  ");
//             else
//                 printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// mirror-right-triangle
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n;j++){
//             if(j<n-i-1)
//                 printf("  ");
//             else
//                 printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// 1 2 3 4 5
// 2 3 4 5 1
// 3 4 5 1 2
// 4 5 1 2 3
// 5 1 2 3 4
#include<stdio.h>
int main(){
    int n, l;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        l=1;
        for(int j=0;j<n;j++){
            if(i+j>=n)
                printf("%d ",l++);
            else
                printf("%d ",i+j+1);
        }
        printf("\n");
    }
    return 0;
}