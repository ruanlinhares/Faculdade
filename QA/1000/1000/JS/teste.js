const inputName = document.querySelector("#name")

console.log(inputName);

inputName.addEventListener("keypress", function(e){
    const keyCode = (e.keyCode ? e.keyCode : e.wich);

    if(keyCode > 47 && keyCode < 58){
        e.preventDefault();
    }
});

