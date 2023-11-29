// # include<stdio.h>
// int main(){
//     char name[20];
//     printf("enter the item name : ");
//     scanf("%s",name);
//     int price,quan,total;
//     printf("enter the price and quantity of the itenm : ");
//     scanf("%d%d",&price,&quan);
//     total=price*quan;
//     printf("the item name is : %s\n",name);
//     printf("the total price is : %d\n",total);
//     float dis=total*0.12;
//     printf("total dis is : %f",dis);
// }

// #include<stdio.h>
// #include<conio.h>

// void main()

// { 
// char c;char ch;int j=0,i,len,n,count=0,t;
// char str[] = "hello world";
// char fname[10]={"RAM"};
// char lname[10]={"SINGH"};
// char name[20];
// char str1[10]={"ram"};
// char str2[5]={"singh"};
// len=strlen(str);
// printf("\n a.address of each character");
// printf ("\nb.cocatenate two string");
// printf ("\nc. concatenate using strcat function");
// printf ("\nd. comparetwo string");
// printf ("\ne. calculatelenth of string");
// printf ("\nf lower to uppercase");
// printf ("\ng.uppercase to lowercase");
// printf ("\nh.calculate number of vowels");
// printf ("\ni.reverse a string");
// printf ("\n enter your choice ");
// scanf("%c",&c);
// switch (c)
// {
// case 'a' :
//           for(i=0;i<len;i++)
//         printf("the address of %c=%u\n",str[i],&str[i]);
//         break;
// case 'b' :
//            for(i=0;fname[i]!='\0';i++)
//              name[i]=fname[i];
//              name[i]=' ';
            
//            for(j=0;lname[j]!='\0';j++)
//               name[i+j+1]=lname[j];
//             name[i+j+1]='\0';
//             printf("%s",name);
//             break;
//  case 'c' :     
//             strcat(str1,str2);
//             printf("%s",str1);     
//             break;
// case 'd' :
//            i=strcmp(str1,str2);
//             printf("%d",i);
//             break;
// case 'e' :  n=strlen(str);       
//              printf("%d",n);
//             break;
// case 'f' :

//     while (str[j]!='\0')
//          {

//           ch = str[j];

//         putchar(toupper(ch));

//         j++;
//           } break;
// case 'g' :
           
//        while (fname[j]!='\0') {

//         ch = fname[j];


//         putchar(tolower(ch));

//         j++;} break;
//  case 'h':
            
//             while (str[j]!='\0')
//              {

//           ch =str[j];
         
  
//          if(ch=='a'|| ch=='e' ||
//             ch=='i'|| ch=='o' ||
//             ch=='u'|| ch=='A' ||
//             ch=='E'|| ch=='I' ||
//             ch=='O'|| ch=='U' )
            
//             count++;
//             j++;
//         }
//   printf("%d vowels presentsin the givenstring",count);
//          break;
//  case 'i' :
//             printf("before reverse\n ");
            
//              printf("%s\n",str);
//             for (i=0;i<len/2;i++)
//             {
//             t=str[i];
//             str[i]=str[len-i-1];
//             str[len-i-1]=t;
//             }
//            printf ("after reverse\n");
//            printf ("%s",str);
//             break;
// default : printf("enter wrong choice");

// }


// }

// # include<stdio.h>
// int main(){
//     int a;
//     printf("the garvage value of a is : %d",a);
// }


// pointer 

// # include<stdio.h>
// int main(){
//     // printf("this is anand maharana");

//     int a = 10;
//     int *b = &a;
//     printf("the address is : %u and vlaue is : %d\n",&a,a);
//     printf("hte address of a usin pointer is (a) : %d and the address of b is : %u",b,&b);
// }

// # include<stdio.h>

// int main(){
//     int a= 10;
//     int *b= &a;
//     printf("%d,",a);
//     printf("%d,",b);
//     printf("%d,",&a);
//     printf("%d,",&b);
//     printf("%d,",*(&a));
//     printf("%d,",*(&b));


// }

// # include<stdio.h>
// int main(){
//     int row,col;
//     printf("enter the number of row and column : ");
//     scanf("%d%d",&row,&col);
//     int matrix[row][col],transpose[col][row];;
//     printf("this is a %d * %d matrix and enter the all element : ",row,col);
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             scanf("%d",&matrix[i][j]);
//         }
//     }
//     // for printing of matrix;
//     printf("the matrix is : \n");
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             printf("%d ",matrix[i][j]);
//         }
//         printf("\n");
//     }

//     // now print the transpose 
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//              transpose[j][i]= matrix[i][j];
//         }
//     }

//     // now print the transpose

//      printf("the transpose is : \n");
//     for(int i=0;i<col;i++){
//         for(int j=0;j<row;j++){
//             printf("%d ",transpose[i][j]);
//         }
//         printf("\n");
//     }


// }


// # include<stdio.h>
// int main(){
//     int n,x=0,y=0;
//     printf("enter the size of array : ");
//     scanf("%d",&n);
//     int array[n],even[n],odd[n];
//     printf("enter the array element : ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&array[i]);
//     }

//     for(int i=0;i<n;i++){
//         if(array[i]%2==0){
//             even[x]=array[i];
//             x++;
//         }
//         else{
//             odd[y]=array[i];
//             x++;
//         }
//     }

//     printf("the even array are : ");
//     for(int i=0;i<x;i++){
//         printf("%d,",even[i]);
//     }

//     printf("\nthe odd array are : ");
//     for(int i=0;i<y;i++){
//         printf("%d,",even[i]);
//     }
// }

// #include <stdio.h>

// void swap(int *a, int *b) {
//     int temp = *a; // Store the value pointed to by a in a temporary variable
//     *a = *b;       // Assign the value pointed to by b to a
//     *b = temp;     // Assign the temporary value to b
// }

// int main() {
//     int num1 = 5;
//     int num2 = 10;

//     printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

//     // Call the swap function with pointers to num1 and num2
//     swap(&num1, &num2);

//     printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

//     return 0;
// }

#include <stdio.h>

// Macro to swap two numbers
#define SWAP(x, y) do { \
    typeof(x) temp = (x); \
    (x) = (y); \
    (y) = temp; \
} while (0)

int main() {
    int a = 5;
    int b = 10;

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Use the SWAP macro to swap a and b
    SWAP(a, b);

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
