# This file should contain all the record creation needed to seed the database with its default values.
# The data can then be loaded with the bin/rails db:seed command (or created alongside the database with db:setup).
#
# Examples:
#
#   movies = Movie.create([{ name: "Star Wars" }, { name: "Lord of the Rings" }])
#   Character.create(name: "Luke", movie: movies.first)

tibi = User.create(email: 'tibi@example.com', password: '123456', password_confirmation: '123456', role: 'admin')
test = User.create(email: 'test@example.com', password: '123456', password_confirmation: '123456')
random = User.create(email: 'random@example.com', password: '123456', password_confirmation: '123456')

tibi.joined_rooms << Room.create(name: 'General', is_private: false)
tibi.joined_rooms << Room.create(name: 'Test', is_private: false)
tibi.joined_rooms << Room.create(name: 'Random', is_private: false)

test.joined_rooms << Room.find_by_name('Test')

random.joined_rooms << Room.find_by_name('Random')
