-- Keep a log of any SQL queries you execute as you solve the mystery.
-- looking for row in crime_scene_reports when duck was stolen--
SELECT * FROM crime_scene_reports WHERE day = 28 AND month = 7 AND street = 'Humphrey Street' AND description LIKE "%duck%";
--| 295 | 2023 | 7     | 28  | Humphrey Street | Theft of the CS50 duck took place at 10:15am
 --at the Humphrey Street bakery. Interviews were conducted today with three witnesses who were--
 --present at the time – each of their interview transcripts mentions the bakery.--

SELECT * FROM interviews WHERE month = 7 AND day = 28 AND transcript LIKE '%thief%';
-- | 161 | Ruth    | 2023 | 7     | 28  | Sometime within ten minutes of the theft, I saw the thief get into a car in the bakery parking lot and drive away. If you have security footage from the bakery parking lot, you might want to look for cars that left the parking lot in that time frame.                                                          |
--| 162 | Eugene  | 2023 | 7     | 28  | I don't know the thief's name, but it was someone I recognized. Earlier this morning, before I arrived at Emma's bakery, I was walking by the ATM on Leggett Street and saw the thief there withdrawing some money.--
--| 163 | Raymond | 2023 | 7     | 28  | As the thief was leaving the bakery, they called someone who talked to them for less than a minute. In the call, I heard the thief say that they were planning to take the earliest flight out of Fiftyville tomorrow. The thief then asked the person on the other end of the phone to purchase the flight ticket.--

SELECT * FROM bakery_security_logs WHERE day = 28 AND hour = 10 AND activity = 'exit';
--9 rows; license_plate--

SELECT * FROM atm_transactions WHERE month = 7 AND day = 28 AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw';
--8 rows; account_number and amount--

SELECT * FROM phone_calls WHERE month = 7 AND day = 28 AND duration < 60;
--9 rows; caller number and reciever number;




