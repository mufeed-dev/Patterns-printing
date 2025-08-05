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
// #include<stdio.h>
// int main(){
//     int n, l=0;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             if(i%2==0){
//                 l++;
//                 printf("%d ",l);
//             }
//             else
//                 printf("%d ",l--);
//         }
//         l+=n;
//         printf("\n");
//     }
//     return 0;
// }



// inverted-pascal-pyramid
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int s=0; s<i; s++)
//             printf(" ");
//         for(int j=0;j<n-i;j++){
//             if(j==0)
//                 l=1;
//             else
//                 l = l*(n-i-j)/j;
//             printf("%d ",l);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// Diamond Number Cross
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the Number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n;j++){
//             if(i==j){
//                 if(n/2>=i)
//                 printf("%d ",n-i);
//                 else printf("%d ",i+1);
//             }
//             else if(n==i+j+1) {
//                 if(i<=n/2) 
//                     printf("%d ",i+1);
//                 else printf("%d ",j+1);
//             }
//             else printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// hollow diamond star covered
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the Number: ");
//     scanf("%d",&n);
//     for(int i=0; i<=n; i++){
//         for(int j=-n;j<=n;j++){
//             if(-i<j&&j<i)
//             printf("  ");
//             else
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for(int i=0; i<=n; i++){
//          for(int j=-n;j<=n;j++){
//              if((-n+i)<j&&j<(n-i))
//                  printf("  ");
//              else
//                  printf("* ");
//          }
//          printf("\n");
//      }
//     return 0;
// }



// Butterfly-pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the Number: ");
//     scanf("%d",&n);
//     for(int i=0; i<=n; i++){
//          for(int j=-n;j<=n;j++){
//              if((-n+i)<j&&j<(n-i))
//                  printf("  ");
//              else
//                  printf("* ");
//          }
//          printf("\n");
//      }
//     for(int i=0; i<=n; i++){
//         for(int j=-n;j<=n;j++){
//             if(-i<j&&j<i)
//             printf("  ");
//             else
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// Step-Pulse Number Formation
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the Number: ");
//     scanf("%d",&n);
//     for(int i =1; i<=n;i++){
//         for(int j=1;j<=i;j++){
//         for(int j=1;j<=2*i;j++)
//             printf("* ");
//         printf("\n");
//         }

//         if(i==n) break;
//         for(int j=0;j<3;j++)
//         printf("*\n");
//     }
//     return 0;
// }


// rhombus pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the Number: ");
//     scanf("%d",&n);
//     for(int i =0; i<n;i++){
//         for(int s=0;s<i;s++)
//             printf("  ");
//         for(int j=0;j<n;j++)
//             printf("* ");
//         printf("\n");
//     }
//     for(int i =0; i<n;i++){
//         for(int s=0;s<n-i-1;s++)
//             printf("  ");
//         for(int j=0;j<n;j++)
//             printf("* ");
//         printf("\n");
//     }
//     return 0;
// }


// Palindromic Number Pyramid
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the Number: ");
//     scanf("%d",&n);
//     for(int i =0; i<n;i++){
//         l=i+1;
//         for(int s=0;s<n-i-1;s++)
//             printf("  ");
//         for(int j=0;j<2*i+1;j++){
//             if(i>j)
//                 printf("%d ",l--);
//             else 
//                 printf("%d ",l++);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// Peak-Centered Number Pyramid
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the Number: ");
//     scanf("%d",&n);
//     for(int i =0; i<n;i++){
//         l=i+1;
//         for(int s=0;s<n-i-1;s++)
//             printf("  ");
//         for(int j=0;j<2*i+1;j++){
//             if(i>j)
//                 printf("%d ",l++);
//             else 
//                 printf("%d ",l--);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// Comb Step Pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the Number: ");
//     scanf("%d",&n);
//     for(int i =1; i<=n;i++){
//         for(int j=1;j<=2*i;j++)
//             printf("* ");
//         printf("\n");
//         if(i==n) break;
//         for(int j=1;j<=2*i+1;j++)
//             printf("*\n");
//     }
//     return 0;
// }


// Growing Spike Formation
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the Number: ");
//     scanf("%d",&n);
//     for(int i =1; i<=n;i++){
//         for(int j=1;j<=3*i;j++)
//             printf("* ");
//         printf("\n");
//         for(int j=1;j<=i;j++)
//             printf("*\n");
//     }
//     return 0;
// }


// Tiered Rhombus Wave
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the Number: ");
//     scanf("%d",&n);
//     for(int i =1; i<=n;i++){
//         for(int j=1;j<=((i==1)?i:3*(i-1));j++)
//             printf("* ");
//         printf("\n");
//         if(i==n) break;
//         for(int j=1;j<=i;j++){
//             for(int k=1;k<=i;k++)
//                 printf("* ");
//             printf("\n");
//         }
//     }
//     return 0;
// }


// Pulse-Train Diamond Pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the Number: ");
//     scanf("%d",&n);
//     for(int i =1; i<=n;i++){
//         for(int j=1;j<=i;j++)
//             printf("*\n");
//         if(i==n) break;
//         for(int j=1;j<=4*i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Descending Sawtooth Wave
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the Number: ");
//     scanf("%d",&n);
//     for(int i =1; i<=n;i++){
//         for(int j=1;j<=(n-i+1)*2;j++)
//             printf("* ");
//         printf("\n");
//         for(int j=1;j<=i;j++){
//             printf("*\n");
//         }
//     }
//     return 0;
// }


//  Fractal Pulse Cascade
// #include<stdio.h>
// int main(){
//     int n, l=0;
//     printf("Enter the Number: ");
//     scanf("%d",&n);
//     for(int i =1; i<=n;i++){
//         l++;
//         if(i%2==1) printf("*\n");
//         else printf("*\n*\n");
//         if(l>3) l=1;
//         if(i==n) break;
//         for(int j=1;j<=((l==3)?10:4*l);j++)
//             printf("* ");
//         printf("\n");
//     }
//     return 0;
// }


// Tiered Exponential Burst Pattern
// #include<stdio.h>
// #include<math.h>
// int main(){
//     int n, l=0;
//     printf("Enter the Number: ");
//     scanf("%d",&n);
//     for(int i =1; i<=n;i++){
//         for(int j=1;j<=pow(2,i);j++)
//             printf("* ");
//         printf("\n");
//         for(int j=1;j<=2*i-1;j++)
//             printf("*\n");
//     }
//     return 0;
// }


// hollow-mirrorImage
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=-n; i<=n; i++){
//         if(i<0) l = -i;
//         else l = i;
//         for(int s=0; s<n-l;s++)
//             printf("  ");
//         for(int j=0;j<2*l+1;j++){
//             if(j==0||i==-n||i==n||j==2*l)
//                 printf("* ");
//             else
//                 printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Mirrored Right Triangle Pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=-n; i<=n; i++){
//         l =(i<0) ? -i : i;
//         for(int j=0; j<2*(n-l)-1;j++){
//             if(j<n-l-1) printf("  ");
//             else printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// E-pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n;j++){
//             if(i==0||i==n-1||j==0||i==n/2) printf("* ");
//             else printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// F-pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n;j++){
//             if(i==0||j==0||i==n/2) printf("* ");
//             else printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Tiered Pulse-Stair Pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=2*i-1;j++)
//             printf("* ");
//         printf("\n");
//         if(i==n) break;
//         for(int j=1; j<=i;j++){
//             for(int j=1; j<=i;j++)
//                 printf("* ");
//             printf("\n");
//         }
//     }
//     return 0;
// }



// Alternating Case Diagonal Letter Triangle
// #include<stdio.h>
// int main(){
//     int n, l=1;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<i+1;j++){
//             if(l%2==0)
//                 printf("%c ",'A'+l-1);
//             else printf("%c ",'a'+l-1);
//             l++;
//         }
//         printf("\n");
//     }
//     return 0;
// }

// Asymmetric Diamond Pulse Pattern
// #include<stdio.h>
// int main(){
//     int n, l=1;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         for(int j=1;j<=2*n+1-2*i;j++)
//             printf("* ");
//         printf("\n");
//         for(int j=1; j<=i;j++)
//             printf("* ");
//         printf("\n");
//     }
//     return 0;
// }


// Double-Aligned Diamond Pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=-n; i<=n; i++){
//         l = (i<0) ? -i: i;
//         for(int j=0;j<n-l+1;j++)
//             printf("* ");
//         printf("\n");
//     }
//     return 0;
// }



// ^*
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=-n; i<=n; i++){
//         l = (i<0) ? -i: i;
//         for(int j=0;j<n-l+1;j++){
//             if(j%2!=0) printf("^* ");
//             else printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// Adjacent Right Triangles Pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<i+1;j++)
//             printf("* ");
//         printf("\n");
//     }
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n-i;j++)
//             printf("* ");
//         printf("\n");
//     }
//     return 0;
// }


// S-pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n;j++){
//             if(i==0||i==n-1||i==n/2||((j==0)&&(i<=n/2))||((j==n-1)&&(i>=n/2)))
//             printf("* ");
//             else printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// Tiered Step-Pulse Pattern
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=1; i<=n; i++){
//         for(int j=1;j<=i;j++){
//             for(int j=1;j<=2*i;j++)
//                 printf("* ");
//             printf("\n");
//         }
//         if(n==i) break;
//         for(int j=1;j<4;j++)
//             printf("*\n");
//     }
//     return 0;
// }


// hollow square with '/'
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n;j++){
//             if(i==0||i==n-1||j==0||j==n-1||n==i+j+1) 
//                 printf("* ");
//             else printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// hollow square with 'X'
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         for(int j=0;j<n;j++){
//             if(i==0||i==n-1||j==0||j==n-1||i==j||n==i+j+1) 
//                 printf("* ");
//             else printf("  ");
//         }
//         printf("\n");
//     }
//     return 0;
// }



// Right-Aligned Odd Number Triangle
// #include<stdio.h>
// int main(){
//     int n, l;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//        for(int j=0; j<n-i;j++)
//         printf("%d ",1+2*j);
//         printf("\n");
//     }
//     return 0;
// }



// Alternating Alpha-Numeric Step Pyramid
// #include<stdio.h>
// int main(){
//     int n, l=0;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//        for(int j=0; j<i+1;j++) {
//             if(i%2==0){
//                 printf("%c ",'A'+l);
//             }
//             else printf("%d ",l);
//        }
//        if(i%2==0) l++;
//         printf("\n");
//     }
//     return 0;
// }




// Interleaved Ascending Alpha-Numeric Pyramid
// #include<stdio.h>
// int main(){
//     int n, l=0,s=0;
//     printf("Enter the number: ");
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//        for(int j=0; j<i+1;j++) {
//             if(i%2==1){
//                 printf("%d ",'A'+l+s++);
//             }
//             else printf("%d ",l);
//        }
//        if(i%2==0) l++;
//         printf("\n");
//     }
//     return 0;
// }


// snake-right-trinagle
#include<stdio.h>
int main(){
    int n, l,num=1;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        l = num;
       for(int j=1; j<=i;j++) {
            if(i%2==1){
                printf("%d ",l++);
            }
            else printf("%d ",l+i-j);
       }
       num+=i;
        printf("\n");
    }
    return 0;
}


