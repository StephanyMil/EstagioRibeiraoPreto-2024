function verificarFibonacci(numero) {
    let a = 0;
    let b = 1;
    while (b <= numero) {
        if (b === numero) {
            return true;
        }
        [a, b] = [b, a + b];  
    }
    const numeroInformado = 23;
    if (verificarFibonacci(numeroInformado)) {
        console.log(`${numeroInformado} pertence à sequência de Fibonacci`);
    } else {
        console.log(`${numeroInformado} não pertence à sequência de Fibonacci`);
    }
}