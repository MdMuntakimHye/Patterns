const birds = ["Parrot", "Falcon", "Owl"];

for (const bird of birds) {
  console.log(bird);
}

function double(number) {
   return number * 2;
}
const numbers = [5, 2, 7, 6];
const doubled = numbers.map(double);
console.log(doubled);

function uppercase(city) {
    return city.toUpperCase();
}
const cities = ["London", "Liverpool", "Totnes", "Edinburgh"];
const upcase = cities.map(uppercase);
console.log(upcase);


//you'll want to create a new array containing only the items in the original array that match some test. You can do that using filter()
//Rule of thumb

//Use map() → “I want to change every item”

//Use filter() → “I want to keep only some items”

function isLong(city) {
    return city.length > 8;
}
const cities2 = ["London", "Liverpool", "Totnes", "Edinburgh"];
const longer = cities2.filter(isLong);
console.log(longer);

