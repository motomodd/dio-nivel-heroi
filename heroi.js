const readline = require("readline");

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let xp = 0;
let rank = "noob";

function askHero() {
  rl.question("Nome do herói: ", (heroi) => {
    if (!heroi) {
      console.log("ERRO! Insira o nome do herói!");
      askHero();
    } else {
      rl.question(`${heroi}, quantos XP você acumulou? `, (xpInput) => {
        xp = parseInt(xpInput);

        if (xp < 1000) rank = "ferro";
        else if (xp >= 1001 && xp <= 2000) rank = "bronze";
        else if (xp >= 2001 && xp <= 5000) rank = "prata";
        else if (xp >= 5001 && xp <= 6000) {
          rank = "falha ao obter rank!";
          console.log("professor da DIO não definiu rank neste range");
        }
        else if (xp >= 6001 && xp <= 7000) rank = "ouro";
        else if (xp >= 7001 && xp <= 8000) rank = "platina";
        else if (xp >= 8001 && xp <= 9000) rank = "ascendente";
        else if (xp >= 9001 && xp <= 10000) rank = "imortal";
        else if (xp >= 10001) rank = "radiante";

        console.log(`O herói de nome ${heroi} está no nível de ${rank}!`);
        rl.close();
      });
    }
  });
}

askHero();
