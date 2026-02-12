function maskEmail(email){
  let arroba = email.indexOf("@");
  let user = email.slice(0, arroba);
  let domain = email.slice(arroba, );
  let firstChar = user.slice(0, 1);
  let lastChar = user.slice(-1);
  let asteriks = user.length - 2;
  if (asteriks < 0){
    asteriks = 0;
  }
  let mask = "*".repeat(asteriks);
  return firstChar + mask + lastChar + domain;
}

let email = "email@gmail.com";

console.log(maskEmail("apple.pie@example.com"));
console.log(maskEmail("info@test.dev"));
console.log(maskEmail("user@domain.org"));
console.log(maskEmail(email));

