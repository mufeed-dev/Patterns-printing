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
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         l=1;
//         for(int j=0;j<n;j++){
//             if(i+j>=n)
//                 printf("%d ",l++);
//             else
//                 printf("%d ",i+j+1);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Right-Aligned Letter Triangle
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<i+1;j++){
//             printf("%c ",'A'+i);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Ascending Alphabetic Triangle
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<i+1;j++){
//             printf("%c ",'A'+j);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Sequential Letter Triangle
// #include<stdio.h>
// int main(){
//     int n, l=0;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<i+1;j++){
//             printf("%c ",'A'+l++);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// N-star pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n;j++){
//             if(j==0||j==n-1||i==j)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Z-star pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n;j++){
//             if(i==0||n==i+j+1||i==n-1)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// X-star pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n;j++){
//             if((j==i)||(n==j+i+1))
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// X-Shaped Letter Mirror
// #include<stdio.h>
// int main(){
//     int n, l;
//     char str[20];
//     printf("Enter the String: ");
//     scanf("%s",&str);
//     for(l=0; str[l]; l++);
//     n=l;
//     for(int i=0; i<l; i++){
//         for(int j=0;j<l;j++){
//             if(i==j){
//                 printf("%c ",str[i]);
//                 if(l/2==i)
//                 n--;
//             }
//             else if(l==i+j+1) {
//                 if(i!=j) {
//                     printf("%c ",str[n-1]);
//                     n--;
//                 }
//                 else n--;
//             }
//             else printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// Pascal pattern-pyramid
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int s=0; s<n-i-1; s++)
//             printf(" ");
//         for(int j=0;j<i+1;j++){
//             if(j==0)
//                 l=1;
//             else
//                 l = l*(i-j+1)/j;
//             printf("%d ",l);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// hollow pyramid/triangle
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int s=0; s<n-i-1; s++)
//             printf(" ");
//         for(int j=0;j<i+1;j++){
//             if(j==0||i==n-1||j==i)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// hollow diamond
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=-n; i<=n; i++){
//         if(i<0) l = -i;
//         else l = i;
//         for(int s=0;s<l;s++)
//             printf("  ");
//         for(int j=0;j<2*(n-l)+1;j++){
//             if(j==0||j==2*(n-l)) printf("* ");
//             else printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// concentric pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=1; i<=2*n-1; i++){
//         l=n;
//         if(i<=n) {
//             for(int j=1;j<=2*n-1;j++){
//                 printf("%d ",l);
//                 if(i>j) l--;
//                 if((i+j)>=(2*n)) l++;
//             }
//         }
//         else {
//             for(int j=1;j<=2*n-1;j++){
//                 printf("%d ",l);
//                 if((i+j)<(2*n)) l--;
//                 if(i<=j) l++;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }




// snake pattern
#include<stdio.h>
int main(){
    int n, l=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i%2==0){
                l++;
                printf("%d ",l);
            }
            else
                printf("%d ",l--);
        }
        l+=n;
        printf("\n");
    }
    return 0;
}
