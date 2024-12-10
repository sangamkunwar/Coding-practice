# Introduction to Node.js

Node.js is a powerful JavaScript runtime built on Chrome's V8 JavaScript engine. It allows developers to run JavaScript on the server-side, enabling the development of scalable and high-performance web applications.

## Table of Contents

1. [What is Node.js?](#what-is-nodejs)
2. [Features of Node.js](#features-of-nodejs)
3. [Installing Node.js](#installing-nodejs)
4. [Creating a Simple Node.js Application](#creating-a-simple-nodejs-application)
5. [Node.js Modules](#nodejs-modules)
6. [Node Package Manager (npm)](#node-package-manager-npm)
7. [Event-Driven Programming](#event-driven-programming)
8. [Asynchronous Programming](#asynchronous-programming)
9. [Building a RESTful API with Node.js](#building-a-restful-api-with-nodejs)
10. [Conclusion](#conclusion)

## What is Node.js?

Node.js is an open-source, cross-platform JavaScript runtime environment that executes JavaScript code outside of a web browser. It is designed to build scalable network applications and uses an event-driven, non-blocking I/O model.

## Features of Node.js

- **Asynchronous and Event-Driven**: All APIs in Node.js are asynchronous, meaning that the server can handle multiple requests simultaneously without waiting for any function to return.
- **Fast and Efficient**: Built on Chrome's V8 engine, Node.js is known for its high performance and efficient handling of requests.
- **Single-Threaded**: Node.js uses a single-threaded model with event looping, making it more scalable than traditional servers.
- **Cross-Platform**: Node.js can run on various operating systems, including Windows, macOS, and Linux.

## Installing Node.js

To install Node.js, follow these steps:

1. Go to the [official Node.js website](https://nodejs.org/).
2. Download the appropriate installer for your operating system.
3. Run the installer and follow the prompts to complete the installation.

To verify the installation, open a terminal and run:

```bash
node -v
npm -v
```
## Creating a Simple Node.js Application
Let's create a simple "Hello, World!" application with Node.js.

1. Create a new directory for your project and navigate to it:

```bash
mkdir my-node-app
cd my-node-app
```
2. Create a file named app.js and add the following code:

```javascript
const http = require('http');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
    res.statusCode = 200;
    res.setHeader('Content-Type', 'text/plain');
    res.end('Hello, World!\n');
});

server.listen(port, hostname, () => {
    console.log(`Server running at http://${hostname}:${port}/`);
});
```
3. Run the application:

```bash
node app.js
```
4. Open your web browser and navigate to `http://127.0.0.1:3000` to see the "Hello, World!" message.

## Node.js Modules
Node.js uses modules to organize and reuse code. There are three types of modules in Node.js:

- **Core Modules**: Built-in modules provided by Node.js (e.g., http, fs, path).
- **Local Modules**: Custom modules created by developers.
- **Third-Party Modules**: Modules available via npm (e.g., express, lodash).
### Creating a Local Module
Create a new file named math.js:

```javascript
Copy code
exports.add = function(a, b) {
    return a + b;
};

exports.subtract = function(a, b) {
    return a - b;
};
```
2. Use the module in `app.js`:

```javascript
const math = require('./math');

console.log(math.add(2, 3));        // Output: 5
console.log(math.subtract(5, 2));   // Output: 3
```
## Node Package Manager (npm)
npm is the default package manager for Node.js. It allows developers to install, share, and manage dependencies in their projects.

### Initializing a Project
1. Initialize a new project:

```bash
npm init -y
```
Follow the prompts to create a package.json file.

## Installing Packages
1. Install a package (e.g., express):

```bash
npm install express
```
2. Use the package in your project:

```javascript
const express = require('express');
const app = express();

app.get('/', (req, res) => {
    res.send('Hello, World!');
});

app.listen(3000, () => {
    console.log('Server is running on port 3000');
});
```

## Event-Driven Programming
Node.js uses an event-driven architecture, where events trigger asynchronous callbacks.

### Example
```javascript
const EventEmitter = require('events');
const myEmitter = new EventEmitter();

myEmitter.on('event', () => {
    console.log('An event occurred!');
});

myEmitter.emit('event');
```
## Asynchronous Programming
Node.js excels at asynchronous programming, allowing non-blocking operations.

### Example
```javascript
const fs = require('fs');

fs.readFile('example.txt', 'utf8', (err, data) => {
    if (err) throw err;
    console.log(data);
});
```
## Building a RESTful API with Node.js
1. Install express:

```bash
npm install express
```
2. Create api.js:

```javascript
const express = require('express');
const app = express();
const port = 3000;

app.use(express.json());

let items = [
    { id: 1, name: 'Item 1' },
    { id: 2, name: 'Item 2' }
];

app.get('/items', (req, res) => {
    res.json(items);
});

app.post('/items', (req, res) => {
    const newItem = req.body;
    newItem.id = items.length + 1;
    items.push(newItem);
    res.status(201).json(newItem);
});

app.listen(port, () => {
    console.log(`API running at http://localhost:${port}/`);
});
```
Run the API:

```bash
node api.js
```
4. Use tools like Postman or curl to interact with the API.

## Conclusion
Node.js is a versatile and powerful tool for building server-side applications. By mastering its features and capabilities, you can create scalable, high-performance web applications. Keep exploring and practicing to deepen your understanding of Node.js.