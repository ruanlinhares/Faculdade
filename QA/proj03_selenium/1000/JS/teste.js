const inputName = document.getElementById('username');

        // Função de validação
        function validarNome() {
            let valor = inputName.value;

            // 1. Verifica se contém apenas letras
            if (/[^a-zA-Z]/.test(valor)) {
                inputName.classList.add('invalid');
                inputName.classList.remove('valid');
            } 
            // 2. Verifica se contém espaços
            else if (/\s/.test(valor)) {
                inputName.classList.add('invalid');
                inputName.classList.remove('valid');
            } 
            // 3. Verifica se o número de caracteres é maior que 10
            else if (valor.length > 10) {
                inputName.classList.add('invalid');
                inputName.classList.remove('valid');
            } 
            // Se passar por todas as validações
            else {
                inputName.classList.add('valid');
                inputName.classList.remove('invalid');
            }
        }

        // Adicionando o evento de 'input' para validação em tempo real
        inputName.addEventListener('input', validarNome);