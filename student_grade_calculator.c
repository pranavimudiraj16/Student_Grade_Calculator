#include<stdio.h>
//Student grade calculator 
int main(){ 
int num_subjects,i;
float marks[100],total,average,percentage;
char grade;
printf("enter number of subjects:");
scanf("%d",&num_subjects);
for(i=0;i<num_subjects;i++){
printf("enter marks for the subject %d",i+1);
scanf("%f",&marks[i]);
if(marks[i]<0 || marks[i]>100){
printf("invalid marks\n");
}
total=total+marks[i];
}
average=((float)total/num_subjects);
percentage=((float)total/(num_subjects*100))*100;
if (percentage>=90){
grade='A';
}
else if(percentage>=80){
grade='B';
}
else if(percentage>=70){
grade='C';
}
else if(percentage>=60){
grade='D';
}
else if(percentage>=50){
grade='E';
}
else{
grade='F';
}
printf("\n---STUDENT RESULT---\n");
printf("Total marks=%f\n",total);
printf("Average marks=%f\n",average);
printf("Percentage=%f\n",percentage);
printf("Grade=%c\n",grade);
return 0;
}
