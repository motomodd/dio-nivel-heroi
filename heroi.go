package main

import (
	"fmt"
)

func main() {

	var xp int
	var heroi string
	rank := "noob"

	for heroi == "" {
		fmt.Print("Nome do herói: ")
		fmt.Scanln(&heroi)

		if heroi == "" {
			fmt.Println("ERRO! Insira o nome do herói!")
		}
	}

	fmt.Printf("%s, quantos XP você acumulou? ", heroi)
	fmt.Scanln(&xp)

	if xp < 1000 {
		rank = "ferro"
	} else if xp >= 1001 && xp <= 2000 {
		rank = "bronze"
	} else if xp >= 2001 && xp <= 5000 {
		rank = "prata"
	} else if xp >= 5001 && xp <= 6000 {
		rank = "falha ao obter rank!"
		fmt.Println("professor da DIO não definiu rank neste range")
	} else if xp >= 6001 && xp <= 7000 {
		rank = "ouro"
	} else if xp >= 7001 && xp <= 8000 {
		rank = "platina"
	} else if xp >= 8001 && xp <= 9000 {
		rank = "ascendente"
	} else if xp >= 9001 && xp <= 10000 {
		rank = "imortal"
	} else if xp >= 10001 {
		rank = "radiante"
	}

	fmt.Printf("O herói de nome %s está no nível de %s!\n", heroi, rank)

}
