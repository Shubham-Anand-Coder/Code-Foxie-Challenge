const express=require("express");
const path=require('path');
const mysql=require("mysql");
const dotenv=require("dotenv");
const jwt=require('jsonwebtoken');
const bcrypt=require('bcryptjs');
const cookieParser=require('cookie-parser');


const app=express();
dotenv.config({ path : './.env' });

const publicDirectory=path.join(__dirname,'./public');
app.use(express.urlencoded({ extended : false }));
app.use(express.json());
app.use(express.static(publicDirectory));
app.set('view engine', 'hbs');





const db = mysql.createConnection({
  host : process.env.DATABASE_HOST,
  user : 'root',
  password : '',
  database : process.env.DATABASE
});


db.connect((error) => {
  if(error) console.log(error);
  else console.error("my sql connected...")

});

// DEfine routes
app.use('/',require('./routes/pages'));+
app.use('/auth', require('./routes/auth'));



app.listen(5015, () =>
{
  console.log("IT started");

});
