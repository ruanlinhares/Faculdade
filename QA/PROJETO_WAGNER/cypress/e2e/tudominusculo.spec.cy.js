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

  it('Testa diferentes combinações de email e senha', () => {
    
    cy.visit('http://127.0.0.1:5500/projetoteste/login.html');

    for(const email of emails){
      
      cy.get('#email').clear().type(email);

      for(const senha of senhas){
        
        cy.get('#password').clear().type(senha);
        cy.get('.btn').click();

        cy.wait(1000);

        const emailSenhaValido = (email === "teste@email.com" && senha === "1@Bc");

        if (emailSenhaValido) {
          
          cy.url().should('include', 'sucesso.html');
          
          cy.visit('http://127.0.0.1:5500/projetoteste/login.html');

          cy.get('#email').clear().type(email);
          
        } else {
      
          cy.url().should('include', 'login.html');
        }
      };
    };
  });
});