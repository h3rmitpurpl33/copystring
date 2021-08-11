void copychar(char *x, char *ptr, int i, int length, int cnt);
int main(){
char str[100] , *p=str;
int len,a=0,counter =0;
printf("enter text : ");
len = read_text(str,sizeof(str),1);
copychar(str,p,a,len,counter);
return 0;
}
void copychar(char *x, char *ptr, int i, int length, int cnt){
    for(i=0;i<length;i++){
        if((ptr[i] >= 'a' && ptr[i] <= 'z') || (ptr[i] >= 'A' && ptr[i] <= 'Z')){
            strcpy(&x[cnt],&ptr[i]);
            puts(x);
            cnt++;
        }else{
            continue;
        }
    }
}

