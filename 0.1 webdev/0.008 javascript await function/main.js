// uncomment bellow which has multiline comment and comment last which is not. read all comment and syntex and run code one by one(with await and with out await)
/*function fun1() {
    setTimeout(() => {
        console.log("hello fun1");
    }, 2000); // 2000 milliseconds = 2 seconds
}
fun1()
console.log("hello console")*/

//above the hello console print before hello fun1 sense the javascript look syntex and if there is time on running function it run it leater and run other function to run the function which take time to run first without skiping weuse await function
function fun1() {
    return new Promise((resolve) => {
        setTimeout(() => {
            console.log("hello fun1");
            resolve();
        }, 2000);// 2000 milliseconds = 2 seconds

    })
}
async function main() {
    await fun1();
    console.log("hello console");
}
main();