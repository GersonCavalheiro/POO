#!/bin/bash

# Encontrar todos os arquivos .cpp no diretório atual e subdiretórios
find . -type f -name "*.cpp" -print0 | while IFS= read -r -d '' file; do
    # Substituir todas as ocorrências de "Bob" por "Flokus" no arquivo
    sed -i 's/Mittens/Felicete/g' "$file"
    echo "Substituições feitas em $file"
done

echo "Concluído!"

