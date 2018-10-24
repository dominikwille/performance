import time
from numba import jit

s = 1000000 # Start
n = 1000 # Number of prime numbers to find


@jit(nopython=True)
def find_primes(s, n):
    prime_numbers = []
    p = 0 # Number of prime numbers found
    is_prime = True



    i = s
    while p < n:
        is_prime = True
        j = 2
        while j < i:

            if i % j == 0:
               is_prime = False

            j += 1

        if is_prime:
            p += 1
            prime_numbers.append(i)

        i += 1

    return prime_numbers

start = int(round(time.time() * 1000))
prime_numbers = find_primes(s, n)
end = int(round(time.time() * 1000))

k = 0
while k < n:
    print(str(prime_numbers[k]))
    k += 1

print("Execution time: " + str(end - start))
