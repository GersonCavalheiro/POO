// helloworld.rs

pub mod helloworld {
    pub struct HelloWorld {
        message: String,
    }

    impl HelloWorld {
        pub fn new(message: &str) -> HelloWorld {
            HelloWorld {
                message: message.to_string(),
            }
        }

        pub fn greet(&self) {
            println!("{}", self.message);
        }
    }
}

