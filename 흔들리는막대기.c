#include<stdio.h>
#include <string.h>

int main(){
    //카운트 변수 선언
    int cnt_1;
    int cnt_i;
    int cnt_l;
    int cnt_pipe;
    char input[100];
    
    scanf("%[^\n]s",input);
    char *p = input; //문자를 가져오기 위해 input에 대한 포인터 정의
    
    //check input
    for (int i = 0; i <= 100; i++){
        if (p[i] == 49){
            cnt_1++;
        }
		if (p[i] == 73){
            cnt_i++;
        }
        if (p[i] == 108){
            cnt_l++;
        }
        if (p[i] == 124){
            cnt_pipe++;
        }
    }
    //print
    printf("%d\n%d\n%d\n%d\n",cnt_1,cnt_i,cnt_l,cnt_pipe);
    return 0;
}