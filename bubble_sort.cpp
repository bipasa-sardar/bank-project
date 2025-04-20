#include<iostream>
void bubblesort(int array[],int size);
int main(){
    int array[]={33,67,12,92,49,51,75,23};
    int size=sizeof(array)/sizeof(array[0]);
    bubblesort(array,size);
    for(int element:array){
        std::cout<<element<<" ";
    }
    return 0;
}
void bubblesort(int array[],int size){
    int temp,i,j;
    for(i=0;i<size-1;i++){
        for(j=0;j<size-i-1;j++){
           if(array[j]>array[j+1]){
            temp=array[j];
            array[j]=array[j+1];
            array[j+1]=temp;
           }
        }
    }
}
