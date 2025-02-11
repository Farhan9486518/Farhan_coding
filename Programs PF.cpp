//1.	Write a program to check if a number entered by the user is positive, negative, or zero using if-else.
#include<iostream>
using namespace std;
int main( ){
	int x;
	cout<<"Enter the number:"<<endl;
	cin>>x;
	
	if(x>0){
		cout<<"The number is positive."<<endl;
		
	}else{
		cout<<"The number is negative."<<endl;
	}
	
	return 0;
}

//2.	Write a program that takes a number as input and checks whether it is even or odd using if-else.
#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the number:"<<endl;
	cin>>x;
	
	if(x%2==0){
		cout<<"The number is even"<<endl;
		
	}else{
		cout<<"The number is odd"<<endl;
	}
	
	return 0;
}

//3.	Write a program to find the largest of three numbers using if-else.
#include<iostream>
using namespace std;
int main(){
	int x,y,z;
	cout<<"Enter the 1 number:"<<endl;
	cin>>x;
	
	cout<<"Enter the 2 number:"<<endl;
	cin>>y;
	
	cout<<"Enter the 3 number:"<<endl;
	cin>>z;
	
	if(x>y && x>z){
		cout<<"The number 1 is largest"<<endl;
		
	}else if(y>x && y>z){
		cout<<"The number 2 is largest"<<endl;
	}else {
		cout<<"The number 3 is largest"<<endl;
	}
	
	return 0;
}

/*4.	Write a program that asks the user to enter marks and determines the grade using multiple ifelse: 
â€¢ Marks â‰¥ 90: Grade A 
â€¢ Marks â‰¥ 80: Grade B 
â€¢ Marks â‰¥ 70: Grade C 
â€¢ Marks â‰¥ 60: Grade D 
â€¢ Otherwise: Fail*/
#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the number:"<<endl;
	cin>>x;
	
	if(x>=90){
		cout<<"Congratulation you are getting A grade:"<<endl;
		
	}else if(x>=80){
		cout<<"Congratulation you are getting B grade:"<<endl;
		
	}else if(x>=70){
		cout<<"Congratulation you are getting C grade:"<<endl;
		
	}else if(x>=60){
		cout<<"Congratulation you are getting D grade:"<<endl;
		
	}else{
		cout<<"Congratulation you are fail"<<endl;
	}
	
	return 0;
}

//5.	Write a program that checks whether a year entered by the user is a leap year or not          using if-else.
#include<iostream>
 using namespace std; 
int main() {
 int year;
 cout<<"Enter Year: "; 
cin>>year;
 if(year%400==0 || year%100!=0 && year%4==0){ 
cout<<"leap year";
 }else{
 cout<<"non leap year";
 }
 return 0;
 }

 //6.	Write a program to check whether a character entered by the user is a vowel or consonant using if-else.
#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	cout<<"Enter Character:";
	cin>>ch;
	
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		cout<<"This Alphabet is vowel"<<endl;
	}else {
		cout<<"This Alphabet is conconet";
	}
	
	return 0;
}

/*7.	Write a program to calculate the electricity bill based on the following conditions: 
â€¢	Up to 100 units: â‚¹5 per unit 
â€¢	101 to 300 units: â‚¹7 per unit
â€¢	Above 300 units: â‚¹10 per unit 
â€¢	Display the total bill.*/
#include<iostream>
using namespace std;
int main()
{
	int bill,unit;
	
	cout<<"Enter Unit:";
	cin>>unit;
	
	if(unit<=100){
		bill=unit*5;
		cout<<"Total Bill is:"<<bill;
	}else if(unit<=200){
		bill=unit*7;
		cout<<"Total Bill is:"<<bill;
	}else{
		bill=unit*10;
		cout<<"Total Bill is:"<<bill;
	}
	
	return 0;
}

//8.	Write a program that takes an integer from the user and determines whether it is a multiple of both 3 and 5 using if.
#include<iostream>
using namespace std;
int main()
{
    int x;
    
    cout<<"Enter the Number:";
	cin>>x;
	
	if(x%3==0 && x%5==0){
		cout<<"The number is divided by both"<<endl;
	}else{
		cout<<"The number is not inturpted"<<endl;
	}
	
	return 0;
}

//9.	Write a program to check whether an is uppercase, entered character lowercase, digit, or special symbol using multiple if-else.
#include<iostream>
using namespace std;
int main()
{
	char ch;
	
	cout<<"Enter the Number:";
	cin>>ch;
	
	if(ch>='A'&& ch<='Z'){
		cout<<"The given character is Upper case"<<endl;
	} else if(ch>='a' && ch<='z'){
		cout<<"The given character is Lower case"<<endl;
	}else if(ch>='0' && ch<='9'){
		cout<<"The given character is Numaric"<<endl;
	}else{
		cout<<"The given character is Symbol";
	}
	return 0;
}

//10.	Write a program to determine the eligibility of a person to vote based on their age (age â‰¥ 18 is eligible).
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number:";
	cin>>num;
	
	if(num>=18){
		cout<<"You are eligible to vote";
	}else{
		cout<<"You are not eligible to vote";
	}
	return 0;
}

//11.	Write a program to print numbers from 1 to 10 using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int x;
    for(x=0;x<=10;x++){
    	cout<<x<<endl;
	}
	return 0;
}

//12.	Write a program to find the sum of the first n natural numbers using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    
    cout<<"Enter the number:";
    cin>>n;
    for(int i=1; i<=n;i++){
    	cout<<i<<endl;
    	sum+=n;
	}
	cout<<"The sum of natural number is:"<<sum<<endl;
	return 0;
}

//13.	Write a program to print the multiplication table of a number entered by the user using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The Number:";
    cin>>n;
    
    for(int i=1;i<=10;i++){
    	cout<<n<<"x"<<i<<"="<<n*i<<endl;
	}
	return 0;
}

//14.	Write a program to print the factorial of a number using a while loop
#include<iostream>
using namespace std;
int main()
{
    int n,factorial=1,i;
    cout<<"Enter The Number:";
    cin>>n;
    
    i=n;
    while(i>0){
    	factorial=factorial*i;
    	i--;
	}
    
   cout<<"The factorial of"<<n<<"is"<<factorial<<endl;
	return 0;
}

//15.	Write a program to reverse a given number using a while loop.
#include<iostream>
using namespace std;
int main()
{
    int n,rev=0;
    cout<<"Enter The value:";
    cin>>n;
    
    while(n>0){
    	rev=rev*10+n%10;
    	n=n/10;
	}
	cout<<"The reverse number is:"<<rev<<endl;
	
	return 0;
}

//16.	Write a program to check whether a number is prime or not using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout<<"Enter The Number:";
    cin>>n;
    
    for(int i=1;i<=n;i++){
    	if(n%i==0){
    		count++;
    		
		}
	}
	if(count==2){
		cout<<"is the prime number";
	}else{
		cout<<"is not the prime number";
	}
    
	return 0;
}

//17.	Write a program to calculate the sum of digits of a number using a while loop.
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,digit;
    cout<<"Enter The Number:";
    cin>>n;
    
    while(n>0){
    	digit=n%10;
    	sum=sum+digit;
    	n/-10;
	}
	cout<<"The sum of digits:"<<sum<<endl;
    
	return 0;
}

//18.	Write a program to print the Fibonacci series up to n terms using a for loop.

#include<iostream>
using namespace std;
int main()
{
    int n,first=0,second=1,next;
    cout<<"Enter The Number:";
    cin>>n;
     
     cout<<"Fabarconnic series"<<endl;
     
     for(int i=1;i<=n;i++){
     	cout<<first<<endl;
     	next=first+second;
     	first=second;
     	second=next;
	 }
	 cout<<endl;
     return 0;
}

//19.	Write a program to display the sum of even numbers between 1 and 50 using a for loop.
#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    for(int i=2;i<=50;i+=2){
    	cout<<i<<endl;
    	sum+=i;
	}
	cout<<"Total sum of number is"<<sum<<endl;
	return 0;
}
	
/*20.	Write a program to generate the following pattern using a nested for loop: 
*
 * *
 * * *
 * * * *
 * * * * **/
#include<iostream>
using namespace std;
int main()
{
    int n=5;
    for(int i=1;i<=n;i++){
    	for(int j=1;j<=i;j++){
    		cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}







