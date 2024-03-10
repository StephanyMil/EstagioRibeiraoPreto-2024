function inverterString(s) {
    let inverted = '';
    for (let i = s.length - 1; i >= 0; i--) {
        inverted += s[i];
    }
    return inverted;
}

const stringOriginal = "Hello, World!";
const stringInvertida = inverterString(stringOriginal);
console.log(`String original: ${stringOriginal}`);
console.log(`String invertida: ${stringInvertida}`);
