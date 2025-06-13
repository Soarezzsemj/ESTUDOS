// Função assíncrona para buscar um usuário
/*async function fetchRandomUser() {
    const userInfoDiv = document.getElementById('user-info');
    const errorMessageDiv = document.getElementById('error-message');
    errorMessageDiv.textContent = ''; 
    userInfoDiv.innerHTML = '<p>Carregando...</p>'; 

    try {
        
        const response = await fetch('https://randomuser.me/api/');

        
        if (!response.ok) {
            throw new Error(`Erro HTTP! Status: ${response.status}`);
        }

       
        const data = await response.json();

        
        const user = data.results[0];

        
        displayUser(user);

    } catch (error) {
      
        console.error('Ocorreu um erro ao buscar o usuário:', error);
        errorMessageDiv.textContent = `Erro ao carregar usuário: ${error.message}. Tente novamente.`;
        userInfoDiv.innerHTML = ''; 
    }
}

// MANDA OS RESULTADOS PARA O HTML 
function displayUser(user) {
    const userInfoDiv = document.getElementById('user-info');
    userInfoDiv.innerHTML = `
        <img src="${user.picture.large}" alt="Foto de ${user.name.first} ${user.name.last}">
        <p><strong>Nome:</strong> ${user.name.title}. ${user.name.first} ${user.name.last}</p>
        <p><strong>Gênero:</strong> ${user.gender === 'male' ? 'Masculino' : 'Feminino'}</p>
        <p><strong>Email:</strong> ${user.email}</p>
        <p><strong>Telefone:</strong> ${user.phone}</p>
        <p><strong>Localização:</strong> ${user.location.city}, ${user.location.state}, ${user.location.country}</p>
    `;
}

// Adiciona um listener de evento ao botão para buscar um usuário quando clicado
document.getElementById('fetchUserBtn').addEventListener('click', fetchRandomUser);

// Opcional: Busca um usuário ao carregar a página
// fetchRandomUser(); 
*/