if (process.argv.length <= 2){
	console.log("No Length Specifiyed, Exiting Process.");
	console.log(" (you gotta do, node passwordgen.js 128 for 128 characters)");
} else {
	var length = process.argv[2];
	var charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890-=\;',./`!@#$%^&*()_+|:?><";
	var retVal = "";
	for (var i = 0, n = charset.length; i < length; ++i) {
		retVal += charset.charAt(Math.floor(Math.random() * n));
	}
	console.log(retVal);
}
