document.addEventListener("DOMContentLoaded", function() {
    // Use querySelector for class selection
    const form = document.querySelector("#input");
    const numofemp = document.querySelector(".numofemp");
    const tax = document.querySelector(".tax");
    const loan = document.querySelector(".loan");
    const income = document.querySelector(".income");
    const output = document.querySelector(".output");

    class Industry {
        numberOfEmployees;
        incomec;
        taxc;
        loanc;
        indjson;

        constructor() {
            this.takedata();
            this.makedata();
        }

        takedata() {
            this.numberOfEmployees = numofemp.value;
            this.incomec = income.value;
            this.taxc = tax.value;
            this.loanc = loan.value;
        }

        makedata() {
            const ind = {
                numberOfEmployees: this.numberOfEmployees,
                income: this.incomec,
                tax: this.taxc,
                loan: this.loanc
            };
            this.indjson = JSON.stringify(ind);
            console.log(this.indjson);
        }
    }

    if (form) {
        form.addEventListener("submit", function(event) {
            event.preventDefault();
            const ind = new Industry();
            ind.takedata();
            ind.makedata();
            output.innerHTML=`your data <p> ${ind.indjson} </p>`
        });
    } else {
        console.error("Form element not found");
    }
});