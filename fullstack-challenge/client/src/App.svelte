<script>
  let prefix = '';
  let postfix = '';

  async function fetchPrefix() {
    const response = await fetch('https://probable-space-cod-rxpv54jx6gv3wwxw-8080.app.github.dev/api/calcpre');
    const data = await response.json();
    prefix = data.message;
  }

  async function fetchPostfix() {
    const response = await fetch('https://probable-space-cod-rxpv54jx6gv3wwxw-8080.app.github.dev/api/calcpost');
    const data = await response.json();
    postfix = data.message;
  }
</script>

<main>
  <div class="container">
    <h1>Prefix Calculate!</h1>
    <p><i>Calculate: "*/+5292"</i></p>
    <button class="btn" on:click={fetchPrefix}>Get Prefix</button>
    <p class="greeting">{prefix}</p>
    <p><i>Calculate: "9241++-"</i></p>
    <button class="btn" on:click={fetchPostfix}>Get Prefix</button>
    <p class="greeting">{postfix}</p>
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