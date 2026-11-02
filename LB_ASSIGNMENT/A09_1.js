// Question: Accept a number and display the given pattern.

function Display(iNo)
{
let iCnt = 0;

if(iNo < 0)
{
    iNo = -iNo;
}

for(iCnt = 1; iCnt <= iNo; iCnt++)
{
    console.log("*");
}

for(iCnt = 1; iCnt <= iNo; iCnt++)
{
    console.log("#");
}

}
function main()
{
Display(5);
}

main();
