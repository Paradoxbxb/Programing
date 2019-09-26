Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 23/09/2019
Var
// Seção de Declarações das variáveis 
nt1,nt2,nt3,nt4,media:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
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
 escreva ("Sua média é: ",media)
 escreva (" - Você foi reprovado")
fimse
se (media >= 7)entao
 escreva ("Sua media é: ",media)
 escreva(" - Você foi aprovado")
fimse
Fimalgoritmo