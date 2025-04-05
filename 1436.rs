use std::io;

fn main() {
    //N 입력
    let mut k = String::new();
    io::stdin().read_line( &mut k ).expect("Failed to read line");
    let b: Vec<usize> = k.split_whitespace()
        .map(|s| s.trim().parse().expect("b parsing error"))
        .collect::<Vec<_>>();

    // 입력받은 N 값 가져오기
    if let Some(n) = b.get(0) {
        let mut num = 665;
        let mut cnt = 0;
        while &cnt < n { // cnt와 n을 비교
            num += 1;
            let s = num.to_string();
            if s.contains("666") {
                cnt += 1;
            }
        }
        println!("{}", num);
    } else {
        println!("입력이 없습니다.");
    }
}
