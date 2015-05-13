fn fib() -> u64 {
  let mut f0: u32 = 0;
  let mut f1: u32 = 1;
  let mut tmp: u32;
  let mut sum: u64 = 0;
  while f1 < 4000000 {
    if f1 % 2 == 0 {
      sum += f1 as u64;
    }
    tmp = f1;
    f1 = f0+f1;
    f0 = tmp;
  }
  sum
}


fn main() {
  println!("{}", fib());
}
