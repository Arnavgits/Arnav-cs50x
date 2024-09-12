import csv
import sys


def main():

    # TODO: Check for command-line usage
    if len(sys.argv) != 3:
        print("Enter valid arguments")
        sys.exit(1)

    # TODO: Read database file into a variable
    with open(sys.argv[1]) as file:
        reader = csv.DictReader(file)
        database = list(reader)

    # TODO: Read DNA sequence file into a variable
    with open(sys.argv[2]) as file:
        reader2 = file.read()

    strs = list(database[0].keys())[1:]

    # TODO: Find longest match of each STR in DNA sequence
    str_count = {}
    for str_sequence in strs:
        str_count[str_sequence] = longest_match(reader2 , str_sequence)

    # TODO: Check database for matching profiles
    for person in database:
        if all(int(person[str_sequence]) == str_count[str_sequence] for str_sequence in strs):
            print(person['name'])
            return

    print("No match")

def longest_match(sequence, subsequence):
    """Returns length of longest run of subsequence in sequence."""

    # Initialize variables
    longest_run = 0
    subsequence_length = len(subsequence)
    sequence_length = len(sequence)

    # Check each character in sequence for most consecutive runs of subsequence
    for i in range(sequence_length):

        # Initialize count of consecutive runs
        count = 0

        # Check for a subsequence match in a "substring" (a subset of characters) within sequence
        while sequence[i: i + subsequence_length] == subsequence:
            count += 1
            i += subsequence_length
        # If a match, move substring to next potential match in sequence

        longest_run = max(longest_run, count)

        # Continue moving substring and checking for matches until out of consecutive matches

            # Adjust substring start and end

            # If there is a match in the substring

            # If there is no match in the substring

        # Update most consecutive matches found

    # After checking for runs at each character in seqeuence, return longest run found
    return longest_run


main()
