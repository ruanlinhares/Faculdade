//funcoes de programa

function mostrarCodigo(num){
    //*CORRIGIR, NAO MOSTRA AS TODOS OS CODIGOS *
    let variableId = "blocoCodigo" + num;
    const code = document.getElementById(variableId);
    //const botao = document.getElementById("showbutton");

    if(code.style.display === "none"){
        code.style.display = "block";
        //botao.textContent = "Esconder Códigos";
    }else{
        code.style.display = "none";
        //botao.textContent = "Mostrar códigos";
    }
}

//funcoes dos exercicios

function exercicio1(){
    let contador = 1;

    while(contador <= 10){
        console.log(contador);
        contador++;
    }
}

function exercicio2(){
    let controle = 1;
    
    do{
        let javascript = prompt("Digite a palavra \"javascript\" da mesma maneira: ");

        if(javascript === "javascript"){
            controle = 0;
            console.log("Parabéns! Você acertou. Digitou a palavra \"javascript\" corretamente.");
        }else{
            console.log("Palavra incorreta ou digitada incorretamente. Tente novamente.");
        }

    }while(controle);
    
}

function exercicio3(){
   let numero = parseInt(prompt("Digite um número para saber sua tabuada: "));

    for(i = 0; i <= 10; i++){
        console.log(`${numero} X ${i} = ${numero * i}`)
    }
}

function exercicio4(){
    for(i = 0; i <= 20; i++){
        if(i % 2 == 0){
            console.log(i); 
        }
    }
}

function exercicio5(){
    const numeros = [10, 20, 30, 40, 50]
    let soma = 0;
    
    numeros.forEach(function(valor){
        soma = soma + valor;
    });

    console.log(soma);
}

function exercicio6(){
    function boasVindas(nome){
        console.log(`Seja bem-vindo(a), ${nome}!`);
    }

    let nome = prompt("Digite seu nome: ");

    boasVindas(nome);
}

function exercicio7(){
    function dobro(numero){
        return numero * 2;
    }

    let numero = parseInt(prompt("Digite um número para saber seu dobro: "));

    console.log(dobro(numero));
}

function exercicio8(){
    function ehPrimo(numero){
        if (numero <= 1) return false;
        if (numero === 2 || numero === 3) return true;
        if (numero % 2 === 0 || numero % 3 === 0) return false;

        for (let i = 5; i <= Math.sqrt(numero); i += 6) {
            if (numero % i === 0 || numero % (i + 2) === 0) return false;
        }

        return true;
    }

    let numero = parseInt(prompt("Digite um número para saber se é primo"));

    console.log(ehPrimo(numero));

}

function exercicio9(){
    
}

function exercicio10(){
    
    const nomes = ["Ana", "Carlos", "João", "Marina"];

    nomes.forEach(function(valor){
        soma = soma + valor;
    });

    console.log(soma);
}