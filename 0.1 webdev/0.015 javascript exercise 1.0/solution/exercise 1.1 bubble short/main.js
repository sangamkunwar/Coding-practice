document.addEventListener("DOMContentLoaded", function() {//the code under this will when the page is properly loded
  const arrform = document.getElementById("arrayForm");
  const arr = document.querySelectorAll("input");
  const out = document.querySelector(".output")

  async function bblshort(arr) {//short the array using buble short
    for (let i = 0; i < arr.length - 1; i++) {//the loop will run untill the array length
      for (let j = 0; j < arr.length - i - 1; j++) {
        if (parseInt(arr[j].value) > parseInt(arr[j + 1].value)) {//check the value
          //swap
          let temp = arr[j].value;
          arr[j].value = arr[j + 1].value;
          arr[j + 1].value = temp;
        }
      }
    }
  }
  
  arrform.addEventListener("submit", async function(event) {//this will run when the form is submit
    event.preventDefault();//prevent the default and unnecessary activity
    const input = Array.from(arr).map(input => input.value);//store the input value
    await bblshort(arr);//call the bblshort and pass arr

    // Mapping over the sorted array to get the values
    const output = Array.from(arr).map(input => input.value);

    // Logging input and output
    const bblinfo = {
      input: input,
      output: output
    };
    const bbljson = JSON.stringify(bblinfo);//converting into json
    console.log(bbljson);//display input and output
    out.innerHTML = `the shorted array is ${output}`
  });
});