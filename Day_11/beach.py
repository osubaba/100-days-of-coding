from flask import Flask, render_template, request, redirect, url_for
from flask_sqlalchemy import SQLAlchemy

from flask import Flask

app = Flask(__name)

@app.route('/')
def hello():
    return "Hello, World!"

if __name__ == '__main__':
    app.run()

app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///beach_workers.db'
db = SQLAlchemy(app)

class Worker(db.Model):
    id = db.Column(db.Integer, primary_key=True)
    name = db.Column(db.String(100))
    occupation = db.Column(db.String(100))
    address = db.Column(db.String(100))

@app.route('/')
def index():
    workers = Worker.query.all()
    return render_template('index.html', workers=workers)

@app.route('/add_worker', methods=['POST'])
def add_worker():
    name = request.form.get('name')
    occupation = request.form.get('occupation')
    address = request.form.get('address')

    worker = Worker(name=name, occupation=occupation, address=address)

    # Create an application context before interacting with the database
    with app.app_context():
        db.session.add(worker)
        db.session.commit()

    return redirect(url_for('index'))

if __name__ == '__main__':
    db.create_all()
    app.run(debug=True)

