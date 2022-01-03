pub fn add_one() -> &'static str{
    let word= "going";
    word
}

#[cfg(test)]
mod test{
    use super::*;

    #[test]
    fn one(){
        let go= "going";
        assert_eq!(go, add_one());
    }
}