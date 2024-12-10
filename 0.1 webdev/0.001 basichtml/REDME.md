# Comprehensive Guide to HTML and CSS

This guide is designed to take you from beginner to advanced in HTML and CSS. By the end of this guide, you will be able to create well-structured, styled, and responsive web pages.

## Table of Contents

1. [Introduction to HTML](#introduction-to-html)
    - [Basic HTML Structure](#basic-html-structure)
    - [HTML Elements](#html-elements)
    - [HTML Attributes](#html-attributes)
    - [HTML Forms](#html-forms)
2. [Introduction to CSS](#introduction-to-css)
    - [Basic CSS Syntax](#basic-css-syntax)
    - [Selectors](#selectors)
    - [Box Model](#box-model)
    - [Flexbox](#flexbox)
    - [Grid](#grid)
3. [Advanced HTML](#advanced-html)
    - [Semantic HTML](#semantic-html)
    - [Multimedia](#multimedia)
    - [HTML5 APIs](#html5-apis)
4. [Advanced CSS](#advanced-css)
    - [Responsive Design](#responsive-design)
    - [Animations and Transitions](#animations-and-transitions)
    - [CSS Preprocessors](#css-preprocessors)
    - [CSS Frameworks](#css-frameworks)
5. [external tool](#External-tools)
5. [Conclusion](#conclusion)

## Introduction to HTML

### Basic HTML Structure

HTML (HyperText Markup Language) is the backbone of any web page. It structures the content that appears on the web.

```html
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Basic HTML Structure</title>
</head>
<body>
    <h1>Hello, World!</h1>
    <p>Welcome to your first HTML page.</p>
</body>
</html>
```
### HTML Elements
HTML elements are the building blocks of HTML pages.

- **Headings**: `<h1> to <h6>`
- **Paragraphs**: `<p>`
- **Links**: `<a href="https://www.example.com">Link</a>`
- **Images**: `<img src="image.jpg" alt="Description">`
- **Lists**:
    - **Ordered**: `<ol><li>Item 1</li><li>Item 2</li></ol>`
    - **Unordered**: `<ul><li>Item 1</li><li>Item 2</li></ul>`
### HTML Attributes
Attributes provide additional information about HTML elements.

```html
<a href="https://www.example.com" target="_blank" title="Example">Visit Example</a>
```
### HTML Forms
Forms are used to collect user input.

```html
<form action="/submit" method="post">
    <label for="name">Name:</label>
    <input type="text" id="name" name="name">
    <input type="submit" value="Submit">
</form>
```
## Introduction to CSS
CSS (Cascading Style Sheets) styles the HTML elements.

### Basic CSS Syntax

```css
selector {
    property: value;
}
```
Example:

```css
body {
    background-color: #f0f0f0;
    font-family: Arial, sans-serif;
}
```
### Selectors

- **Type Selector**: `h1 { color: blue; }`
- **Class Selector**: `.class-name { color: blue; }`
- **ID Selector**: `#id-name { color: blue; }`
- **Attribute Selector**: `[type="text"] { border: 1px solid #ccc; }`
### Box Model
The box model consists of margins, borders, padding, and the actual content.

```css
div {
    width: 300px;
    padding: 20px;
    border: 5px solid red;
    margin: 20px;
}
```
### Flexbox
Flexbox provides a more efficient way to lay out, align and distribute space among items in a container.

```css
.container {
    display: flex;
    justify-content: center;
    align-items: center;
    height: 100vh;
}
```
### Grid
CSS Grid Layout is a two-dimensional layout system.

```css
.container {
    display: grid;
    grid-template-columns: repeat(3, 1fr);
    gap: 10px;
}
```
## Advanced HTML
### Semantic HTML
Semantic HTML introduces meaning to the web page rather than just presentation.

- **Header**:` <header></header>`
- **Navigation**: `<nav></nav>`
- **Main**: `<main></main>`
- **Article**: `<article></article>`
- **Section**: `<section></section>`
- **Footer**: `<footer></footer>`
### Multimedia
Embedding audio and video content.

```html
<video controls>
    <source src="movie.mp4" type="video/mp4">
    Your browser does not support the video tag.
</video>

<audio controls>
    <source src="audio.mp3" type="audio/mp3">
    Your browser does not support the audio element.
</audio>
```
### HTML5 APIs
HTML5 provides several APIs to enhance web functionality.

- **Geolocation API**
- **Canvas API**
- **Drag and Drop API**
- **Web Storage API**
- **Advanced CSS**
- **Responsive Design**
- **Creating web pages that look good on all devices.**

```css
@media (max-width: 600px) {
    body {
        background-color: lightblue;
    }
}
```
### Animations and Transitions
Adding animations and transitions to elements.

```css
/* Transitions */
button {
    transition: background-color 0.3s ease;
}
button:hover {
    background-color: blue;
}

/* Animations */
@keyframes example {
    from {background-color: red;}
    to {background-color: yellow;}
}
div {
    width: 100px;
    height: 100px;
    background-color: red;
    animation-name: example;
    animation-duration: 4s;
}
```
### CSS Preprocessors
CSS preprocessors like Sass and LESS add functionality to CSS.

Example (Sass):

```scss
$primary-color: #333;

body {
    color: $primary-color;
}
```
### CSS Frameworks
CSS frameworks like Bootstrap and Tailwind CSS provide pre-designed components and styles.

Example (Bootstrap):

```html
<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.0.0/css/bootstrap.min.css">

<div class="container">
    <div class="row">
        <div class="col">
            Column 1
        </div>
        <div class="col">
            Column 2
        </div>
    </div>
</div>
```
## External tools
### Website
- [w3school](https://www.w3schools.com/html/)
- [codewithharry](https://www.codewithharry.com/tutorial/how-html-works/)
- [sigma-web-dev github](https://github.com/CodeWithHarry/Sigma-Web-Dev-Course)
### Toturials
- watch [codewithharry sigma web dev](https://www.youtube.com/playlist?list=PLu0W_9lII9agq5TrH9XLIKQvv0iaF2X3w) from videc 1 to 13 for HTML and from 14 to 52 for css

## Conclusion
Congratulations! You've covered HTML and CSS from the basics to advanced topics. Continue practicing by building more complex web pages and exploring further web development concepts. 