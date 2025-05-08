module Fibonacci where

-- Infinite list of Fibonacci numbers
fibs :: [Integer]
fibs = 0 : 1 : zipWith (+) fibs (tail fibs)

-- Function to get first n Fibonacci numbers (n >= 20)
getFibonacciSequence :: Int -> [Integer]
getFibonacciSequence n
    | n < 20     = error "n must be at least 20"
    | otherwise  = take n fibs

-- Main function with user interaction
main :: IO ()
main = do
    putStrLn "Enter the number of Fibonacci terms to generate (n >= 20):"
    input <- getLine
    let n = read input
    if n >= 20
        then do
            let sequence = getFibonacciSequence n
            putStrLn $ "First " ++ show n ++ " Fibonacci numbers:"
            mapM_ print sequence
        else putStrLn "Error: n must be at least 20"
