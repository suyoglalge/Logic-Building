//Question:Write a program to display its TAble in Reverse

function Factorial(iNO)
{
    let iCount=0
    let iMultiply=0

    if(iNO<0)
    {
        iNO = -iNO
    }

    for(iCount =10 ;iCount>=1 ; iCount--)
    {
        iMultiply = (iNO*iCount)

        console.log(iMultiply)

    }

    
}

function main()
{
    Factorial(5)
}
main()