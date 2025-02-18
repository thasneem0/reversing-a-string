#include<stdio.h>
void input_marks(int *marks,int n){
    printf("enter the mark:");
    for(int i=0;i<n;i++){
        scanf("%d",&marks[i]);
    }
}
float calculateaverage(int *marks,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += marks[i];
    }
    float average = (float)sum / (float)n;
    return average;
}
int main(){
    int n;
    int marks[1000];
    printf("number of students:");
    scanf("%d",&n);
    input_marks(marks,n);
    float average = calculateaverage(marks,n);
    printf("average marks:%.2f",average);
    return 0;
}
