%{
    #include <stdio.h> 
    int yylex(void); 
    void yyerror(char *); 
%} 
%token Lit_int
%token IGUAL
%token Palabra_reservada
%token Identificador
%token Operador
%token Opcompuesto
%token dospuntos
%token TipoDato
%token Lit_float
%token Lit_bool
%token Lit_char
%token Lit_String



%% 


expr: 
	TipoDato Identificador    {printf("TipoDato : Identificador");}
        | Identificador IGUAL valor         {printf("Identificador IGUAL %s", yytext);}
        ; 

valor:  Lit_int			{printf("Lit_int");}
	|Lit_float		{printf("Lit_float");}


%% 
void yyerror(char *s) { 
    fprintf(stderr, "%s\n", s); 
} 
int main(void) { 
    yyparse(); 
    return 0; 
} 
