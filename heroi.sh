#!/bin/bash

# O que deve ser utilizado:
# VARIÁVEIS, OPERADORES, LAÇOS DE REPETIÇÃO, ESTRUTURA DE DECISÃO

# VALORES DEFAULT
xp=0;
rank="noob";
unset heroi;

# PARA LER O NOME DO USUÁRIO ATRAVÉS DO INPUT, SERÁ LOOP ATÉ SER INSERIDO
while [ -z $heroi ]; do
	read -p "Nome do herói: " heroi;
	if [[ -z $heroi ]]; then
		echo "ERRO! Insira o nome do herói!"
	fi
done

read -p "$heroi, quantos XP você acumulou? "  xp;

# ESTRUTURA DE DECISÃO PARA OBTER RANKS
if [[ $xp -lt 1000 ]]; then
	rank="ferro";
		elif [[ $xp -ge 1001 ]] && [[ $xp -le 2000 ]]; then
			rank="bronze";
		elif [[ $xp -ge 2001 ]] && [[ $xp -le 5000 ]]; then
			rank="prata";
		elif [[ $xp -ge 5001 ]] && [[ $xp -le 6000 ]]; then 
			rank="falha ao obter rank!";
			echo "professor da DIO não definiu rank neste range";
		elif [[ $xp -ge 6001 ]] && [[ $xp -le 7000 ]]; then
			rank="ouro";
		elif [[ $xp -ge 7001 ]] && [[ $xp -le 8000 ]]; then
			rank="platina";
		elif [[ $xp -ge 8001 ]] && [[ $xp -le 9000 ]]; then
			rank="ascendente";
		elif [[ $xp -ge 9001 ]] && [[ $xp -le 10000 ]]; then
			rank="imortal";
		elif [[ $xp -ge 10001 ]]; then
			rank="radiante";
fi

#RESULTADO
echo "O herói de nome $heroi está no nível de $rank!"
