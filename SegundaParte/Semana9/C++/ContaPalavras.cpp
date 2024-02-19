#include <iostream>
#include <unordered_map>
#include <sstream>
#include <cctype>
#include <algorithm>

using namespace std;

class Texto {
private:
    string texto;
    unordered_map<string, int> contagemPalavras;

public:
    Texto(const string& inputText) : texto(inputText) {
        contarPalavras();
    }

    void contarPalavras() {
        contagemPalavras.clear(); // Limpar o mapa antes de contar novamente

        istringstream iss(texto);
        string palavra;

        while (iss >> palavra) {
            // Remove pontuações simples para contar palavras corretamente
            palavra.erase(remove_if(palavra.begin(), palavra.end(), [](char c) { return ispunct(c); }), palavra.end());
            contagemPalavras[palavra]++;
        }
    }

    const unordered_map<string, int>& obterContagemPalavras() const {
        return contagemPalavras;
    }
};

int main() {
    cout << "Digite um texto (pressione Enter para finalizar):\n";

    // Ler texto do usuário
    string userText;
    getline(cin, userText);

    // Criar um objeto Texto
    Texto texto(userText);

    // Obter a contagem de palavras do objeto
    const unordered_map<string, int>& contagem = texto.obterContagemPalavras();

    // Exibir os resultados
    cout << "\nFrequência de palavras:\n";
    for (const auto& pair : contagem) {
        cout << pair.first << ": " << pair.second << " vezes\n";
    }

    return 0;
}

