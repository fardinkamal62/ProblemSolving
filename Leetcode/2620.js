/**
 * @param {number} n
 * @return {Function} counter
 */
var createCounter = function (n) {
    var result = [];

    return function () {
        result.push(n);

        n = n + 1;
        return result[result.length - 1];
    };
};

/** 
 * const counter = createCounter(10)
 * counter() // 10
 * counter() // 11
 * counter() // 12
 */