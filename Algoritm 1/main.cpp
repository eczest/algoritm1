#include "Function.h"
#include <string>
#include<vector>
#include <stdio.h>
#include <cstdio>
#include <time.h>
#include <fstream>
#include <ctime>
#include <iterator>
using namespace std;
int main (){
    int a,b;
    cout<<"array lenght";
    cin>>a;
    cout<<"number range";
    cin>>b;
    int array[a];
    for(int i=0;i<a;++i){
        array[i]=rand()%b;
    }
    sum_array(array,a);
    multi_array(array,a);
    sort_puziri(array,a);
    /*const int a =5;
    int b;
    cout<<"number range :";
    cin>>b;
    int array[a];
    //sort_puziri(array,a);
     vvodfile(array,a);*/
}