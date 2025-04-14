//funcoes de programa

/*function mostrarCodigo(){
    //*CORRIGIR, NAO MOSTRA AS TODOS OS CODIGOS *
    const code = document.querySelectorAll(".blocoCodigo");
    const botao = document.getElementById("showbutton");

    if(code.style.display === "none"){
        code.style.display = "block";
        botao.textContent = "Esconder Códigos";
    }else{
        code.style.display = "none";
        botao.textContent = "Mostrar códigos";
    }
}*/

//funcoes dos exercicios

function exercicio1(){
    let nome = "Ruan Linhares";
    let idade = 20;

    console.log(`Olá, meu nome é ${nome} e eu tenho ${idade} anos`);    
}

function exercicio2(){
    let numero1 = 50;
    let numero2 = 40;

    let resultado = numero1 + numero2;

    console.log(`${numero1} + ${numero2} = ${resultado}`);
}

function exercicio3(){
    let idade = parseInt(prompt("Qual a sua idade ?"));

    if(idade >= 18){
    console.log("Você é maior de idade");
    }else{
    console.log("Você é menor de idade");
    }
}

function exercicio4(){
    let numero1 = parseInt(prompt("Informe um número inteiro: "));
    let numero2 = parseInt(prompt("Informe outro número inteiro: "));

    if(numero1 > numero2){
        console.log(`${numero1} é maior que ${numero2}`);
    }else if(numero2 > numero1){
        console.log(`${numero2} é maior que ${numero1}`);
    }else{
        console.log("Os números informados são iguais");
    }
}

function exercicio5(){
    let numero = parseInt(prompt("Digite um número para saber se é ímpar ou par: "));

    let verificacao = numero % 2 == 0?"par":"ímpar";

    console.log(`${numero} é um número ${verificacao}`);
}

function exercicio6(){
    let nota = parseInt(prompt("Digite uma nota de 0 a 10: "));

    if(nota >= 0 && nota <= 10){
        if(nota >= 7){
            console.log("Aprovado");
        }else if(nota < 7 && nota >= 5){
            console.log("Recuperação");
        }else{
            console.log("Reprovado");
        }
    }else{
        console.log("Nota inválida. Fora do intervalo.")
    }
}

function exercicio7(){
    let numero = parseInt(prompt("Digite um número entre 1 e 7 para saber o dia da semana: "));

    switch(numero){
        case 1:
            console.log("DOMINGO");
            break;
        case 2:
            console.log("SEGUNDA-FEIRA");
            break;
        case 3:
            console.log("TERÇA-FEIRA");
            break;
        case 4:
            console.log("QUARTA-FEIRA");
            break;
        case 5:
            console.log("QUINTA-FEIRA");
            break;
        case 6:
            console.log("SEXTA-FEIRA");
            break;
        case 7:
            console.log("SÁBADO");
            break;
        default:
            console.log("Número inválido. Fora do intervalo");
    }
}

function exercicio8(){
    let numero1 = parseInt(prompt("Digite um número: "));
    let numero2 = parseInt(prompt("Digite outro número: "));
    let operacao = prompt("Digite uma operação númerica para os números informados (+,-,*,/): ");

    switch(operacao){
        case "+":
            console.log(numero1 + numero2);
            break;
        case "-":
            console.log(numero1 - numero2);
            break;
        case "*":
            console.log(numero1 * numero2);
            break;
        case "/":
            console.log(numero1 / numero2);
            break;
        default:
            console.log("Operação inválida");
            break;
    }
}

function exercicio9(){
    let nivelAcesso = prompt("Digite seu nível de acesso: ").toLowerCase();

    if(nivelAcesso === "admin"){
        console.log("Bem vindo ao nível de administração do sistema, é permitida a leitura/escrita/execução de arquivos.");
    }else if(nivelAcesso === "usuario"){
        console.log("Bem vindo ao nível de usuário, é permitida a leitura/escrita de arquivo.");
    }else if(nivelAcesso === "convidado"){
        console.log("Bem vindo ao nível de convidado, é permitida a leitura de arquivos.");
    }else{
        console.log("Acesso negado.");
    }
}

function exercicio10(){
    let temperatura = parseFloat(prompt("Digite uma temperatura: "));
    let escala = prompt("Qual a escala de origem ? [Celsius/Fahrenheit]").toLowerCase();

    if(escala === "celsius"){
        let transformInFahrenheit = (temperatura * 1.8) + 32;
        console.log(transformInFahrenheit + " Fahrenheit"); 
    } else if(escala === "fahrenheit"){
        let transformInCelsius = ((temperatura - 32) * 5)/9
        console.log(transformInCelsius + "Celsius")
    }
}