xp = 0
rank = "noob"
heroi = ""

while not heroi:
    heroi = input("Nome do herói: ")
    if not heroi:
        print("ERRO! Insira o nome do herói!")

xp = int(input(f"{heroi}, quantos XP você acumulou? "))

if xp < 1000:
    rank = "ferro"
elif 1001 <= xp <= 2000:
    rank = "bronze"
elif 2001 <= xp <= 5000:
    rank = "prata"
elif 5001 <= xp <= 6000:
    rank = "falha ao obter rank!"
    print("professor da DIO não definiu rank neste range")
elif 6001 <= xp <= 7000:
    rank = "ouro"
elif 7001 <= xp <= 8000:
    rank = "platina"
elif 8001 <= xp <= 9000:
    rank = "ascendente"
elif 9001 <= xp <= 10000:
    rank = "imortal"
else:
    rank = "radiante"

print(f"O herói de nome {heroi} está no nível de {rank}!")
