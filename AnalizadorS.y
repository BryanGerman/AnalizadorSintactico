%{
    #include <stdio.h> 
    int yylex(void); 
    void yyerror(char *); 
	extern FILE *yyin;
	extern FILE *salida;
%} 
/*%token Lit_int
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

program:
	expr
	|
	;

expr: 
	TipoDato Identificador    {printf("TipoDato : Identificador");}
        | Identificador IGUAL valor         {printf("Identificador IGUAL");}
        ; 

valor:  Lit_int			{printf("Lit_int");}
	|Lit_float		{printf("Lit_float");}
	;
*/
%token Lit_int
%token IGUAL
%token Palabra_reservada
%token Identificador
%token Operador
%token Opcompuesto
%token TipoDato
%token Lit_float
%token Lit_bool
%token Lit_char
%token Lit_String
%token ASIGNACION
%token PUNTOCOM
%token SEPARADOR
%%
prog: 

	expr
	|asignacionglobal
	|funcion
	;
expr:
	Identificador IGUAL valor
	;
asignacionglobal:
TipoDato ASIGNACION Identificador PUNTOCOM  	{fprintf(salida,"hola");}
|asignacionLocal PUNTOCOM
;
valor: Lit_int 
|Lit_float 
|Lit_char
|Lit_bool
|Lit_String
;


funcion:
TipoDato Identificador ASIGNACION lista
;
lista:
asignacionLocal
|asignacionLocal SEPARADOR lista
; 
asignacionLocal:
TipoDato ASIGNACION Identificador
;

%% 
void yyerror(char *s) { 
    fprintf(stderr, "%s\n", s); 
} 
int main(void) { 
	yyin = fopen( "Codigo.txt", "r" );
	salida = fopen("output.txt","w");
    yyparse(); 
    return 0; 
} 
