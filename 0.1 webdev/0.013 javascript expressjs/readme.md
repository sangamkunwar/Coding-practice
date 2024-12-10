# Introduction to Express.js and API Development

## What is Express.js?

Express.js is a minimal and flexible Node.js web application framework that provides a robust set of features for web and mobile applications. It is a lightweight framework used to build web applications and APIs, making it an essential part of the Node.js ecosystem.

### Key Features of Express.js

1. **Minimalistic Framework**: Express provides a thin layer of fundamental web application features, without obscuring Node.js features.
2. **Robust Routing**: Express offers a powerful routing mechanism that allows you to handle various HTTP requests.
3. **Middleware Support**: Middleware functions in Express can handle requests and responses, making it easy to add functionalities like logging, authentication, etc.
4. **Template Engines**: Express supports various template engines like Pug, EJS, etc., allowing dynamic content rendering.
5. **Error Handling**: Built-in error handling mechanisms help in managing errors efficiently.
6. **Extensible**: Highly extensible with numerous plugins and extensions available.

## Setting Up Express.js

To start using Express.js, you need to have Node.js installed. Follow these steps to set up an Express application:

1. **Install Node.js**: Download and install Node.js from the [official website](https://nodejs.org/).
2. **Create a Project Directory**: Create a new directory for your project.
   ```sh
   mkdir my-express-app
   cd my-express-app
    ```
3. **Initialize a New Node.js Project**: Run the following command to create a package.json file.
    ```sh
    npm init -y
    ```
4. **Install Express.js**: Use npm to install Express.
    ```sh
    npm install express
    ```
## Creating a Basic Express.js Application
Here's a simple example to create a basic Express.js application:

```javascript
const express = require('express');
const app = express();
const port = 3000;

app.get('/', (req, res) => {
  res.send('Hello World!');
});

app.listen(port, () => {
  console.log(`Example app listening at http://localhost:${port}`);
});
```
## Running the Application
Save the above code in a file named app.js and run it using the following command:

```sh
node app.js
```
You should see the message Example app listening at http://localhost:3000 in your terminal. Open your browser and navigate to http://localhost:3000 to see the "Hello World!" message.

## Introduction to APIs
An API (Application Programming Interface) allows different software applications to communicate with each other. In web development, APIs enable communication between a client (such as a web browser) and a server.

### Types of APIs
1. **RESTful APIs**: Representational State Transfer (REST) is an architectural style for designing networked applications. RESTful APIs use HTTP requests to perform CRUD (Create, Read, Update, Delete) operations.
2. **GraphQL APIs**: GraphQL is a query language for APIs and a runtime for executing those queries. It allows clients to request exactly the data they need.
## Creating a Simple RESTful API with Express.js
Let's create a basic RESTful API using Express.js.

1. **Setting Up the Project**: Follow the setup steps mentioned above.
2. **Creating Routes**: Create a new file api.js and add the following code:
```javascript
const express = require('express');
const app = express();
const port = 3000;

app.use(express.json());

let items = [
  { id: 1, name: 'Item One' },
  { id: 2, name: 'Item Two' },
];

// Get all items
app.get('/items', (req, res) => {
  res.json(items);
});

// Get a single item by id
app.get('/items/:id', (req, res) => {
  const item = items.find(i => i.id === parseInt(req.params.id));
  if (!item) return res.status(404).send('Item not found');
  res.json(item);
});

// Create a new item
app.post('/items', (req, res) => {
  const item = {
    id: items.length + 1,
    name: req.body.name,
  };
  items.push(item);
  res.status(201).json(item);
});

// Update an existing item
app.put('/items/:id', (req, res) => {
  const item = items.find(i => i.id === parseInt(req.params.id));
  if (!item) return res.status(404).send('Item not found');

  item.name = req.body.name;
  res.json(item);
});

// Delete an item
app.delete('/items/:id', (req, res) => {
  const item = items.find(i => i.id === parseInt(req.params.id));
  if (!item) return res.status(404).send('Item not found');

  const index = items.indexOf(item);
  items.splice(index, 1);
  res.json(item);
});

app.listen(port, () => {
  console.log(`API listening at http://localhost:${port}`);
});
```
## Testing the API
You can use tools like Postman or curl to test your API endpoints.

-  **Get all items: GET** http://localhost:3000/items
-  **Get a single item**: GET http://localhost:3000/items/1
-  **Create a new item**: POST http://localhost:3000/items
```json
{
  "name": "New Item"
}
```
- **Update an item**: PUT http://localhost:3000/items/1
```json
{
  "name": "Updated Item"
}
```
- **Delete an item**: DELETE http://localhost:3000/items/1
## Conclusion
Express.js is a powerful tool for building web applications and APIs with Node.js. With its minimalist approach, robust features, and extensive middleware support, it provides a solid foundation for both small and large-scale applications. Understanding how to create and manage APIs with Express.js is a fundamental skill for modern web development.