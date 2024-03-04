Tratamento de Exceções

O tratamento de exceções é um recurso desejável no processo de desenvolvimento
de software por aumentar a robustez dos programas desenvolvidos. O mecanismo
envolve a utilização de blocos try, catch e finally:

...
try {
     << bloco de comandos monitorado >>
} catch( Exceção IdExc ) {
     << bloco executado caso ocorra uma exceção no bloco monitorado >>
     << independente da linguagem, é sempre recebido um identificador para >>
     << uma variável ou objeto identificando a exceção >>
} catch( ... ) {
     << vários catchs podem se suceder, sendo que será executado o primeiro >>
     << catch cujo tipo da variável ou objeto explicitado for compatível com >>
     << a exceção sinalizada >>
} finally {
     << este bloco não é obrigatório no mecanismo de tratamento de exceções >>
     << caso exista, ele é executado sempre, ocorrendo ou não uma exceção >>
     << ou seja, ele executa após o término do bloco try, caso não ocorra >>
     << nenhuma situação de exceção e também após o término de algum bloco >>
     << catch, caso alguma exceção tenha sido capturada >>
     << Importante: Esse bloco (o finally) não está disponível em C++ >>
     <<             Em C++ é possível implementar no destrutor dos objetos >>
     <<             envolvidos o código desejado >>
}

O bloco try abriga o código suscetível a exceções, sendo monitorado em tempo de
execução. Quando ocorre uma exceção, o controle é transferido para o bloco catch
correspondente, onde o programador tem a oportunidade de definir ações específicas
de tratamento para a exceção identificada. Vários blocos catchs podem ser fornecidos,
sendo que será executado o primeiro que for compatível com a exceção levantada.
Portanto, é indicado que as exceções sejam fornecidas da mais específica à mais
genérica. Caso a exceção ocorrida não possua um catch correspondente, o programa
aborta por exceção não tratada.

O bloco finally, quando presente, assegura a execução de código independentemente
de terem ocorrido ou não exceções no bloco try. Isso é útil para tarefas como
liberação de recursos, garantindo que determinadas ações cruciais sejam realizadas,
independentemente do fluxo de controle.

Vale ressaltar que o mecanismo de tratamento de exceções atua como um notificador de
ocorrências, indicando que uma exceção aconteceu, mas delegando ao programador a
responsabilidade de determinar as ações corretivas ou de recuperação necessárias.
Essa abordagem refinada aprimora a resiliência do software, permitindo respostas
controladas e específicas a eventos imprevistos.

Exemplos em Java:

Notas.java
----------
Exemplifica a captura de uma exceção genérica. Neste caso, a exceção
ocorre no primeiro laço, no qual uma posição indevida do vetor é acessada
(o vetor possui posições entre 0 e NUM_ALUNOS-1 e existe o acesso à
posição NUM_ALUNOS. No primeiro laço é capturada a exceção. No segundo,
não. Desta forma é possível visualizar o que ocorre com e sem captura
de exceção.

Idade.java
----------
Exemplifica a captura de exceções provenientes de leitura do teclado, do
fornecimento de uma entrada com o resultado diferente do esperado e de
uma exceção genérica. Observe no exemplo que o catch( Exeption...) somente
ocorrerá quando nenhuma das outras exceções for capturada.

TratamentoExcecoes1.java
------------------------
Exemplifica a cláusula finally. O bloco de comandos associado ao finally
é sempre executado, ocorrendo ou não a exceção. Ou seja, se o bloco try
executar com sucesso, o bloco finally também é executado. Da mesma forma,
havendo uma exceção e executado o bloco catch, finally também é executado.

TratamentoExcecoes2.java
------------------------
Exemplifica a criação de uma nova exceção e sua utilização na detecção de
uma situação não esperada na aplicação.

TratamentoExcecoes3.java
------------------------
Exemplifica a criação de uma nova exceção, a qual indica que a tentativa
de saque em um Cofrinho não foi possível por insuficiência de saldo. Neste
caso, a exceção levantada é capturada e um procedimento de recuperação
A recuperação, no caso, é a solicitação de um empréstimo e a realização
de uma nova tentativa de saque.
