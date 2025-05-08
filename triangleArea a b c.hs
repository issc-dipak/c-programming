module TriangleArea where

-- Function to calculate the area of a triangle given three sides
triangleArea :: Double -> Double -> Double -> Maybe Double
triangleArea a b c
    | a <= 0 || b <= 0 || c <= 0         = Nothing  -- sides must be positive
    | a + b <= c || a + c <= b || b + c <= a = Nothing  -- triangle inequality violation
    | otherwise                          = Just area
    where
        s = (a + b + c) / 2  -- semi-perimeter
        area = sqrt (s * (s - a) * (s - b) * (s - c))  -- Heron's formula

-- Function to display the result nicely
displayResult :: Maybe Double -> String
displayResult Nothing = "These sides do not form a valid triangle."
displayResult (Just area) = "The area of the triangle is: " ++ show area ++ " square units."

-- Main function to get user input and display output
main :: IO ()
main = do
    putStrLn "Enter the three sides of the triangle (separated by spaces):"
    input <- getLine
    let sides = map read (words input) :: [Double]
    case sides of
        [a, b, c] -> putStrLn $ displayResult (triangleArea a b c)
        _         -> putStrLn "Error: Please enter exactly three numbers."
