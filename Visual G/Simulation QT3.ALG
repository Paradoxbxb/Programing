Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 23/09/2019
Var
// Se��o de Declara��es das vari�veis 
nt1,nt2,nt3,nt4,media:real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
escreva ("Nota da primeira Av: ")
leia (nt1)
escreva ("Nota da segunda Av: ")
leia (nt2)
escreva ("Nota da terceira AV: ")
leia (nt3)
escreva ("Nota da quarta AV: ")
leia (nt4)
media := (nt1 + nt2 + nt3 + nt4)/4;

se (media < 7)entao
 escreva ("Sua m�dia �: ",media)
 escreva (" - Voc� foi reprovado")
fimse
se (media >= 7)entao
 escreva ("Sua media �: ",media)
 escreva(" - Voc� foi aprovado")
fimse
Fimalgoritmo