-- Keep a log of any SQL queries you execute as you solve the mystery.
-- looking for row in crime_scene_reports when duck was stolen--
SELECT * FROM crime_scene_reports WHERE day = 28 AND month = 7 AND street = 'Humphrey Street';
--| 295 | 2023 | 7     | 28  | Humphrey Street | Theft of the CS50 duck took place at 10:15am
 --at the Humphrey Street bakery. Interviews were conducted today with three witnesses who were--
 --present at the time – each of their interview transcripts mentions the bakery.--
 
