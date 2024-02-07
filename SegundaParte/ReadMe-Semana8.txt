Na aula teórica (quarta), foi apresentada a questão da Herança Múltipla e Interfaces. Em aula foram discutidos discutidos dos exemplos, um relacionados à IoT e outro a um programa envolvendo jogos. O código destes exemplos está disponível no github, bem como um terceiro estudo de caso. Neste novo exemplo é mantida uma hierarquia de classes descrevendo a manutenção de dados de clientes e a diferenciação de categorias dos clientes.

-----

Na aula prática (segunda) foi apresentado o Padrão de Projeto Singleton em Java e C++. O exercício solicitado foi o seguinte:

Utilizando getClass().getName() em Java e typeid(*this) em C++, construa uma classe que gere logs de criação de objetos, cujo formato seja o seguinte:

1 & XXX
2 & XXX
3 & YYY
4 & XXX
5 & ZZZ

Significando que, primeiro foi criado um objeto da classe XXX, então, mais um. O terceiro objeto criado foi da classe YYY e o quarto outro da classe XXX. O quinto objeto criado foi da classe ZZZ.

Importante: deve ser utilizado um Singleton para o objeto log. A estrutura basica desta classe é a seguinte (atenção! esta classe está incompleta! apenas a estrutura do Singleton é apresentada).

class Log {
   private:
      int cont; // Sim, é um atributo de objeto
      Log() {} // Sim, é privado e não faz nada
      // Complete com a estrutura de dados para armazenar o log
   public:
      static Log& getInstance() {
         static Log instance;
         return instance;
    }
    void insereAtividade(char *className ) { ... }
    void printLog() { ... }
}

------

No diretório Semana8 encontra-se disponível:
- A resolução em C++ e Java do exercício proposto na aula prática;
- Os exemplos em C++ e Java (IoT e CG) apresentados na aula teórica.

Atenção: a título de exemplo, também são apresentadas as resoluções em Python e Rust.
