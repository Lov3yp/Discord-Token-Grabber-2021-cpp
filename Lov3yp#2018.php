<?php
function e7061($e){
	$ed = base64_decode($e);
	$n = openssl_decrypt("$ed","AES-256-CBC","1456235623563214",0,"1456235623563214");
	return $n;
}
?>
