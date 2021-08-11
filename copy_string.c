int main(){
char str[100] , *p;
p = str;
int len,i=0,cnt =0;
printf("enter text : ");
len = read_text(str,sizeof(str),1);
for(i=0;i<len;i++)
{
    if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
        p[cnt] = str[i];
        cnt++;
    }else{
        continue;
    }
}
p[cnt] = '\0';
printf("%s" , p);
return 0;
}
