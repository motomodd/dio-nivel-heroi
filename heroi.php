<?php

$xp = 0;
$rank = "noob";
$heroi = "";

while(empty($heroi)){
    echo "Nome do herói: ";
    $heroi = trim(fgets(STDIN));

    if(empty($heroi)){
        echo "ERRO! Insira o nome do herói!\n";
    }
}

echo "$heroi, quantos XP você acumulou? ";
$xp = intval(trim(fgets(STDIN)));

if ($xp < 1000) $rank = "ferro";
elseif ($xp >= 1001 && $xp <= 2000) $rank = "bronze";
elseif ($xp >= 2001 && $xp <= 5000) $rank = "prata";
elseif ($xp >= 5001 && $xp <= 6000) {
    $rank = "falha ao obter rank!";
    echo "professor da DIO não definiu rank neste range\n";
}
elseif ($xp >= 6001 && $xp <= 7000) $rank = "ouro";
elseif ($xp >= 7001 && $xp <= 8000) $rank = "platina";
elseif ($xp >= 8001 && $xp <= 9000) $rank = "ascendente";
elseif ($xp >= 9001 && $xp <= 10000) $rank = "imortal";
elseif ($xp >= 10001) $rank = "radiante";

echo "O herói de nome $heroi está no nível de $rank!\n";
?>
