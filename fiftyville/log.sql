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

SELECT * FROM bakery_security_logs WHERE day = 28 AND hour = 10 AND activity = 'exit' AND minute < 10;
--9 rows; license_plate--

SELECT * FROM atm_transactions JOIN bank_accounts ON atm_transactions.account_number = bank_accounts.account_number
WHERE month = 7 AND day = 28 AND atm_location = 'Leggett Street' AND transaction_type = 'withdraw';
--8 rows; account_number and amount--

SELECT * FROM phone_calls WHERE month = 7 AND day = 28 AND duration < 60;
--9 rows; caller number and reciever number;

SELECT * FROM people JOIN bakery_security_logs ON bakery_security_logs.license_plate = people.license_plate WHERE bakery_security_logs.license_plate = (
SELECT license_plate FROM bakery_security_logs WHERE day = 28 AND hour = 10 AND activity = "exit")
AND activity ="exit";
--After joining people and bakery_security-logs I get--
--name - Vanessa , phone_number - (725) 555-4692, passsport_number - 2963008352--

SELECT * FROM phone_calls JOIN people ON people.phone_number = phone_calls.caller JOIN bakery_security_logs ON bakery_security_logs.license_plate = people.license_plate
WHERE phone_calls.day = 28 AND phone_calls.duration < 60;

SELECT bakery_security_logs.license_plate, people.name, bank_accounts.account_number, atm_transactions.atm_location, phone_calls.duration,flights.hour,
flights.origin_airport_id, flights.destination_airport_id,phone_calls.receiver FROM bakery_security_logs
JOIN people ON bakery_security_logs.license_plate = people.license_plate JOIN bank_accounts ON bank_accounts.person_id = people.id JOIN atm_transactions
ON atm_transactions.account_number = bank_accounts.account_number JOIN phone_calls ON phone_calls.caller = people.phone_number
JOIN passengers ON passengers.passport_number = people.passport_number JOIN flights ON passengers.flight_id = flights.id
WHERE bakery_security_logs.day = 28 AND bakery_security_logs.hour = 10 AND bakery_security_logs.activity = "exit" AND bakery_security_logs.minute < 25
AND atm_transactions.month = 7 AND atm_transactions.day = 28 AND atm_transactions.atm_location = "Leggett Street"
AND atm_transactions.transaction_type = "withdraw" AND phone_calls.month = 7 AND phone_calls.day = 28 AND phone_calls.duration < 60
AND flights.month = 7 AND flights.day = 29 LIMIT 1;

--| license_plate | name  | account_number |  atm_location  | duration | hour | origin_airport_id | destination_airport_id |    receiver    |--

--| 94KL13X       | Bruce | 49610011       | Leggett Street | 45       | 8    | 8                 | 4                      | (375) 555-8161 |--

SELECT * FROM people WHERE phone_number IN (
   SELECT receiver FROM phone_calls WHERE duration < 60 AND day = 28 AND caller IN (
      SELECT phone_number FROM people WHERE name = "Bruce"
   )
);

--|   id   | name  |  phone_number  | passport_number | license_plate |--

--| 864400 | Robin | (375) 555-8161 | NULL            | 4V16VO0       |--

