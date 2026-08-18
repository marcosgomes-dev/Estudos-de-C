# Estudos de C — Aulas C

Este repositório contém exercícios em C organizados por arquivos `aulaXX.c`.

**Conteúdo**
- Exercícios: arquivos `aula44.c`, `aula45.c`, `aula47.c`, `aula48.c`, `aula50.c`, `aula51.c`, `aula65.c`, `aula66.c`, `aula67.c`, `aula68.c`, `aula69.c`, `aula98.c`, `aula100.c`, `aula101.c`, `aula102.c`, `aula103.c`, `aula104.c`, `aula106.c`, `aula107.c`, `aula108.c`, `aula109.c`, `aula110.c`, `aula128.c`, `aula129.c`, `aula130.c`, `aula131.c`, `aula132.c`, `aula133.c`, `aula134.c`, `aula135.c`, `aula136.c`, `aula142.c`, `aula143.c`, `aula144.c`, `aula145.c`, `aula146.c`, `aula147.c`, `aula148.c`, `aula149.c`, `aula150.c`, `aula151.c`, `aula152.c`, `aula153.c`, `aula154.c`, `aula155.c`, `aula156.c`, `aula157.c`.

> Observação: cada arquivo é um exercício separado. Abra o arquivo correspondente para ver o enunciado ou comentários específicos.

**Como compilar um exercício específico**

No terminal, dentro da pasta `Aulas C`, rode:

```bash
gcc -o aula44 aula44.c   # substitua por outro arquivo, ex: aula100.c
./aula44
```

**Como compilar todos os arquivos .c (gera executáveis com o mesmo nome dos arquivos)**

```bash
for f in *.c; do
  gcc -o "${f%.c}" "$f" 2>/dev/null || true
done
```

Isto criará executáveis chamados `aula44`, `aula45`, etc. Alguns arquivos podem exigir flags adicionais (ex.: `-lm`) — verifique comentários no topo do arquivo.

**Como rodar um executável**

```bash
./aula44
```

**Boas práticas**
- Leia os comentários no início de cada arquivo para entender o objetivo do exercício.
- Use `valgrind` (se instalado) para checar leaks: `valgrind ./aula44`.
- Para compilar com warnings e debug:

```bash
gcc -Wall -Wextra -g -o aula44 aula44.c
```

**Contribuição / Uso**
- Faça commits pequenos e descreva o exercício alterado.
- Se quiser, adicione uma pasta `bin/` com executáveis compilados e um `scripts/` com comandos úteis.

---
Gerado automaticamente com base nos arquivos presentes na pasta `Aulas C`.
