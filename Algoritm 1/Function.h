#include <iostream>
#include <string>
#include<vector>
#include <stdio.h>
#include <cstdio>
#include <time.h>
#include <fstream>
#include <ctime>
#ifndef CLION_FUNCTION_H
#define CLION_FUNCTION_H
/*int* arrayrandint( int b,int a){

    //int res [sizeof(array)/sizeof(array[0])];
    int res[a];
   // std::cout<<sizeof(array)<<std::endl;
    for(int &i:res){
        i=rand()%b;
        std::cout<<i<<std::endl;
    }
    return res ;
}*/
/*float* arrayrandfloat(int b,int  a){
    float res[a];
    for(float i:res){
        i=rand()%b;
        std::cout<<i<<std::endl;
    }
    return res;
}*/
void arrayrandint(int A[],int N,int B)
{
    for (int i = 0; i < N; ++i)
    {
        A[i] = rand() % B;
    }

}
int sum_array(int arr[],int b){
    int a = 0;
    for(int i=0; i<b;++i){
        a+=arr[i];
        //std::cout<<arr[i];
    }
    std::cout<<a;
}
int multi_array(int arr[],int b){
    int a =1;
    for(int i=0;i<b;++i){
        a*=arr[i];
 }
    std::cout<<a<<std::endl;
}
double sum_arraydouble(double arr[],int b){
    double a = 0;
    for(int i=0; i<b;++i){
        a+=arr[i];

    }
    std::cout<<a;
}
double multi_arraydouble(double arr[],int b){
    double a =1;
    for(int i=0;i<b;++i){
        a*=arr[i];
    }
    std::cout<<a<<std::endl;
}
int left_delite(int arr[], const int a,int b){
    for(int i=b;i<a;i++){
        arr[i]=arr[i+1];
        arr[a-1]=0;
    }
}
int right_add(int arr[], const int a,int b){
    for(int i=a-2;i<=b;i--){
        arr[i+1]=arr[i];
        arr[b]=0;
    }
}
double left_delite_double(double arr[],const int a, int b){
    for(int  i=b;i<a;i++){
        arr[i]=arr[i+1];
        arr[a-1]=0;

    }
}
double right_add_double(double arr[],const int a, int b){
    for(int i=a-2;i<=b;i--){
        arr[i+1]=arr[i];
        arr[b]=0;
    }
}
int sort_line(int arr[],int size ){
    for(int i=0;i<size-1;i++)
        for(int j=i+1;j<size;j++)
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    for(int i=0;i<size;++i){
        std::cout<<arr[i];
    }
}
double sort_line_double(double arr[],int size ){
    for(int i=0;i<size-1;i++)
        for(int j=i+1;j<size;j++)
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    for(int i=0;i<size;++i){
        std::cout<<arr[i];
    }
}
int sort_puziri(int arr[],int size){
    bool flag=true;
    while(flag) {
        flag = false;
        for(int i=0;i<size-1;i++)
            if(arr[i]<arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                flag=true;
            }
    }
    for(int i=0;i<size;++i){
        std::cout<<arr[i];
    }
}
double sort_puziri_double(double arr[],int size){
    bool flag=true;
    while(flag) {
        flag = false;
        for(int i=0;i<size-1;i++)
            if(arr[i]<arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                flag=true;
            }
    }
    for(int i=0;i<size;++i){
        std::cout<<arr[i];
    }
}
int sort_vstavka(int arr[],int size){
    int newitem, temp;
    for(int i=1;i<size;i++){
        newitem=arr[i];
        temp=i-1;
        while(temp >=0 && arr[temp]>newitem){
            arr[temp+1]=arr[temp];
            temp=temp-1;
        }
        arr[temp+1]=newitem;
    }
}
double sort_vstavka_double(double arr[],int size){
    int newitem, temp;
    for(int i=1;i<size;i++){
        newitem=arr[i];
        temp=i-1;
        while(temp >=0 && arr[temp]>newitem){
            arr[temp+1]=arr[temp];
            temp=temp-1;
        }
        arr[temp+1]=newitem;
    }
}
int serch_min(int arr[], int size){
    int min=0;
    for(int i=1;i<size;i++)
        if(arr[min]>arr[i])
            min=i;
        std::cout<<arr[min];


}
int serch_max(int arr[], int size){
    int max=0;
    for(int i=1;i<size;i++)
        if(arr[max]<arr[i])
            max=i;
    std::cout<<arr[max];


}
double serch_min_d(double arr[], int size){
    int min=0;
    for(int i=1;i<size;i++)
        if(arr[min]>arr[i])
            min=i;
    std::cout<<arr[min];
}
double serch_max_d(double arr[], int size){
    int max=0;
    for(int i=1;i<size;i++)
        if(arr[max]>arr[i])
            max=i;
    std::cout<<arr[max];
}
int binarny_poisk(int arr[],int key , int l){
    int low=0;
    int high=l-1;
    int mid;
    while(low<=high){
        mid=(low+high)/2;
        if(key<arr[mid])
            high=mid-1;
             if(key>arr[mid])
                low=mid+1;
            else
            return mid;
    }


}
double binarny_poisk_double(double arr[],int key , int l){
    int low=0;
    int high=l-1;
    int mid;
    while(low<=high)
        mid=(low+high)/2;
        if(key<arr[mid])
            high=mid-1;
        if(key>arr[mid])
            low=mid+1;
        else
            return mid;
}
/*void podschet(int arr[], int size, int* a, int* b, int* c, int *k, int o)
{
    bool bolshe,menshe,kratn;
    for (int i = 0; i < size; i++)
    {
        if (bolshe(arr[i]))
        {
            *a = *a + 1;
        }
        else if (menshe(arr[i]))
        {
            *b = *b + 1;
        }
        else
        {
            *c = *c + 1;
        }
        if (kratn(arr[i], o))
        {
            *k = *k + 1;
        }
    }
}
bool bolshe(int a)
{
    return a > 0;
}
bool menshe(int a)
{
    return a < 0;
}
bool kratn(int a, int b)
{
    return a % b == 0;
}*/
int vvodfile(int arr[],int size){
    std::ofstream("mass.rtf");
    for (int i=0;i<size;i++){
        std::cout<<arr[i];
    }
}

#endif //CLION_FUNCTION_H