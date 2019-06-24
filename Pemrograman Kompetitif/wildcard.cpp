#include <bits/stdc++.h>
using namespace std;

// Bismillah...
//
// Wildcard Problem
// Link : https://training.ia-toki.org/training/curriculums/1/courses/11/chapters/50/problems/221/

/*
bool check(char* str, char* indikator){
    if(*str == *indikator){
        if(*str == '\0'){
            return true; // Base Case
        } else{
            return check(str+1,indikator+1);   
        }
    }else{
        if(*indikator == '*'){
            if(*str == *(indikator+1)){
                return check(str, indikator+1);
            }else if(*str == '\0'){
                return false;
            }else{
                return check(str+1, indikator);
            }
        }else{
            return false;
        }
    }
}
*/

bool check(char str[105], char form[105])
{
    if (strlen(form) - 1 > strlen(str))
    {
        return false;
    }
    else
    {
        for (int i = 0; form[i] != '*'; i++)
        {
            if (str[i] != form[i])
            {
                return false;
            }
        }

        for (int i = 1; form[strlen(form) - i] != '*'; i++)
        {
            if (str[strlen(str) - i] != form[strlen(form) - i])
            {
                return false;
            }
        }

        return true;
    }
}

int main()
{
    char comp[105], tmp[105];
    int n;

    scanf("%s", comp);
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%s", tmp);
        if (check(tmp, comp))
        {
            printf("%s\n", tmp);
        }
    }
}