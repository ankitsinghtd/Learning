from flask import Flask, request 
import psycopg2 
# Initialize the Flask application 
app = Flask(__name__) 
# Connect to the database 
try: 
 conn = psycopg2.connect( 
 host="localhost", 
 database="mydatabase", 
 user="mydatabaseuser", 
 password="mypassword" 
 ) 
except: 
 print ("Unable to connect to the database.") 
# Create a cursor for executing database queries 
cursor = conn. cursor () 
# Define the route for displaying the user's profile 
@app. route('/profile') 
def profile (): 
 # Get the user ID from the query string 
 user_id = request.args.get('user_id') 
 # Check that the user ID is a number 
 if not user_id. isdigit (): 
 return "Invalid user ID"
# Use parameterized queries to execute the database query 
 try: 
 cursor. execute ("SELECT * FROM users WHERE id=%s", (user_id,)) 
 except: 
 return "Unable to execute the database query" 
 # Fetch the result of the database query 
 result = cursor. fetchone () 
 # Check if the result is None, which means that no user was found with the given ID 
 if result is None: 
 return "User not found" 
 # Return the result as a string 
 return str(result) 
# Start the Flask application 
if __name__ == '__main__': 
 app.run ()