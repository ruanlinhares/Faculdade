function validarEmail() {
    const emailInput = document.getElementById('email');
    const emailAlert = document.getElementById('emailAlert');
    const email = emailInput.value.trim();
    const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    const atIndex = email.indexOf('@');
    const localPart = email.substring(0, atIndex);
    const parteLocalSize = 50;

    if(email === ""){
        emailInput.classList.remove('valid');
        emailInput.classList.add('invalid');
        emailAlert.textContent = 'O campo de e-mail não pode ficar vazio.';
    }else if(localPart.length > parteLocalSize){
        emailInput.classList.remove('valid');
        emailInput.classList.add('invalid');
        emailAlert.textContent = `A parte antes do '@' é muito longa (máx. ${parteLocalSize} caracteres).`;
        return false;
    }else if (emailRegex.test(email)) {
        emailInput.classList.remove('invalid');
        emailInput.classList.add('valid');
        emailAlert.textContent = '';
        return true;
    } else {
        emailInput.classList.remove('valid');
        emailInput.classList.add('invalid');
        emailAlert.textContent = 'Por favor, insira um e-mail válido.';
        return false;
    }
}

function validarSenha() {
    const passwordInput = document.getElementById('password');
    const passwordAlert = document.getElementById('passwordAlert');
    const password = passwordInput.value;
    const hasNumber = /\d/.test(password);
    const hasSpecial = /[!@#$%^&*(),.?":{}|<>]/.test(password);
    const hasUpper = /[A-Z]/.test(password);
    const hasLower = /[a-z]/.test(password);
    const isValidLength = password.length >= 3 && password.length <= 6;
    const senhasComuns = ['senha', 'password', '123456', 'qwerty', 'admin', 'usuario', 'teste', '000000', 'abcdef'];
    const senhaEComum = senhasComuns.some(word => password.toLowerCase().includes(word));

    if (password === "") {
        passwordInput.classList.remove('valid');
        passwordInput.classList.add('invalid');
        passwordAlert.textContent = 'O campo de senha não pode ficar vazio.';
        return false;
    }else if (isValidLength && hasNumber && hasSpecial && hasUpper && hasLower) {
        passwordInput.classList.remove('invalid');
        passwordInput.classList.add('valid');
        passwordAlert.textContent = '';
        return true;
    } else {
        passwordInput.classList.remove('valid');
        passwordInput.classList.add('invalid');
        let message = '';
        if (!isValidLength) {
            message += 'A senha deve ter entre 3 e 6 caracteres. ';
        }
        if (!hasNumber) {
            message += 'A senha deve conter pelo menos um número. ';
        }
        if (!hasSpecial) {
            message += 'A senha deve conter pelo menos um caractere especial. ';
        }
        if (!hasUpper) {
            message += 'A senha deve conter pelo menos uma letra maiúscula. ';
        }
        if (!hasLower) {
            message += 'A senha deve conter pelo menos uma letra minúscula. ';
        }
        if (senhaEComum) {
            message += 'Essa senha é muito comum ou fraca. Por favor, escolha outra. ';
        }
        passwordAlert.textContent = message.trim();
        return false;
    }
}

function validarLogin() {
    if (validarEmail() && validarSenha()) {
        const email = document.getElementById('email').value;
        const password = document.getElementById('password').value;

        if (email === 'teste@email.com' && password === '1@Bc') {
            window.location.href = 'sucesso.html';
        } else {
            alert('Credenciais inválidas.');
        }
    }
}