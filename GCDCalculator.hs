module GCDCalculator where

-- Function to calculate GCD using Euclid's algorithm
gcd' :: Integer -> Integer -> Integer
gcd' a 0 = abs a               -- Base case: GCD(a, 0) = a
gcd' a b = gcd' b (a `mod` b)  -- Recursive case: GCD(a, b) = GCD(b, a mod b)

-- Main function to get user input and display output
main :: IO ()
main = do
    putStrLn "Enter two integers separated by space:"
    input <- getLine
    case map read (words input) :: [Integer] of
        [x, y] -> putStrLn $ "The GCD of " ++ show x ++ " and " ++ show y ++ " is: " ++ show (gcd' x y)
        _      -> putStrLn "Error: Please enter exactly two integers."
