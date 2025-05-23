#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *questions[]={
    "What is the capital of Bangladesh?",
    "Who is the national poet of Bangladesh?",
    "What is the currency of Bangladesh?"};
    char *options[][4]={{"a)Chittagong","b)Khulna","c)Dhaka","d)Rajshahi"},{"a)Kazi Nuzrul Islam","b)Rabindranath Tagore","c)Jasimuddin","d)Begum Rokeya"},{"a)Taka","b)Rupee","c)Dollar","d)Riyal"}};
    char answer[]={'c','a','a'};
    char useranswer;
    int score=0;
    for(int i=0;i<3;i++){
        printf("\nQ%d.%s\n",i+1,questions[i]);
        for(int j=0;j<4;j++){
            printf("%s\n",options[i][j]);
        }
        printf("Enter your answer(a/b/c/d):");
        scanf("%c",&useranswer);
        if(useranswer==answer[i]){
            printf("Correct\n");
            score++;
        }else{
            printf("Wrong!Correct answer is : %c\n",answer[i]);
        }
    }
    printf("\nYou scored %d out of 3\n",score);
    return 0;
}