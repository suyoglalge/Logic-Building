//Question:Write a program to display its TAble

function Factorial(iNO)
{
    let iCount=0

    if(iNO<0)
    {
        iNO = -iNO
    }

    for(iCount =1;iCount<=10 ; iCount++)
    {
        console.log(iNO*iCount)
    }

}

function main()
{
    Factorial(5)
}
main()