## Exercício proposto

1) - Preenche a matriz N x N com números inteiros aleatórios de 0 a 99;
2) - Considere a posição Linha 0 e Coluna 0 (0,0) como início;
3) - Considere a posição (N, N) como posição final;
4) - Percorra a matriz a partir do início, somando a cada passo, o próximo maior valor encontrado;
5) - O próximo valor pode ser o que está na mesma linha e imediatamente à direita, imediatamente à esquerda, bem como, o que está na coluna abaixo do numero corrente;
6) - Há apenas uma exceção de percurso. Ao chegar na última linha deve-se percorre-la até o fim sem realizar mais migrações para colunas acima. 
7) - Andando na matriz conforme as regras acima, qual o maior caminho do início até o final, sabendo-se que a soma das posições representa o tamanho do caminho.

## Explicando a lógica do programa

Foi usado uma técnica chamada de <strong>Algoritmo Guloso</strong> para resolver esse problema, que se baseia em "comer" o valor por onde ele passou para que o mesmo não entre em um looping.<br>

Ele funciona da seguinte forma: Digamos que o programa esteja na posição [0][0] e que o melhor valor que achou para ir seja [0][1], então o algoritmo irá "comer" o valor da sua posição atual, setando ela como "-1" e indo para a próxima posição que é [0][1], assim deixando um rastro por onde ele passou.

## Perguntas

### 1) Há mais de uma maneira de resolver esse problema ?

Sim, pode-se usar também um método de marcação de posição, onde se a posição for para a direita essa marcação é ativada, e ela só é desativada se a posição descer na matriz, para que possa se mover para a esquerda também. (Usei um exemplo seguindo para a direita, mas também serve para o inverso).

### 2) Há algoritmos em literatura que resolvam esse problema ?

O algoritmo guloso é um algoritmo que está em literatura, e resolve o problema.

### 3) Pode existir mais de um caminho cujo valor total é o maximo?

Acredito que sim, mas depende da aleatoriedade da matriz criada.
