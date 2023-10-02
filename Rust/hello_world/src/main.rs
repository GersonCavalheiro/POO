// main.rs
mod helloworld;

use helloworld::helloworld::HelloWorld;

fn main() {
    let hello = HelloWorld::new("Hello, World!");
    hello.greet();
}
