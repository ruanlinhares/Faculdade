describe('template spec', () => {
  const emails = [
    "usuario@email.com",
    " ",
    "usuario@",
    "@email.com",
    "teste@email.com"
  ];

  const senhas = [
    "A1b!",
    " ",
    "abc"
  ];

  const emailValido = (email) => {
    const regex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
    return regex.test(email);
  };

  const senhaForte = (senha) => {
    if (senha.length <= 6 || senha.length >= 3) return false;
    if (/\s/.test(senha)) return false;
    if (!/[a-z]/.test(senha)) return false;
    if (!/[A-Z]/.test(senha)) return false;
    if (!/[0-9]/.test(senha)) return false;
    if (!/[^a-zA-Z0-9\s]/.test(senha)) return false;
    return true;
  };

  it('Testa diferentes combinações de email e senha', () => {
    cy.visit('http://127.0.0.1:5500/projetoteste/login.html');

    emails.forEach((email) => {
      cy.get('#email').clear().type(email);

      senhas.forEach((senha) => {
        cy.get('#password').clear().type(senha);
        cy.get('#btn').click();

        
        cy.url().then((url) => {
          cy.on('window:alert', (alertText) => {
            if (alertText.includes('Credenciais inválidas')) {
              cy.log(`Tentativa mal-sucedida com email: ${email} e senha: ${senha}`);
            }
          });

          if (!emailValido(email) || !senhaForte(senha)) {
            cy.log(`Tentativa mal-sucedida com dados inválidos. Email: ${email} e Senha: ${senha}`);
          } else if (url.includes('sucesso.html')) {
            cy.log(`Login bem-sucedido com email: ${email} e senha: ${senha}`);
          }
        });
        
        cy.visit('http://127.0.0.1:5500/projetoteste/login.html');
      });
    });
  });
});