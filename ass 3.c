/*
Roll No. : 14
Student Name : Methre Krrish
Program Title : To print a pattern in output

 Task Given By:
 - Roll No. of Assignee : 49
 - Assignee Name : Faisal Khan
 */


 #include <stdio.h>

 int main()
 {
 int N = 5;

 // Outer Loop for number of rows
 for (int i = 1; i <= N; i++) {

 // inner Loop for space printing
 for (int j = 1; j <= N - i; j++)
 printf(" ");

 // inner Loop for star printing
 for (int j = 1; j < 2 * i; j++)
 printf("*");
 printf("\n");
 }
 return 0;
 }
 /*
 OUTPUT
    *
   ***
  *****
 *******
*********
 */


