//file io
const fs = require("fs");
const person = {
  name: "John Doe",
  age: 30,
  isStudent: false,
  courses: ["Math", "Science", "English"],
  address: {
      street: "123 Main St",
      city: "Anytown",
      state: "CA"
  }
};

const jsonString = JSON.stringify(person);
console.log(jsonString);
const jsonString1 = '{"name":"John Doe","age":30,"isStudent":false,"courses":["Math","Science","English"],"address":{"street":"123 Main St","city":"Anytown","state":"CA"}}';

const person1 = JSON.parse(jsonString1);
console.log(person1);

const person2 = {
    name: "John Doe",
    age: 30,
    isStudent: false,
    courses: ["Math", "Science", "English"],
    address: {
        street: "123 Main St",
        city: "Anytown",
        state: "CA"
    }
};

const jsonString2 = JSON.stringify(person2, null, 2);

fs.writeFile('cources/0.001 webdev/0.010 javascript file io/person.json', jsonString2, (err) => {
    if (err) {
        console.error('Error writing file:', err);
    } else {
        console.log('File written successfully');
    }
});


fs.readFile('cources/0.001 webdev/0.010 javascript file io/person.json', 'utf8', (err, data) => {
    if (err) {
        console.error('Error reading file:', err);
        return;
    }
    try {
        const person = JSON.parse(data);
        console.log(person);
    } catch (err) {
        console.error('Error parsing JSON:', err);
    }
});
const content = "Hello, World!";

fs.writeFile('cources/0.001 webdev/0.010 javascript file io/message.txt', content, (err) => {
    if (err) {
        console.error('Error writing file:', err);
    } else {
        console.log('File written successfully');
    }
});


fs.readFile('message.txt', 'utf8', (err, data) => {
    if (err) {
        console.error('Error reading file:', err);
        return;
    }
    console.log(data);
});

const content1 = "\nThis is an appended line.";

fs.appendFile('message.txt', content1, (err) => {
    if (err) {
        console.error('Error appending to file:', err);
    } else {
        console.log('File appended successfully');
    }
});
