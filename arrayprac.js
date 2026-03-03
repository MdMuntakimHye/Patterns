const myArray = [
  "Ryu",
  "Ken",
  "Chun-Li",
  "Cammy",
  "Guile",
  "Sakura",
  "Sagat",
  "Juri",
];
myArray.pop();
myArray.push("Goku","Jinwoo");
for(let i=0;i<myArray.length ;i++){
    myArray[i] = `${myArray[i]}(${i}) `;
}
const myString = myArray.join("-");
console.log(myString);
const birds = ["Parrots", "Falcons", "Eagles", "Emus", "Caracaras", "Egrets"];
const indexOfEagles = birds.indexOf("Eagles");
console.log(indexOfEagles);
birds.splice(indexOfEagles,1);
console.log(birds);
function birdsWithE(birds) {
    return birds.startsWith("E");
}

const eBirds = birds.filter(birdsWithE);
console.log(startsWithE);