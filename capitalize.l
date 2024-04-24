%{
#include <stdio.h>
#include <ctype.h>

void capitalize(char * str)
{
    int i;
    for (i = 0; str[i]; i++) {
        str[i] = toupper(str[i]);
    }
    printf("%s",str);
}



%}

STRING [a-zA-Z]+


%%
. {capitalize(yytext);}
%%


main()
{
	yylex();
}

int yywrap()
{
	return 1;
}

