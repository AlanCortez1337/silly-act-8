<script>
  let greeting = '';

  async function fetchGreeting() {
    const response = await fetch('http://localhost:8080/api/calculate');
    const data = await response.json();
    greeting = data.message;
  }
</script>

<main>
  <div class="container">
    <h1>Calculate!</h1>
    <button class="btn" on:click={fetchGreeting}>Get Calculation</button>
    <p class="greeting">{greeting}</p>
  </div>
</main>

<style>
  .container {
    display: flex;
    flex-direction: column;
    justify-content: center;
    align-items: center;
    height: 100vh;
    font-family: sans-serif;
  }

  .btn {
    padding: 0.5rem 1rem;
    border-radius: 0.25rem;
    background-color: #007bff;
    color: #fff;
    border: none;
    cursor: pointer;
    transition: background-color 0.3s ease;
  }

  .btn:hover {
    background-color: #0056b3;
  }

  .greeting {
    margin-top: 1rem;
    font-size: 1.5rem;
    font-weight: bold;
  }
</style>