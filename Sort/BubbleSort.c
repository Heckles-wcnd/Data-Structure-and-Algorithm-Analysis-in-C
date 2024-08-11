#include <stdio.h>
#include <string.h>

//bubble sort

// define an array
int arr[] = {30, 50, 20, 10, 60, 40};
// calculate the number of elements
int len = sizeof(arr) / sizeof(arr[0]);

// swap func
int Swap(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

}

// print array out
void Printarr(int *p, int n){
    for(int i = 0; i < n; i++){
        printf("%d ", p[i]);
    }
    printf("\n");
}

// less than
int Less(int a, int b){
    return a < b;
}

// greater than
int Greater(int a, int b){
    return a > b;
}

// bubble sort func
void Bubblesrt_de(int *p, int n){
    for(int iMax = n - 2; iMax >=0; iMax--){
        for(int i = 0; i <= iMax; i++){
            if(Less(*(p + i),*(p + i + 1)))
                Swap((p + i), (p + i + 1));
        }
    }
}

void Bubblesrt_a(int *p, int n){
    for(int iMax = n - 2; iMax >=0; iMax--){
        for(int i = 0; i <= iMax; i++){
            if(Greater(*(p + i),*(p + i + 1)))
                Swap((p + i), (p + i + 1));
        }
    }
}

int main(void){
    char input[20];
    printf("please input 'ascend' or 'descend'\n");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = 0;

    if(strcmp(input, "ascend") == 0){
        printf("before sorting\n");
        Printarr(arr, len);
        Bubblesrt_a(arr, len);
        printf("after sorting\n");
        Printarr(arr, len);
    }else if (strcmp(input, "descend") == 0)
    {
        printf("before sorting\n");
        Printarr(arr, len);
        Bubblesrt_de(arr, len);
        printf("after sorting\n");
        Printarr(arr, len);
    }else printf("enter errors\n");
    return 0;
}