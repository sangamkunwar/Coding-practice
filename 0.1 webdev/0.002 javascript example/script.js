//this is a js
console.log("hello")//this is a consel.log()function which print the context you can see it by right clicking on the page and click on the inspect button and look at menu bar there is console click there and yuu can see the console
//also js is very forgiving langause the ; is optional we can put or not put the ;
console.log(document)
//this console the inner html


document.addEventListener("DOMContentLoaded", () => {
    //document mean html file
    //addeventlistener sense the action like in this file addEventListener is "DOMContentLoaded" it mean when the page is loaded
    const container = document.querySelector(".containor");
    //above line is variable we can make a variable in js by const, let or var const value never change
    //queryselector slect the element 
    //.containor mean class containor


    container.addEventListener("mouseover", () => {
        //containor=document.querySelector(".containor")
        
        container.classList.add("at");
        //this mean to add class at in .containor
    });

    container.addEventListener("mouseout", () => {
        //mouse out mean when mouse is not over element
        container.classList.remove("at");
        //this mean to remove class at in .containor
    });
});