#include <stdio.h>

int main(void) {
    #include <stdio.h>
#include <string.h>

int main(){
    char line[50];
    int panjang = strlen(line);
    int found = 1;
    char temp;
    int index=0;
    int i=0;
    int deb=0;
    scanf("%s", line);
    while(found == 1 && deb<13){
        printf("**\n");
        for(int index; index<panjang; index++){
            temp = line[index];
            if(line[index]== '(' || line[index]== ')'){
                found =1;
                i=index;
                break;
            }
            else{
                found = 0;
            }
        }
        
        if(temp== ')' && temp !='('){
            printf("yes masuk sini!\n");
            line[i]= '2';
            index = 0;
        }
        
        // a)a(i())(dfd( => a2a(i())(dfd( => a2a(i01)(dfd( => a-1a0i011(dfd( => a-1a0i011(dfd-1 => a-1a0i011-1dfd-1
        else if(temp=='(' && temp !=')'){
            int tempIndex = i;
            printf("tempIndex = %d\n", tempIndex);
            for(int j=tempIndex; j< panjang-tempIndex+3; j++){
                printf("temp = %c\n", temp);
                if(line[j]=='('){
                    if(j!=panjang-1){
                        index = j;
                    }
                    else{
                        line[j]='2';
                        index= 0;
                        printf("temp = %c\n", temp);
                        break;
                    }
                }
                else if(line[j]==')'){
                    line[j]='1';
                    line[i]= '0';
                    index =0;
                    printf("temp = %c\n", temp);
                    break;
                }
            }
        }
        deb++;
    }

    printf("%d", strlen(line));
    for(int k =0; k<panjang; k++){
        if(line[k]=='0'){
            printf("(");
        }
        else if(line[k]=='1'){
            printf(")");
        }
        else if(line[k]!= '2' && line[k]!='0' && line[k]!='1'){
            printf("%c", line[k]);
        }
    }

    return 0;
}


//aa(i())dfd
    return 0;
}
