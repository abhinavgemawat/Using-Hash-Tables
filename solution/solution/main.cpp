//
//  main.cpp
//  solution
//
//  Created by Abhinav on 27/09/19.
//  Copyright © 2019 Abhinav Gemawat. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
struct record{
    int freq;
    char name[];
}arr[100];
 
int hash(char* s)
{
    int hash = 0;
    while(*s){
        hash = hash + *s;
        s++;
    }
    return hash;
}
 
int index_name(int key,int probe){
    int index;
    index=key%53+probe;
    
}
 
 
 
int main(){
    FILE * fp;
    char buff[100];
    fp = fopen("names.txt","r");

    int asc;
    int flag=0;
    int k=0;
    int index=0;
    int count=0;
    
    if (fp == NULL)
    {
        perror("Error opening file\n");
    }
 
    else
        while(fgets(buff,sizeof(buff),fp))
        {
          asc=hash(buff);
          k=0;
          flag=0;
          while(flag==0)
          {
              index=index_name(asc,k);
              if(strcmp(arr[index].name,buff)==0){
                  arr[index].freq++;
                  flag=1;
              }
              else if(strlen(arr[index].name)>1){
                  k++;
                  count++;
                 
              }
              else {
                  strcpy(arr[index].name,buff);
                  arr[index].freq=1;
                  flag=1;
              
              }
            
        }
 
 
char s[100];
int k = 0;
char z[100];
strcpy(z,"\n");
 
printf("enter string\n");
gets(s);
strcat(s,z);
int count1=0;
int a=hash(s);
flag=0;
while(flag==0){
​​​index=find_index(a,k);
    ​​if(strcmp(s1[index].name,s)==0);{
​​​printf("frequency=%d\nnumber of collisions=%d\nindex=%d\nvalue at index=%s\n",s1[index].freq,count,index,s1[index].name);
​​​
​​​flag=1;
​​}
    ​​else(strlen(s1[index].name)>1);{
​​​k++;
​​​count1++;
​​}
​​else{
​​​printf("not found");
​​​break;
​​}
​​
​}
 
}
 
 
 
