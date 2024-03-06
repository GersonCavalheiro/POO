Introdução à programação concorrente: Threads em Java

Os dois programas em Java apresentados ilustram o uso de threads nessa linguagem. Ambos programas oferecem a mesma saída: o somatório de todos os valores em um vetor de inteiros. Ambos também criam diversos threads, cada thread responsável pelo somatório dos elementos em um segmento do vetor. São usadas duas abordagens. Na primeira, cada thread armazena no seu estado interno a soma parcial e ao final dos threads, este estado local é lido para ser realizada a soma final. Na segunda versão existe um objeto do tipo Acumulador compartilhado entre os threads e todos os threads acessam este objeto compartilhado de forma sincronizada, garantido exclusão mutua no acesso.

Observação:
- Como de praxe, são apresentados os exemplos também em C++, Python e Rust. Para gerar o código em C++ é necessário ligar com a biblioteca Pthreads (mais sobre isso em SO), faça o seguinte comando:
$> g++ SomaVetor1.cpp -lpthread
