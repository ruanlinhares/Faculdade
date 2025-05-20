describe('template spec', () => {
  const emails = [
    "usuario@email.com",
    " ",
    "usuario@",
    "@email.com",
    "teste@email.com"
  ];

  const senhas = [
    "1@Bc",
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

    for(const email of emails){
      
      cy.get('#email').clear().type(email);

      for(const senha of senhas){
        
        cy.get('#password').clear().type(senha);
        cy.get('.btn').click();


        if (emailValido(email) && senhaForte(senha)) {
          cy.wait(1000);
          cy.url().should('include', 'sucesso.html').then(() => {
            cy.log(`Login bem-sucedido com email: ${email} e senha: ${senha}`);
            cy.visit('http://127.0.0.1:5500/projetoteste/login.html');
            cy.get('#email').clear().type(email);
             // Prepara para a próxima iteração
          });
        }else {
            cy.log(`Tentativa mal-sucedida com email: ${email} e senha: ${senha}`);
            cy.visit('http://127.0.0.1:5500/projetoteste/login.html');
            cy.get('#email').clear().type(email);
            // Aqui você pode adicionar mais verificações se elementos de erro aparecem na página de login
        }
      };
    };
  });
});