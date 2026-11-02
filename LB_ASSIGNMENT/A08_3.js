//Question:Write a program to find factorial

function Factorial(iNO)
{
    let iCount=0
    let iFact=1

    if(iNO<0)
    {
        iNO = -iNO
    }

    for(iCount =1;iCount<=iNO ; iCount++)
    {
        iFact = iFact*iCount
    }

    console.log(iFact)
}

function main()
{
    Factorial(5)
}
main()