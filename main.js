for (let i = 2; i <= 100; i++) {
    let isPrime = true;
    
    // Verifica se o número é par: 
    if (i % 2 === 0) {
        console.log(i + ' é par');
        continue;
    }
    
    // Verifica se o número é primo: 
    for (let j = 2; j < i; j++) {
        if (i % j === 0) {
            isPrime = false;
            break;
        }
    }
    
    if (isPrime) {
        // Calcula o quadrado do número primo: 
        const square = i * i;
        console.log(i + ' é primo e seu quadrado é ' + square);
    }
}
