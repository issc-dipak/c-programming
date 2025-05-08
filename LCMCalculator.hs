module LCMCalculator where

-- Function to calculate GCD using Euclid's algorithm
gcd' :: Integer -> Integer -> Integer
gcd' a 0 = abs a
gcd' a b = gcd' b (a `mod` b)

-- Function to calculate LCM using the relationship: LCM(a,b) = (a*b) / GCD(a,b)
lcm' :: Integer -> Integer -> Integer
lcm' a b 
    | a == 0 || b == 0 = 0  -- LCM of 0 and any number is 0
    | otherwise = abs (a * b) `div` (gcd' a b)

-- Main function to get user input and display output
main :: IO ()
main = do
    putStrLn "Enter two numbers separated by space:"
    input <- getLine
    case map read (words input) :: [Integer] of
        [x, y] -> putStrLn $ "The LCM of " ++ show x ++ " and " ++ show y ++ " is: " ++ show (lcm' x y)
        _      -> putStrLn "Error: Please enter exactly two integers."
