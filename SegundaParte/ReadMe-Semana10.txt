----------------------------------------------------
Estruturas de dados
---------------------------------------------------

Acesse os códigos Java e C++ da Semana 10 e analise e estude os exemplos apresentados. Modifique o código para compreender as funcionalidades disponíveis nas estruturas de dados disponibilizadas por estas linguagens.

---------------------------------------------------

Java

Vector
Descrição:

Vector é uma classe legada em Java que implementa uma matriz dinâmica (semelhante a um array dinâmico).
Principais Métodos:

add(element): Adiciona um elemento ao final do vetor.
get(index): Retorna o elemento no índice especificado.
remove(index): Remove o elemento no índice especificado.
size(): Retorna o número de elementos no vetor.
Exemplo:

java
Copy code
import java.util.Vector;

public class ExemploVector {
    public static void main(String[] args) {
        Vector<String> vector = new Vector<>();

        vector.add("Elemento 1");
        vector.add("Elemento 2");
        vector.add("Elemento 3");

        System.out.println("Elemento no índice 1: " + vector.get(1));

        vector.remove(0);

        System.out.println("Tamanho do vetor: " + vector.size());
    }
}
ArrayList
Descrição:

ArrayList é uma implementação mais eficiente e flexível de um array dinâmico em comparação com Vector.
Principais Métodos:

add(element): Adiciona um elemento ao final da lista.
get(index): Retorna o elemento no índice especificado.
remove(index): Remove o elemento no índice especificado.
size(): Retorna o número de elementos na lista.
Exemplo:

java
Copy code
import java.util.ArrayList;

public class ExemploArrayList {
    public static void main(String[] args) {
        ArrayList<String> arrayList = new ArrayList<>();

        arrayList.add("Elemento 1");
        arrayList.add("Elemento 2");
        arrayList.add("Elemento 3");

        System.out.println("Elemento no índice 1: " + arrayList.get(1));

        arrayList.remove(0);

        System.out.println("Tamanho da lista: " + arrayList.size());
    }
}
HashMap
Descrição:

HashMap é uma implementação de tabela de hash que mapeia chaves para valores.
Principais Métodos:

put(key, value): Adiciona um par chave-valor ao mapa.
get(key): Retorna o valor associado à chave especificada.
remove(key): Remove a entrada associada à chave especificada.
containsKey(key): Verifica se o mapa contém a chave especificada.
Exemplo:

java
Copy code
import java.util.HashMap;

public class ExemploHashMap {
    public static void main(String[] args) {
        HashMap<String, Integer> hashMap = new HashMap<>();

        hashMap.put("Chave1", 10);
        hashMap.put("Chave2", 20);
        hashMap.put("Chave3", 30);

        System.out.println("Valor associado à Chave2: " + hashMap.get("Chave2"));

        hashMap.remove("Chave1");

        System.out.println("O mapa contém a chave 'Chave1'? " + hashMap.containsKey("Chave1"));
    }
}

------------------------------------------------------------------
C++
-----------------------------------------------------------------
vector
Descrição:

vector é um contêiner sequencial dinâmico que pode ser redimensionado.
Principais Métodos:

push_back(element): Adiciona um elemento ao final do vetor.
at(index): Retorna o elemento no índice especificado.
pop_back(): Remove o último elemento do vetor.
size(): Retorna o número de elementos no vetor.
Exemplo:

cpp
Copy code
#include <iostream>
#include <vector>

int main() {
    std::vector<int> meuVector;

    meuVector.push_back(10);
    meuVector.push_back(20);
    meuVector.push_back(30);

    std::cout << "Elemento no índice 1: " << meuVector.at(1) << std::endl;

    meuVector.pop_back();

    std::cout << "Tamanho do vetor: " << meuVector.size() << std::endl;

    return 0;
}
list
Descrição:

list é uma lista duplamente encadeada que permite inserção e remoção eficientes em qualquer posição.
Principais Métodos:

push_back(element): Adiciona um elemento ao final da lista.
push_front(element): Adiciona um elemento no início da lista.
front(): Retorna o primeiro elemento da lista.
back(): Retorna o último elemento da lista.
Exemplo:

cpp
Copy code
#include <iostream>
#include <list>

int main() {
    std::list<std::string> minhaLista;

    minhaLista.push_back("Elemento 1");
    minhaLista.push_back("Elemento 2");
    minhaLista.push_front("Elemento 0");

    std::cout << "Primeiro elemento: " << minhaLista.front() << std::endl;
    std::cout << "Último elemento: " << minhaLista.back() << std::endl;

    return 0;
}
unordered_map
Descrição:

unordered_map é uma implementação de tabela de hash que mapeia chaves para valores.
Principais Métodos:

insert({key, value}): Adiciona um par chave-valor ao mapa.
at(key): Retorna o valor associado à chave especificada.
erase(key): Remove a entrada associada à chave especificada.
count(key): Retorna o número de elementos com a chave especificada.
Exemplo:

cpp
Copy code
#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<std::string, int> meuMapa;

    meuMapa.insert({"Chave1", 10});
    meuMapa.insert({"Chave2", 20});
    meuMapa["Chave3"] = 30;

    std::cout << "Valor associado à Chave2: " << meuMapa.at("Chave2") << std::endl;

    meuMapa.erase("Chave1");

    std::cout << "O mapa contém a chave 'Chave1'? " << meuMapa.count("Chave1") << std::endl;

    return 0;
}

