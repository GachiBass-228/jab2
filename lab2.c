#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
int main() {
    //Объявляем массив символов и считываем его
    char stroka[255];
    printf("Input words: ");
    gets(stroka);

    //Находим количество символов в строке
    int N = 0, a = 0;
    while (stroka[a] != '\0')
    {
        a++;
        N++;
    }
    //Переменная для текущего состояния в программе
    int flag = 0, flag2, flag3 = 0;
    int i = 0, j;
    // Индексы для вывода слова
    int b = 0, c = 0;
    for (i = 0; i < N; i++)
    {
        

            flag2 = 1;

            if (stroka[i - 1] == ' ' || stroka[i-1] == '\t') {
                flag = 0;
                flag2 = 0;
            }
            else
            {
                flag = 1;
            }
            if (flag2 == 0) {
                b = i;
            }
            if ((stroka[i] == ' ' || stroka[i] == '\t') && (flag == 1))
            {

                c = i - 1;
                if ((stroka[i - 1] == 'A' || stroka[i - 1] == 'a' || stroka[i - 1] == 'O' || stroka[i - 1] == 'o' || stroka[i - 1] == 'E' || stroka[i - 1] == 'e' || stroka[i - 1] == 'I' || stroka[i - 1] == 'i' || stroka[i - 1] == 'U' || stroka[i - 1] == 'u'))
                
                {
                    flag3 = 0;
                    for (j = b; j <= c; j++) {
                           if ((stroka[j] == '1' || stroka[j] == '2' || stroka[j] == '3' || stroka[j] == '4' || stroka[j] == '5' || stroka[j] == '6' || stroka[j] == '7' || stroka[j] == '8' || stroka[j] == '9' || stroka[j] == '0' || stroka[j] == '-' || stroka[j] == '=' || stroka[j] == '+' || stroka[j] == ']' || stroka[j] == '[' || stroka[j] == '{' || stroka[j] == '}' || stroka[j] == '_' || stroka[j] == ';' || stroka[j] == ':' || stroka[j] == '"' || stroka[j] == ',' || stroka[j] == '.' || stroka[j] == '/' || stroka[j] == '<' || stroka[j] == '>' || stroka[j] == '?' || stroka[j] == '|')){
                        
                            flag3 = 1;
                        }

                        }
                    if (flag3 != 1) {

                        for (j = b; j <= c; j++)
                        {
                            printf("%c", stroka[j]);

                        }
                        printf(" ");
                    }
                }
                b = c + 1;
            }



        
     
        
    }
    c = i - 1;
    if ((stroka[i - 1] == 'A' || stroka[i - 1] == 'a' || stroka[i - 1] == 'O' || stroka[i - 1] == 'o' || stroka[i - 1] == 'E' || stroka[i - 1] == 'e' || stroka[i - 1] == 'I' || stroka[i - 1] == 'i' || stroka[i - 1] == 'U' || stroka[i - 1] == 'u'))
    {
        for (j = b; j <= c; j++)
        {
            printf("%c", stroka[j]);
        }
        printf(" ");
    }

    }

                     
                       

        