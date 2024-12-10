//this file must be named .mjs
import { createServer } from 'http'; 
import express from 'express'; 
const app = express();
import { fileURLToPath } from 'url';
import { dirname } from 'path';
const port = 3000; //this is a port when you change it the host(url) changes like if you make port 3000 the url will be 127.0.0.1:3000 
// this is a get request here if you pass `/` and write any thing and write some code in the place of res.send('Hello from Express!'); the code will be seen in `$(url)/$(what u write in /) we can also link file by res.sendfile('Html file .html');
app.get('/hello', (req, res) => {
  res.send('Hello from Express!');
});
app.get('/hi', (req, res) => {
  res.send('Hi from Expressjs!');
});
app.get('/', (req, res) => {
  res.sendFile('index.html', { root: dirname(fileURLToPath(import.meta.url)) });
});

// this line is very important in express js this make the url 
app.listen(port, '127.0.0.1', () => {
  console.log(`Listening on 127.0.0.1:${port}`);
});