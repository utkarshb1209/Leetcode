function createHelloWorld() {
    
    return function(...args): string {
        const s="Hello World";
        return s;
    };
};

/**
 * const f = createHelloWorld();
 * f(); // "Hello World"
 */