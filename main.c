#include <stdio.h>
#include <stdlib.h>



void itcc_sort(int num)
{
    int arr[12]={6,8,2,11,9,10,5,5,9,6,13,2};

    int i, j, k, tmp;
    for (i = num / 2; i > 0; i = i / 2)
    {
        for (j = i; j < num; j++)
        {
            for(k = j - i; k >= 0; k = k - i)
            {
                if (arr[k+i] >= arr[k])
                    break;
                else
                {
                    tmp = arr[k];
                    arr[k] = arr[k+i];
                    arr[k+i] = tmp;
                }
            }
        }
    }

    for(i=0;i<12;i++){
    printf(" %d ",arr[i]);
}
}




char j;
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int arr[], int size){
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
}

int partition (int arr[], int bawah, int atas)
{
    int pivot = arr[atas];
    int i = (bawah - 1);

    for (int k = bawah; k <= atas- 1; k++)
    {
        if (arr[k] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[k]);
        }
    }
    swap(&arr[i + 1], &arr[atas]);
    return (i + 1);
}
void quickSort(int arr[], int bawah, int atas){
    if (bawah < atas){
        int partisi = partition(arr, bawah, atas);
        quickSort(arr, bawah, partisi - 1);
        quickSort(arr, partisi + 1, atas);
    }
}
void quickSortHandler(int arr[],int n){
    quickSort(arr, 0, n-1);
    printf("Hasil pengurutan Quick Sort : \n");
    printArray(arr, n);

}


int b,c;
int a,z;
//soal no 1
int  itcc2019(int a){

    if(a>0){
        a=-3;
    }
    if(a<0){
        a+=1;
    }
    return a;
}
//soal no 2
void itcc (){
    int j=9,i;
    for(i=0;i<=j;i+=3){
        if(i&j){
            printf(" %d ",j-i);
        }
        if(i>0){
            printf(" %d ",i+1);
        }
        if(i<0){
             printf(" %d ",i-1);
        }
    }

}

void itcc2a(){
    int j=5,i;
    for(i=1;i<=j;i++){
        if(j&i){
            printf("* ");
        }
        if(i>0){
            printf("** ");
            printf("\n");
        }

    }
}

void itcc_c(){
    int i=1;
    int a=1,n=6;
    while (a<=n){
        int b=a;
        while(b<=n){
            int c=b;
            while(c<=n){
                printf("*");
                printf(" %d ",i);
                i++;
                c++;
            }
            printf("\n");
            b++;
        }
        a++;
    }
}

/*
procedure bintang() begin
int j=5,i
for i=1 to j begin
    if i&j then
        write"* "
    end if
    if i>0 then
        write "** \n"
    end if
end for
end procedure

*/



//soal 3
void itcc2(){
    int j,i;
    for(i=0;i<5;i++){
        for(j=5;j>i;j--){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("*");
        }
         for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");
    }

}
//soal no 4
int itcc3(int i){
    int j=0;
   if(i>0){
     while(j<i){
        printf("*");
        j++;
    }
    printf("\n");
   }else{
    return 0;
   }
    return itcc3(i-1);
}

//soal no 5
void itcc4(long long umu){
 int hasil = 0, i = 0, owo;
    while (umu!=0){
        owo = umu%10;
        umu /= 10;
        hasil += owo*pow(2,i);
        ++i;
    }
    printf("%d",hasil);
}

//soal no 6
void itcc5(int n){
    int a,b,c;
    for(b=1;b<n;b++){
        for(c=b, a=1; !(c&1); c>>=1, a++);
        printf(" %d ",c);
    }

}


//soal np 7

void itcc7(){
    //soal ada di note

}
//soal no 8
void itcc8(int x,int y){
int z = 10;
x/=z;
z=-x;
y=z;
a=x;
z=y;
}

//soal no 9
void itcc9(){
int a,g,c;
a=15;
g=pow((37%a),2);
c=(a+g)-g+(37%a);
printf("\n\n%d",c);
}
//blm fix
void itcc10(){
    int a,b,c,n;
    a = 10;
    b = 8;
    c = 3;
    n = 0;
    itcc:
    if(a > b){
        if(b > c){
            n = a * c;
            b--;

            goto itcc;

        }else {
             n = b * c;
        }

    }else if(b < c){
        if(a < c) n = c + b;
        else n = a + c;
    }
    printf("%d", n+b);

}

void pengurutan(int N){
int data[12] = {6,8,2,11,8,10,7,12,9,6,6,2};
int i,j,min,temp;

for(i=0;i<N-1;i++){
    min=i;
    for(j=i+1;j<N;j++){
        if(data[j]<data[min]){
            min=j;
        }
        temp=data[i];
        data[i]=data[min];
        data[min]=temp;
    }
}

for(i=0;i<12;i++){
    printf(" %d ",data[i]);
}

}



int main()
{
    printf("Hello world!\n");
    //soal no 1
   printf("%d\n",itcc2019(2));
    //soal no 2
    itcc();
    //soal no 3
    itcc2();

    //soal no 4
    printf("\nsoal no itcc3\n");
    itcc3(4);
    //soal no 5
     printf("\nsoal no itcc4\n");
    itcc4(200);
    //soal no 6
     printf("\nsoal no itcc5\n");
    itcc5(7);
    printf("\n");
    a=100;
    z=25;
     printf("\nsoal no itcc8\n");
    itcc8(a,z);
    printf("%d",a+z);
printf("\nsoal no itcc9\n");
    itcc9();
    printf("\n");
    //itcc2a();
   // itcc_c();
   // itcc10();
    printf("\n");
    pengurutan(12);
    printf("\n");
    pengurutan(4);
    printf("\n");
    pengurutan(8);
    printf("\n");
    pengurutan(5);
    printf("\n");
    pengurutan(6);

    printf("\n");
    int data[12] = {6,8,2,11,8,10,7,12,9,6,6,2};
  //  quickSortHandler(data,8);
  printf("\n");
  itcc_sort(12);
  printf("\n");
  itcc_sort(3);
  printf("\n");
  itcc_sort(2);
  printf("\n");
  itcc_sort(5);
  printf("\n");
  itcc_sort(6);
    printf("\nitcc10\n");
    itcc10();
    return 0;
}
