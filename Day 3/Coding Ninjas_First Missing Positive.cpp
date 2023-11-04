Problem:
You are given an array of integers with length n. Your task is to find the first missingg positive in linear time
and constant space. In other words, find the lowest positive integer that does not exist in the array.
  The array can have negative numbers as well.

Input:

#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
   sort(arr,arr+n);
   int x = 0;
   for(int i=0;i<n;i++){
       if(arr[i]>0){
           if(x==0){
               if(arr[i]!=1){
                   return 1;
               }
           }
           if(arr[i]==x+1){
               x= arr[i];
           }
           else{
               return x+1;
           }
       }
   }
   return x+1;
}
