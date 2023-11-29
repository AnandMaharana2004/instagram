// # include<iostream>
// using namespace std;
// int main(){
//     // cout<<"anand maharana"<<"\n";
//     // int a= 12;
//     // int size = sizeof(a);
//     // cout<<"the size of the int a is : "<< size;

//     // type casting : 
    
// //     char a = 2332;
// //     cout<<"the ascii value of the b is : "<<a;
// // 
//     // int a = 123;
//     // int b = 34;
//     // bool comper = (a<b);
//     // bool comper2 = (a>b);

//     // cout<< "the statement is : "<<comper<<"\n";
//     // cout<< "the statement is : "<<comper2;
//     // if (a>0){
//     //     cout<<"a is +ve ";
//     // }
//     // else {
//     //     cout<<"a is -ve";
//     // }

//     // int a ,b;
//     // cin>>a >>b;
//     // cout<< "the a is :"<<a <<"\nthe b is :"<<b;

//     // int a,b;
//     // cout<<"enter the value of a : " ;
//     // cin>>a;
//     // cout<<"enter the value of b : ";
//     // cin>>b;
//     // if( a<b){
//     //     cout<<"the b is greater then a \n";
//     // }
//     // else{
//     //     cout<<"the a is greater then b";
//     // }

//     // int num,fact=1,sum=0;
//     // cout<<"enter a number : ";
//     // cin>>num;

//     // for(int i=1;i<=num;i++){
//     //     fact = fact*i;
//     //     for(int j=1;j<=i;j++){
//     //         sum=sum+fact;
//     //     }
//     // }

//     // for(int i=1; i<=num; i++){
        
//     //         fact= fact*i;
        
//     // }
    

//     // cout<<"the factorial value of this number is : "<<fact<<"\n";
//     // cout<<"the sum of the factorial serise is : "<<sum;





//     // int n1,n2;
//     // cout<<"enter first number : ";
//     // cin>>n1;
//     // cout<<"enter secound number : ";
//     // cin>>n2;
//     // int r;
//     // int a=n1,b=n2;

    
//     // while (n1%n2 !=0){
//     //     r= n1%n2;
//     //     n1= n2;
//     //     n2= r;

//     // }
//     // cout<<"the  GCD is : ";
//     // cout<<n2;


//     // //work for lcm;
//     // int lcm = (a*b)/n2;

//     // cout<<"\nthe lcm is : "<<lcm;


//     // Largest number among three number :-

//     // int num1,num2,num3;
//     // cout<<"enter three  numbers : ";
//     // cin>>num1>>num2>>num3;

//     // if(num1<num2 && num2>num3){
//     //     cout<<"the second number is grater then other \n";
//     // }
//     // else if(num1>num2 && num1>num3){
//     //     cout<<"the first number is grater then other \n";
//     // }
//     // else if (num1==num2 && num2==num3){
//     //     cout<<"the all number are equal \n";
//     // }
//     // else{
//     //     cout<<"the third number is grater then other \n";
//     // }


//     // incriment and decriment operater 

//     // int a= 10;
//     // int b= a++;
//     // cout<<"the b is : "<<b<<"\n";
//     // cout<<"the a is : "<<a<<"\n";
    
//     // int d= ++a;
//     // cout<<"the d is : "<<d<<"\n";
//     // cout<<"the a is : "<<a<<"\n";

//     // int f= a--;
//     // cout<<"the f is : "<<f<<"\n";
//     // cout<<"the a is : "<<a<<"\n";

//     // int g= --a;
//     // cout<<"the g is : "<<g<<"\n";
//     // cout<<"the a is : "<<a<<"\n";

//     // int a, b=1;
//     // a= 10;
//     // if(++a){
//     //     cout<<b;
        
//     // }
//     // else {
//     //     cout<<++b;
//     // }
    

//     // int a ;
//     // cout<<"enter a number : ";
//     // cin>>a;
//     // cout<<"the number which is divisiable by this number are : ";
//     // if(a==0){
//     //     cout<<"0";
//     // }
//     // else{
//     //     for(int i=1;i<=a;i++){
//     //          if(a%i==0){
//     //             cout<<"\n"<<i;
//     //         }
//     //     }
//     // }
    

//     int a,fact=1,sum=0;
//     cout<<"enter a number : ";
//     cin>>a;

//     for(int i=1; i<=a;i++){
//         fact=1;
//         for(int j=1; j<=i;j++){
//             fact = fact*j;
//         }
//         sum=sum+fact;

//     }

//     cout<<"the sum of the factor is : "<<sum;


// }


// # include<iostream>

// using namespace std;

// int main(){
//     cout<<"anand maharana";
// }

// # include<iostream>
//  using namespace std;
// int deepu(int a, int b);
// int main() {
//     int n,a,b;
//     cout<<"enter a is :";
//     cin>>a;
//     cout<<"enter b is :";
//     cin>>b;
//     deepu(n,b);
//     return 0;
// }

// int deepu( int a, int b) {
//     int n=0;
//     // n=a;
//     // a=b;
//     // n=b;
//     cout<<"after swipping the value of a: "<<a<<endl;
//     cout<<"after swipping the value of b: "<<b;
// }


// # include<iostream>
// using namespace std;

// int paradox(int a,int b);
// int main(){
//     int a,b;
//     cout<<"enter 1st numbner : ";
//     cin>>a;
//     cout<<"enter 2nd number : ";
//     cin>>b;
//     paradox(a,b);
// }

// int paradox(int p,int q){
    

//     int c;
//     c=p;
//     p=q;
//     q=c;
//     cout<<"a and b : "<<p<<" "<<q;
    
// }

// # include<iostream>
// using namespace std;

// int main(){
//     int a=10,b=20,c;
//     c=a;
//     a=b;
//     b=c;

//     cout<<"a and b is : "<<a<<"\n"<<b;
// }



// # include<iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout<<"enter 1st number : ";
//     cin>>a;
//     cout<<"enter 2nd number : ";
//     cin>>b;

//     a=a+b;
//     b=a-b;
//     a=a-b;
//     cout<<"a is : "<<a;
//     cout<<"\nb is : "<<b;
    

// }


// # include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=4;j++){
//         cout<<j<<" ";
//         }
//         cout<<"\n";
//     }
// }

// # include<iostream>
// using namespace std;

// int main(){
//     for(int i=1;i<=4;i++){
//         for(int j=1;j<=i;j++){
//             cout<<i;
//         }
//         cout<<"\n";
//     }
// }


// #include <iostream>
// using namespace std;

// // Function to find GCD using Euclidean algorithm
// int findGCD(int a, int b) {
//     while (b != 0) {
//         int temp = b;
//         b = a % b;
//         a = temp;
//     }
//     return a;
// }

// // Function to find LCM using GCD
// int findLCM(int a, int b) {
//     return (a * b) / findGCD(a, b);
// }

// int main() {
//     // Input two numbers
//     int num1, num2;
//     cout << "Enter first number: ";
//     cin >> num1;
//     cout << "Enter second number: ";
//     cin >> num2;

//     // Calculate and display GCD
//     int gcd = findGCD(num1, num2);
//     cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << std::endl;

//     // Calculate and display LCM
//     int lcm = findLCM(num1, num2);
// cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << std::endl;

//     return 0;
// }

// # include<iostream>
// using namespace std;
// int factorial(int num) {
//   int fact = 1;
//   for (int i = 1; i <= num; i++) {
//     fact *= i;
//   }
//   return fact;
// }

// int calculateSeriesSum(int n) {
//   int sum = 0;
//   for (int i = 1; i <= n; i++) {
//     sum += factorial(i);
//   }
//   return sum;
// }

// int main(){
//      int n;
//   cout << "Enter the value of n: ";
//   cin >> n;

//   int result = calculateSeriesSum(n);
//   cout << "The result of the series is: " << result <<endl;
// }

// # include<iostream>
// using namespace std;
// int main(){
//     cout<<"this is anand maharna";
// }

// # include<iostream>
// using namespace std;
// int factoiral(int number);
// int main(){
//     int number ;
//     cout<<"enter a number : ";
//     cin>>number;
//     cout<<"the fectorial of this numnber is : "<<factoiral(number);
// }

// int factoiral(int number){
//     int sum = 1;
//     for (int i = 1; i <= number; i++)
//     {
//         sum = sum*i;
//     }
//     return sum;
// }

// # include <iostream>
// using namespace std;
// int GCD(int a, int b);
// int main(){
//         int num1,num2;
//         cout<<"enter two number : ";
//         cin>>num1>>num2;
//         cout<<"the GCD of two number is : "<<GCD(num1,num2)<<endl;
// }

// int GCD(int a, int b) {
//     while (b!=0)
//     {
//         int rem = a%b;
//         a = b;
//         b= rem;
//     }
//     return a;
    
// }

// # include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;
//     cout<<"the table of "<<n<<" is : "<<endl;
//     for(int i= 1;i<=10;i++){
//         cout<<n<<"*"<<i<<"="<<n*i<<endl;
//     }
// }

// # include<iostream>
// using namespace std;
// int main(){
    
// }

// pass by reference 

// #include<iostream>
// using namespace std;

// // Function to swap two numbers using pass by reference
// void swapNumbers(int &num1, int &num2) {
//     int temp = num1;
//     num1 = num2;
//     num2 = temp;
// }

// int main() {
//     int num1, num2;

//     // Input the numbers
//     cout << "Enter the first number: ";
//     cin >> num1;

//     cout << "Enter the second number: ";
//     cin >> num2;

//     // Display the numbers before swapping
//     cout << "Before swapping: ";
//     cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

//     // Call the function to swap numbers using pass by reference
//     swapNumbers(num1, num2);

//     // Display the numbers after swapping
//     cout << "After swapping: ";
//     cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

//     return 0;
// }


// call by address 

// #include<iostream>
// using namespace std;

// // Function to swap two numbers using pass by address
// void swapNumbers(int* num1, int* num2);


// int main() {
//     int num1, num2;

//     // Input the numbers
//     cout << "Enter the first number: ";
//     cin >> num1;

//     cout << "Enter the second number: ";
//     cin >> num2;

//     // Display the numbers before swapping
//     cout << "Before swapping: ";
//     cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

//     // Call the function to swap numbers using pass by address
//     swapNumbers(&num1, &num2);

//     // Display the numbers after swapping
//     cout << "After swapping: ";
//     cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

//     return 0;
// }
// void swapNumbers(int* num1, int* num2) {
//     int temp = *num1;
//     *num1 = *num2;
//     *num2 = temp;
// }


// using default argument;

// #include <iostream>
// using namespace std;

// // Function to find the sum of four numbers with default arguments
// int sumOfFourNumbers(int num1, int num2, int num3 = 0, int num4 = 0) {
//     return num1 + num2 + num3 + num4;
// }

// int main() {
//     int num1, num2, num3, num4;

//     // Input the numbers
//     cout << "Enter the first number: ";
//     cin >> num1;

//     cout << "Enter the second number: ";
//     cin >> num2;

//     cout << "Enter the third number: ";
//     cin >> num3;

//     cout << "Enter the fourth number: ";
//     cin >> num4;

//     // Call the function with different numbers of arguments
//     int result = sumOfFourNumbers(num1, num2);
//     cout << "Sum of two numbers: " << result << endl;

//     result = sumOfFourNumbers(num1, num2, num3);
//     cout << "Sum of three numbers: " << result << endl;

//     result = sumOfFourNumbers(num1, num2, num3, num4);
//     cout << "Sum of four numbers: " << result << endl;

//     return 0;
// }


// # include<iostream>
// using namespace std;
// int main(){
//     int sum(int a=1, int b=2, int c=3, int d=10);
//     cout<< "sum = "<<sum();
//     return 0;
//     int sum(int i,int j,int k,int l){
//         return (i+j+k+l);
//     }

// }



// #include<iostream>
// using namespace std;
// inline double squre(int x);
// inline double qube(int x);
// int main(){
    
//     int x;
//     cout<<"enter a number : ";
//     cin>>x;
//     cout<<"the square is : "<<squre(x)<<endl;
//     cout<<"the qube is : "<<qube(x)<<endl;
//     return 0;
// }
// inline double squre(int x){
//     return x*x;
// }
// inline double qube(int x){
//     return x*x*x;
// }

// # include<iostream>
// using namespace std;
// int main(){
//     int n,rev = 0;
//     cout<<"enter a number : ";
//     cin>>n;

//     while (n!=0)
//     {
//         int rem = n%10;
//         rev= rev*10+ rem;
//         n= n/10;
//     }
//     cout<<"the reverse number is : "<<rev<<endl;
//     return 0;
    

// }


// # include<iostream>
// # include<math.h>
// using namespace std;
// int main(){
//     int n,p;
//     cout<<"entert the number : ";
//     cin>>n;
//     cout<<"enter the power of the number : ";
//     cin>>p;
//     double ans = pow(n,p);
//     cout<<"power of the number is : "<<ans<<endl;
//     return 0;
// }


// # include<iostream>
// using namespace std;
// double area(int r);
// double area(int height,int width);
// double area(int bass, int height2);

// int main(){
//     int redius,width,height,bass,height2;
//     cout << "Enter the radius of the circle: ";
//     cin>>redius;
//     cout<<"Enter the height and width of the rectangle: ";
//     cin>>height>>width;
//     cout<<"Enter the bass and height of the triangle: ";
//     cin>>bass>>height2;
//     double areaofcircle = area(redius);
//     cout<<"the area of circle is : "<<areaofcircle<<endl;
//     double areaofrectangle = area(width , height);
//     cout<<"the area of rectangle is : "<<areaofrectangle<<endl;
//     double areaoftriangle = area(bass,height2);
//     cout<<"the area of triangle is : "<<areaoftriangle<<endl;

// }
// double area(int r){
//     return 3.14*r;
// }
// double area(int height ,int width){
//     return height*width;

// }
// double area(int bass ,int height2){
//     return 0.5*(bass*height2);
// }

# include<iostream>
using namespace std;
int main(){
    cout<<"this is anand maharana"<<endl;
}