int read_text(char str[], int size, int flag);

int main() {
    char str[100], *p;
    p = str;
    int len, i = 0, cnt = 0;
    printf("enter text : ");
    len = read_text(str, sizeof(str), 1);
    for (i = 0; i < len; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] == ' ')) {//added some code to include spaces
            p[cnt] = str[i];
            cnt++;
        } else {
            continue;
        }
    }
    p[cnt] = '\0';//give the null character, so the compiler can detect, that it points to a string
    printf("%s", p);
    return 0;
}

int read_text(char string[], int size, int flag) {
    int len;
    if (fgets(string, size, stdin) == NULL) {
        printf("error : fgets() failed\n");
        exit(EXIT_FAILURE);
    }
    len = strlen(string);
    if (len > 0) {
        if (flag && (string[len - 1] == '\n')) {
            string[len - 1] = '\0';
            len--;
        }
    } else {
        printf("error : no input\n");
        exit(EXIT_FAILURE);
    }
    return len;
}
