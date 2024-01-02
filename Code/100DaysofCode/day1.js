// Javascript program to reverse a String	
// Reverse the letters of the word 

let A ="This is 100DaysofCode";
console.log(reverseWords(A));


function rev_str(str, start, end)
{
	let temp;
	while (start <= end) 
	{
		temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}
function reverseWords(str)
{
	str = str.split("");
	let start = 0;
	for (let end = 0;end < str.length; end++) 
	{
		if (str[end] == ' ') 
		{
			rev_str(str, start, end);
			start = end + 1;
		}
	}
	rev_str(str, start, str.length - 1);
	rev_str(str, 0, str.length - 1);
	return str.join("");
}