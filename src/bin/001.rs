fn main() {
  let mut sum = 0;
  let (a, b) = (3, 5);

  for x in 1..(1000/a + 1) {
    if (x*a) % 5 != 0 {
      sum += x*a;
    }
  }
  for x in 1..(1000/b) {
    sum += x*b;
  }

  println!("{}", sum);
}
