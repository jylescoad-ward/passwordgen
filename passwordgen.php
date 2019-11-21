<?php

	$passlength = 64;

	$alphabet = 'abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*(){}|:"<>?-=[]\;,./`~';
	$pass = array(); //remember to declare $pass as an array
	$alphaLength = strlen($alphabet) - 1; //put the length -1 in cache
	for ($i = 0; $i < $passlength; $i++) {
	    $n = rand(0, $alphaLength);
	    $pass[] = $alphabet[$n];
	}
	echo implode($pass); //turn the array into a string
?>