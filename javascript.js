var a=prompt("enter the length of the string")
var k=[];
function add(){
	var x=prompt("enter the value")
	k.push(x);
}
for(var i=0;i<a;i++)
{
	add();
}
console.log(k)