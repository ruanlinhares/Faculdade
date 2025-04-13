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
    
}