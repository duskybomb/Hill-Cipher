# Hill-Cipher
<p>How often we need to send someone a message and make sure no one else reads it. To encounter this problem the messages sent across to others are encoded more often than not. The algorithms used are as complex as Nazi’s Enigma and as simple as Caesar Cipher. 
Hill Cipher, invented by Lester S Hill in 1029, is a polygraphic substitution cipher based on Linear Algebra and particular requires the user to have an elementary understanding of the matrices. In this project, we have developed an extended algorithm for Hill Cipher (both for encryption and decryption) and implement it on MATLAB and C++.</p>

<h2>Source Code Files</h2>
	<h5>CPP</h5>
	<b>mainhillcipher.cpp</b>: this file contains 'main' function<br>
	<b>encrypt.cpp</b>: this is to write the algorithm of encrypting text using hill cipher<br>
	<b>decrypt.cpp</b>: this is to write the algorithm of decrypting text using hill cipher<br>
	<b>linearalgebra.cpp</b>: this file contains the basic operations implemented on the matrix<br>
	<b>hillcipher.h</b>: this is the header file which binds all the files<br>
	<h5>MATLAB</h5>
	<b>Hill_Cipher.m</b> : this file contains 'main' function<br>
	<b>Encrypt.m</b>: this is to write the algorithm of encrypting text using hill cipher<br>
	<b>Decrypt.m</b>: this is to write the algorithm of decrypting text using hill cipher<br>

<h4>Encrypt()</h4>
<b>Input</b>
<ol>
	<li>A 3x3 matrix which works as a key matrix, key[3][3]</li>
	<li>A plaintext string message</li>
</ol>

<b>Output</b>
<ol>
	<li>An encoded string</li>
</ol>

<b>Constrains</b>
<ol>
	<li>-32,000 ≤ key ≤ 32,000</li>
	<li>message ∈ {A, B, C …, Y, Z}</li>
</ol>

<b>Working</b>
<ol>
	<li>Convert plaintext to ASCII number then subtract 33.</li>
	<li>Multiply key matrix with the plain text and mod92 operator</li>
	<li>Add 33 to the resultant matrix to get the ASCII code of respective elements in the matrix</li>
</ol>
<h4>Decrypt()</h4>
<b>Output</b>
<ol>
	<li>Decoded message same as the initial input message</li>
</ol>
<b>Working</b>
<ol>
<li>Finding inverse of key</li>
<li>Multiply the inverse of key matrix with the ASCII matrix</li>
<li>Use mod92 operator on the matrix and add 33 to get elements in ASCII form.</li>
</ol>

## Authors

<a href="http://ducic.ac.in/"><img src="https://user-images.githubusercontent.com/16596327/30467922-9d4985ce-9a05-11e7-81aa-9f5348eb40de.png" align="right" width="300"/></a>

* **[Harshit Joshi](https://github.com/duskybomb)** 
* **[Manas Awasthi](https://github.com/the-marvex)** 
* **Mayank Malik** 
	
