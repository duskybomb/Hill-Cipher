# Hill-Cipher
<h2>Source Code Files</h2>
	<b>mainhillcipher.cpp</b>: this file contains 'main' function<br>
	<b>encrypt.cpp</b>: this is to write the algorithm of encrypting text using hill cipher<br>
	<b>decrypt.cpp</b>: this is to write the algorithm of decrypting text using hill cipher<br>
	<b>linearalgebra.cpp</b>: this file contains the basic operations implemented on the matrix<br>
	<b>hillcipher.h</b>: this is the header file which binds all the files<br>

IMPLEMENTATION OF HILL CIPHER

<h2>Encryption of plain text</h2>
<ul>
<li>Generate a random matrix 3x3 matrix, this will act as a key.<br>
<li>Multiply it with the text with sets of 3 characters,a set of three characters is taken because rows columns of left matrix should be equal to row of right matrix<br>
<li>Take modulo 95 of the resultant matrix, ASCII
<li>Add 32 to each row, to get it in ASCII code
<li>Voila! you have encrypted the plain text<br>
</ul>
<h2>Decryption of plain text</h2>
Coming Soon!
