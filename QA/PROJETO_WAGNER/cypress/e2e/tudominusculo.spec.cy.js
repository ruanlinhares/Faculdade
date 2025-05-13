describe('template spec', () => {
  it('passes', () => {
    cy.visit('http://127.0.0.1:5500/projetoteste/login.html')


    const emails = [
        "usuario@email.com",
        " ",
        "usuario@",
        "@email.com",
        "teste@email.com"
    ]; 

    const senhas = [
      "usuario@email.com",
      " ",
      "usuario@",
      "@email.com",
      "teste@email.com"
    ]; 

    
  })
})