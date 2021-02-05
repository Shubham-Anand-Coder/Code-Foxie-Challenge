const mysql=require("mysql");
const bcrypt=require('bcryptjs');
const jwt=require('jsonwebtoken');
const dotenv=require("dotenv");




const db = mysql.createConnection({
  host : process.env.DATABASE_HOST,
  user : 'root',
  password : '',
  database : process.env.DATABASE
});




exports.register= (req,res) => {
  console.log(req.body);
  const {name, email, password, passwordConfirm } = req.body;
  db.query('SELECT email FROM users WHERE email = ? ', [email], async (error,results) => {
    if(error)
    {
      console.log(error);
    }
    if(results.length >0 )
    {
      return res.render('register', {
        message : 'The email is already in use'
      });
    }
    else if(password !== passwordConfirm)
    {
      return res.render('register', {
          message : 'Password dont match'
        });
    }
    let hashedPassword = await bcrypt.hash(password, 8);
    console.log(hashedPassword);

      db.query('INSERT INTO users SET ?', { name : name , email : email, password : hashedPassword}, (errors, results) => {
        if(error)
        {
          console.log(error);
        }
        else {
          console.log(results);
          return res.render('register', {
              message : 'User Registed'
            });
        }
      })


  })



}
