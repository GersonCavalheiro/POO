Nossa disciplina será baseada no ambiente Linux.

Verifique a disponibilidade das linguagens Python, Rust, Java e C++
no seu computador.

Python: Utilizaremos Python na sua versão 3 (ou seja, Python3.x).
        Verifique executando o seguinte comando:
        $> python3 --version
        Se a saída for algo do tipo "Python 3.7.0", então tudo OK. Caso
        contrário, pegue informações de instalação a partir de
        https://www.python.org/

Rust:   Primeiro verifique se o compilador do Rust está disponível
        executando o seguinte comando:
	$> rustc --version
        Depois verifique se o gerenciador de pacotes Cargo está disponível:
	$> cargo --version
        Se a saída for algo do tipo "rustc 1.65.0" no teste do compilador
	e algo do tipo "cargo 1.65.0", então tudo OK. Caso contrário, pegue
	informações de instalação a partir de https://www.rust-lang.org/
	Importante: as versões para rustc e Cargo não precisam ser iguais,
	mas é recomendável que sejam.

Java:	Não trabalharemos nenhuma versão particular de Java. Procure ter
	uma atualizada na sua máquina. No entanto, no mínimo, Java 8.
	Verifique sua versão executando:
	$> java --version
	A sua saída deve ser algo como "openjdk 11.0.20.1 2023-08-24", 
	seguido de outras informações. Caso Java não esteja disponível, ou
	sua versão muito antiga, busque inforamçẽos em
	https://www.oracle.com/java/

C++:	Utilizaremos o GCC. Nenhuma versão especial, mas procure ter uma
	versão atual. Verifique com o comando:
	$> g++ --version
	A saída será algo como "g++ (Ubuntu 9.4.0-1ubuntu1~20.04.2) 9.4.0"
	Caso não esteja, ou a versão seja muito antiga, acesse
	https://help.ubuntu.com/stable/ubuntu-help/ e https://gcc.gnu.org/
	para obter informações de instalação.

Para executar os programas Hello World da nossa atividade poliglota,
primeiro reproduza a estrutura de diretórios apresentada e então visite
cada um dos diretórios e execute a sequência de comandos abaixo.

Python: Python possui um interpretador. Como entrada do interpretador
	é passado como parâmetro o módulo (arquivo) que contém o
	"programa principal" a ser executado.
	Execute desta forma:
	$> python3 helloworld_main.py

Rust:	Rust possui um gerenciador de pacotes, o Cargo. Este gerenciador
	utiliza uma estrutura de diretórios para administrar as versões
	e pacotes do programa. No caso, os módulos que contém a
	implementação estão no diretório src. Rust é uma linguagem
	compilada, primeiro é necessário compilar o programa para obter
	o código executável. Uma vez gerado, o código executável ficará
	armazenado no diretório target. No futuro, nesta disciplina,
	falaremos mais do Cargo. No momento, apenas estamos testando
	as linguagens.
	Estando no diretório onde se encontra o arquivo Cargo.toml,
	compile assim:
	$> cargo build
	Execute desta forma:
	$> cargo run

Java:	Java também é uma linguagem compilada. No entanto, diferente do
	Rust, o código gerado não é código objeto da arquitetura alvo.
	O código objeto, chamado de bytecode, refere-se ao código para
	uma arquitetura virtual, a JVM.
	Compile os módulos .java da seguinte forma:
	$> javac HelloWorld.java
	$> javac HelloWorldMain.java
	Depois, invoque a máquina virtual Java para executar o programa
	da seguinte forma:
	$> java HelloWorldMain

C++:	Outra linguagem compilada, que também gera código objeto para
	arquitetura alvo.
	Passo 1: compile os módulos, obtendo os códigos objetos, da
	seguinte forma:
	$> g++ -c HelloWorld.cpp
	$> g++ -c HelloWorldMain.cpp
	Passo 2: execute a etapa de ligação dos dois módulos com o
	seguinte comando:
	$> g++ HelloWorld.o HelloWorldMain.o -o HelloWorld
	Passo 3: Execute o programa:
	$> ./HelloWorld
	
	
