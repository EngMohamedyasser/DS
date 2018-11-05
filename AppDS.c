#include <stdio.h>
#include <stdlib.h>
#include<time.h>
//funtion to print the results
void printArray(int arr[], int size) {
    int i;
    for (i=0; i < size; i++)
            printf("%d ", arr[i]);
    if(i%10==0){
    printf("\n");
    }

    //printf("n");
}
void swap(int* a, int* b){ // function to swap
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int low, int high){
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element
     int j;
    for ( j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high){
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
           at right place */
        int pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void inverslybubblesortonscale2000(){
int pointer,temp,ptr ;
int bubblesortarray[2000];
for(pointer=2000;pointer>0;pointer--){
    bubblesortarray[pointer]=pointer;
}
for (pointer=0;pointer<2000;pointer++){
        for (ptr=0;ptr<2000-pointer-1;ptr++){
    if (bubblesortarray[ptr]>bubblesortarray[ptr+1]){
        temp=bubblesortarray[ptr];
        bubblesortarray[ptr]=bubblesortarray[ptr+1];
        bubblesortarray[ptr+1]=temp;
        }
    }
}
for(pointer=0;pointer<2000;pointer++){
    if (pointer%10==0){
        printf("\n");
    }
    printf("%d , ",bubblesortarray[pointer]);
}
}
void inverslybubblesortonscale50(){
 int pointer,ptr,temp ;
int bubblesortarray[50];
for(pointer=50;pointer>0;pointer--){
bubblesortarray[pointer]=pointer;
}
for (pointer=0;pointer<50-1;pointer++){
        for(ptr=0;ptr<50-pointer-1;ptr++){
    if (bubblesortarray[ptr]>bubblesortarray[ptr+1]){
        temp=bubblesortarray[ptr];
        bubblesortarray[ptr]=bubblesortarray[ptr+1];
        bubblesortarray[ptr+1]=temp;
        }
    }
}
for(pointer=0;pointer<50;pointer++){
     if (pointer%10==0){
        printf("\n");
    }
    printf("%d , ",bubblesortarray[pointer]);
}
}
void inverslybubblesortonscale500(){
int pointer,temp ;
int bubblesortarray[500];
for(pointer=500;pointer>0;pointer--){
bubblesortarray[pointer]=pointer;
}
for (pointer=0;pointer<500;pointer++){
if (bubblesortarray[pointer]>bubblesortarray[pointer+1]){
temp=bubblesortarray[pointer];
bubblesortarray[pointer]=bubblesortarray[pointer+1];
bubblesortarray[pointer+1]=temp;
        }
        }
for(pointer=0;pointer<500;pointer++){
     if (pointer%10==0){
        printf("\n");
    }
    printf("%d , ",bubblesortarray[pointer]);
}
}
void sortedbubblesortonscale50(){
 int pointer,ptr;
 int temp;
int bubblesortarray[50];
for(pointer=0;pointer<=50;pointer++){
    bubblesortarray[pointer]=pointer;
}
for (pointer=0;pointer<50;pointer++){
        for(ptr=0;ptr<50;ptr++){
    if (bubblesortarray[ptr]>bubblesortarray[ptr+1]){
        temp=bubblesortarray[ptr];
        bubblesortarray[ptr]=bubblesortarray[ptr+1];
        bubblesortarray[ptr+1]=temp;
        }
    }
}
for(pointer=0;pointer<50;pointer++){
    if (pointer%10==0){
        printf("\n");
    }
    printf("%d , ",bubblesortarray[pointer]);
}
}
void sortedbubblesortonscale2000(){
int pointer,ptr,temp ;
int bubblesortarray[2000];
for(pointer=0;pointer<2000;pointer++){
    bubblesortarray[pointer]=pointer;
}
for (pointer=0;pointer<2000;pointer++){
        for(ptr=0;ptr<2000-pointer-1;ptr++){
    if (bubblesortarray[ptr]>bubblesortarray[ptr+1]){
        temp=bubblesortarray[ptr];
        bubblesortarray[ptr]=bubblesortarray[ptr+1];
        bubblesortarray[ptr+1]=temp;
        }
    }
}
for(pointer=0;pointer<2000;pointer++){
    if (pointer%10==0){
        printf("\n");
    }
    printf("%d , ",bubblesortarray[pointer]);
}
}
void sortedbubblesortonscale500(){
int pointer,ptr;
int temp ;
int bubblesortarray[500];
for(pointer=0;pointer<500;pointer++){
bubblesortarray[pointer]=pointer;
}
for (pointer=0;pointer<500;pointer++){
for (ptr=0;ptr<500-pointer-1;ptr++){
if (bubblesortarray[ptr]>bubblesortarray[ptr+1]){
temp=bubblesortarray[ptr];
bubblesortarray[ptr]=bubblesortarray[ptr+1];
bubblesortarray[ptr+1]=temp;
        }
        }
}
for(pointer=0;pointer<500;pointer++){
    if (pointer%10==0){
        printf("\n");
    }
    printf("%d , ",bubblesortarray[pointer]);
}
}
void randombubblesortonscale500(){
long pointer,ptr;
//int temp ;
int x;
int bubblesortarray[500];

for(pointer=0;pointer<500;pointer++){
x=(rand()%500);
//srand(time(NULL))%10;
bubblesortarray[pointer]=x;
}
for (pointer=0;pointer<500;pointer++){
        for(ptr=0;ptr<500-pointer-1;ptr++){
    if (bubblesortarray[ptr]>bubblesortarray[ptr+1]){
        bubblesortarray[ptr]=bubblesortarray[ptr]+bubblesortarray[ptr+1];
        bubblesortarray[ptr+1]=bubblesortarray[ptr]-bubblesortarray[ptr+1];
        bubblesortarray[ptr]=bubblesortarray[ptr]-bubblesortarray[ptr+1];
    }
        }
}
for(pointer=0;pointer<500;pointer++){
    if (pointer%10==0){
        printf("\n");
    }
    printf("%d , ",bubblesortarray[pointer]);
}
}
void randombubblesortonscale50(){
long pointer,ptr;
int temp ;
int x;
int bubblesortarray[50];

for(pointer=0;pointer<50;pointer++){
x=(rand()%50);
//srand(time(NULL))%10;
bubblesortarray[pointer]=x;
}
for (pointer=0;pointer<50-1;pointer++){
        for (ptr=0;ptr<50-pointer-1;ptr++){
    if (bubblesortarray[ptr]>bubblesortarray[ptr+1]){
        bubblesortarray[ptr]=bubblesortarray[ptr]+bubblesortarray[ptr+1];
        bubblesortarray[ptr+1]=bubblesortarray[ptr]-bubblesortarray[ptr+1];
        bubblesortarray[ptr]=bubblesortarray[ptr]-bubblesortarray[ptr+1];
    }
        }
}
        for(pointer=0 ; pointer <50;pointer++){
            if (pointer%10==0){
                printf("\n");
            }
            printf("%d , ",bubblesortarray[pointer]);
        }
}
void randombubblesortonscale2000(){
long pointer,ptr;
int temp ;
int x;
int bubblesortarray[2000];

for(ptr=0;ptr<2000;ptr++){
x=(rand()%2000);
//srand(time(NULL))%10;
bubblesortarray[ptr]=x;
}
for (pointer=0;pointer<2000;pointer++){
        for(ptr=0;ptr<2000-pointer-1;ptr++){
    if (bubblesortarray[ptr]>bubblesortarray[ptr+1]){
        bubblesortarray[ptr]=bubblesortarray[ptr]+bubblesortarray[ptr+1];
        bubblesortarray[ptr+1]=bubblesortarray[ptr]-bubblesortarray[ptr+1];
        bubblesortarray[ptr]=bubblesortarray[ptr]-bubblesortarray[ptr+1];
    }
        }
}
for(pointer=0;pointer<2000;pointer++){
    if (pointer%10==0){
        printf("\n");
    }
    printf("%d , ",bubblesortarray[pointer]);
}
}
void inverslylinearsortscale2000(){
int arrayoflinearsort[2000];
int ptr,ptr2;
int minvalue,svalue,cvalue;
for(ptr=2000;ptr>0;ptr--){
    arrayoflinearsort[ptr]=ptr;
}
for (svalue = 0; svalue < 2000 - 1; svalue++) {
                minvalue = svalue;
for (cvalue = svalue + 1; cvalue < 2000; cvalue++) {
if (arrayoflinearsort[cvalue] < arrayoflinearsort[minvalue]) {
minvalue = cvalue;
}
}
}
for(ptr=0;ptr<2000;ptr++){
    if(ptr%10==0){printf("\n");}
    printf("%d , ",arrayoflinearsort[ptr]);
}

}
void inverslylinearsortscale500(){
int arrayoflinearsort[500];
int ptr,ptr2;
int minvalue,svalue,cvalue;
for(ptr=500;ptr>0;ptr--){
    arrayoflinearsort[ptr]=ptr;
}
for (svalue = 0; svalue < 500 - 1; svalue++) {
                minvalue = svalue;
for (cvalue = svalue + 1; cvalue < 500; cvalue++) {
if (arrayoflinearsort[cvalue] < arrayoflinearsort[minvalue]) {
minvalue = cvalue;
}
}
}
for(ptr=0;ptr<500;ptr++){
    if(ptr%10==0){printf("\n");}
    printf("%d , ",arrayoflinearsort[ptr]);
}
}
void inverslylinearsortscale50(){
int arrayoflinearsort[50];
int ptr,ptr2;
int minvalue,svalue,cvalue;
for(ptr=50;ptr>0;ptr--){
    arrayoflinearsort[ptr]=ptr;
}
for (svalue = 0; svalue < 50 - 1; svalue++) {
                minvalue = svalue;
for (cvalue = svalue + 1; cvalue < 50; cvalue++) {
if (arrayoflinearsort[cvalue] < arrayoflinearsort[minvalue]) {
minvalue = cvalue;
}
}
}
for(ptr=0;ptr<50;ptr++){
    if(ptr%10==0){printf("\n");}
    printf("%d , ",arrayoflinearsort[ptr]);
}
}
void sortedlinearsortscale2000(){
int arrayoflinearsort[2000];
int ptr;
int minvalue,svalue,cvalue;
for(ptr=0;ptr<2000;ptr++){
    arrayoflinearsort[ptr]=ptr;
}
for (svalue = 0; svalue < 2000 - 1; svalue++) {
                minvalue = svalue;
for (cvalue = svalue + 1; cvalue < 2000; cvalue++) {
if (arrayoflinearsort[cvalue] < arrayoflinearsort[minvalue]) {
minvalue = cvalue;
}
}
}
for(ptr=0;ptr<2000;ptr++){
    if(ptr%10==0){printf("\n");}
    printf("%d , ",arrayoflinearsort[ptr]);
}
}
void sortedlinearsortscale500(){
int arrayoflinearsort[500];
int ptr;
int minvalue,svalue,cvalue;
for(ptr=0;ptr<500;ptr++){
    arrayoflinearsort[ptr]=ptr;
}
for (svalue = 0; svalue < 500 - 1; svalue++) {
                minvalue = svalue;
for (cvalue = svalue + 1; cvalue < 500; cvalue++) {
if (arrayoflinearsort[cvalue] < arrayoflinearsort[minvalue]) {
minvalue = cvalue;
}
}
}
for(ptr=0;ptr<500;ptr++){
    if(ptr%10==0){printf("\n");}
    printf("%d , ",arrayoflinearsort[ptr]);
}
}
void sortedlinearsortscale50(){
int arrayoflinearsort[500];
int ptr;
int minvalue,svalue,cvalue;
for(ptr=0;ptr<50;ptr++){
    arrayoflinearsort[ptr]=ptr;
}
for (svalue = 0; svalue < 50 - 1; svalue++) {
                minvalue = svalue;
for (cvalue = svalue + 1; cvalue < 50; cvalue++) {
if (arrayoflinearsort[cvalue] < arrayoflinearsort[minvalue]) {
minvalue = cvalue;
}
}
}
for(ptr=0;ptr<50;ptr++){
    if(ptr%10==0){printf("\n");}
    printf("%d , ",arrayoflinearsort[ptr]);
}
}
void randomlinearsortscale2000(){
int arrayoflinearsort[2000];
int ptr;
int minvalue,svalue,cvalue;
for(ptr=0;ptr<2000;ptr++){

//srand(time(NULL))%10;
arrayoflinearsort[ptr]=(rand()%2000);
}
for (svalue = 0; svalue < 2000 - 1; svalue++) {
                minvalue = svalue;
for (cvalue = svalue + 1; cvalue < 2000; cvalue++) {
if (arrayoflinearsort[cvalue] < arrayoflinearsort[minvalue]) {
minvalue = cvalue;
}
}
}
for(ptr=0;ptr<2000;ptr++){
    if(ptr%10==0){printf("\n");}
    printf("%d , ",arrayoflinearsort[ptr]);
}
}
void randomlinearsortscale500(){
int arrayoflinearsort[500];
int ptr;
int minvalue,svalue,cvalue;
for(ptr=0;ptr<500;ptr++){

//srand(time(NULL))%10;
arrayoflinearsort[ptr]=(rand()%500);
}
for (svalue = 0; svalue < 500 - 1; svalue++) {
                minvalue = svalue;
for (cvalue = svalue + 1; cvalue < 500; cvalue++) {
if (arrayoflinearsort[cvalue] < arrayoflinearsort[minvalue]) {
minvalue = cvalue;
}
}
}
for(ptr=0;ptr<500;ptr++){
    if(ptr%10==0){printf("\n");}
    printf("%d , ",arrayoflinearsort[ptr]);
}
}
void randomlinearsortscale50(){

int arrayoflinearsort[50];
int ptr;
int minvalue,svalue,cvalue;
for(ptr=0;ptr<50;ptr++){

//srand(time(NULL))%10;
arrayoflinearsort[ptr]=(rand()%50);
}
for (svalue = 0; svalue < 50 - 1; svalue++) {
                minvalue = svalue;
for (cvalue = svalue + 1; cvalue < 50; cvalue++) {
if (arrayoflinearsort[cvalue] < arrayoflinearsort[minvalue]) {
minvalue = cvalue;
}
}
}
for(ptr=0;ptr<50;ptr++){
    if(ptr%10==0){printf("\n");}
    printf("%d , ",arrayoflinearsort[ptr]);
}
}
void sortedquicksortscale50(){
int arr[50];
int ptr;
for(ptr=0;ptr<50;ptr++){
    arr[ptr]=ptr;
}
int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: n");
    printArray(arr, n);
}
void sortedquicksortscale500(){
int arr[500];
int ptr;
for(ptr=0;ptr<500;ptr++){
    arr[ptr]=ptr;
}
int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: n");
    printArray(arr, n);
}
void sortedquicksortscale2000(){
int arr[2000];
int ptr;
for(ptr=0;ptr<2000;ptr++){
    arr[ptr]=ptr;
}
int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: n");
    printArray(arr, n);
}
void randomsortedquicksortscale500(){
int arr[500];
int ptr;
for(ptr=0;ptr<500;ptr++){
    arr[ptr]=(rand()%2000);
}
int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: n");
    printArray(arr, n);
}
void randomsortedquicksortscale50(){
int arr[50];
int ptr;
for(ptr=0;ptr<50;ptr++){
    arr[ptr]=(rand()%200);
}
int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: n");
    printArray(arr, n);
}
void randomsortedquicksortscale2000(){
int arr[2000];
int ptr;
for(ptr=0;ptr<2000;ptr++){
    arr[ptr]=(rand()%2000);
}
int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: n");
    printArray(arr, n);
}
void inverslysortedquicksortscale2000(){
int arr[2000];
int ptr;
for(ptr=2000;ptr>0;ptr--){
    arr[ptr]=ptr;
}
int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: n");
    printArray(arr, n);
}
void inverslysortedquicksortscale500(){
int arr[500];
int ptr;
for(ptr=500;ptr>0;ptr--){
    arr[ptr]=ptr;
}
int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: n");
    printArray(arr, n);
}
void inverslysortedquicksortscale50(){
int arr[50];
int ptr;
for(ptr=50;ptr>0;ptr--){
    arr[ptr]=ptr;
}
int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr, 0, n-1);
    printf("Sorted array: n");
    printArray(arr, n);
}
int main()
{
int choice;
while(1){
printf("please enter your sort ? \n ");
printf("1- inversly sorted using bubble sort on scale50 \n 2- inversly sorted using insertion sort on scale50 \n 3- inversly sorted using quicksort on scale50 \n 4- sorted using bubble sort on scale50 \n 5-sorted using insertion sort on scale50 \n 6-sorted using quick sort on scale50 \n 7-random sort using bubble sort on scale50 \n 8-random sort using insertion sort on scale50\n 9-random sort using quick sort on scale50 \n ");
printf("10- inversly sorted using bubble sort on scale500 \n 11- inversly sorted using insertion sort on scale500 \n 12- inversly sorted using quicksort on scale500 \n 13- sorted using bubble sort on scale500 \n 14-sorted using insertion sort on scale500 \n 15-sorted using quick sort on scale500 \n 16-random sort using bubble sort on scale500 \n 17-random sort using insertion sort on scale500\n 18-random sort using quick sort on scale500 \n ");
printf("19- inversly sorted using bubble sort on scale2000 \n 20- inversly sorted using insertion sort on scale2000 \n 21- inversly sorted using quicksort on scale2000 \n 22- sorted using bubble sort on scale2000 \n 23-sorted using insertion sort on scale2000 \n 24-sorted using quick sort on scale2000 \n 25-random sort using bubble sort on scale2000 \n 26-random sort using insertion sort on scale2000\n 27-random sort using quick sort on scale2000 \n ");
scanf("%d",&choice);
switch(choice){
case 1: inverslybubblesortonscale50(); break;
case 2: inverslylinearsortscale50(); break;
case 3: inverslysortedquicksortscale50(); break;
case 4: sortedbubblesortonscale50(); break;
case 5: sortedlinearsortscale50(); break;
case 6: sortedquicksortscale50();break;
case 7: randombubblesortonscale50();break;
case 8: randomlinearsortscale50();break;
case 9: randomsortedquicksortscale50(); break;
case 10: inverslybubblesortonscale500();break;
case 11: inverslylinearsortscale500();break;
case 12: inverslysortedquicksortscale500(); break;
case 13: sortedbubblesortonscale500(); break;
case 14: sortedlinearsortscale500(); break;
case 15: sortedquicksortscale500();break;
case 16: randombubblesortonscale500();break;
case 17: randomlinearsortscale500();break;
case 18: randomsortedquicksortscale500(); break;
case 19: inverslybubblesortonscale2000(); break;
case 20: inverslylinearsortscale2000();break;
case 21: inverslysortedquicksortscale2000();break;
case 22:  sortedbubblesortonscale2000();break;
case 23: sortedlinearsortscale2000();break;
case 24: sortedquicksortscale2000(); break;
case 25: randombubblesortonscale2000();break;
case 26: randomlinearsortscale2000();break;
case 27: randomsortedquicksortscale2000();break;
}
printf("\n \n \n \n");
}










}

