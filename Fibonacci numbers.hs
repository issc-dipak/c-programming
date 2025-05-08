-- Function to generate the first n Fibonacci numbers (n >= 20)
fibonacciSequence :: Int -> [Integer]
fibonacciSequence n 
    | n < 20     = error "n must be >= 20"
    | otherwise  = take n fibs
    where
        fibs = 0 : 1 : zipWith (+) fibs (tail fibs)

-- Example usage:
main :: IO ()
main = do
    putStrLn "Enter the number of Fibonacci terms to generate (n >= 20):"
    input <- getLine
    let n = read input
    if n >= 20
        then do
            let sequence = fibonacciSequence n
            putStrLn $ "First " ++ show n ++ " Fibonacci numbers:"
            print sequence
        else putStrLn "Error: n must be at least 20"
