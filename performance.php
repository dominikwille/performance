<?php

$s = 1000000; // Start
$n = 1000; // Number of prime numbers to find

$prime_numbers = array();
$p = 0; // Number of prime numbers found
$is_prime = TRUE;

$start = microtime(TRUE);
for ($i = $s; $p < $n; $i++) {
  $is_prime = true;

  for ($j = 2; $j < $i; $j++) {

    if ($i % $j == 0) {
      $is_prime = false;
    }
  }

  if ($is_prime) {
    $prime_numbers[$p++] = $i;
  }

}
$end = microtime(TRUE);


for($k = 0; $k < $n; $k++) {
  printf("%s\n", $prime_numbers[$k]);
}

printf("Execution time: %s", ($end - $start) * 1000);
