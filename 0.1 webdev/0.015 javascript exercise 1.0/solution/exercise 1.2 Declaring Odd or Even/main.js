document.addEventListener("DOMContentLoaded", function() {
    const form = document.getElementById("input");
    const inputField = document.querySelector("input[name='number']");
    const output = document.querySelector(".output")
    let iseven
    async function oddoreven(num) {
        if (parseInt(num) % 2 === 0) {
            console.log("The number is even");
            iseven = true
        } else {
            iseven = false
            console.log("The number is odd");
        }
    }

    form.addEventListener("submit", async function(event) {
        event.preventDefault();
        const num = inputField.value;  // Get the value of the input field
        await oddoreven(num);  // Pass the value to the oddoreven function
        output.innerHTML = iseven ? 'the number is even' : 'the number is odd'
    });
});
