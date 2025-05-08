import Data.Ratio

-- Function to convert a positive number to compact mixed rational form
toCompactRational :: Double -> String
toCompactRational x
    | x < 0     = error "Input must be positive"
    | otherwise = case properFraction x of
        (i, f) | f == 0    -> show i  -- Whole number case
               | otherwise -> let rat = toRational f
                                 num = numerator rat
                                 den = denominator rat
                             in show i ++ " + " ++ show num ++ "/" ++ show den

-- Helper function to display results nicely
displayResult :: Double -> String
displayResult x = "Compact rational form of " ++ show x ++ " is: " ++ toCompactRational x

-- Main function to get user input and display output
main :: IO ()
main = do
    putStrLn "Enter a positive number:"
    input <- getLine
    let number = read input :: Double
    if number >= 0
        then putStrLn $ displayResult number
        else putStrLn "Error: Please enter a positive number."
