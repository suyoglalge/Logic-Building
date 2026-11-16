function Pattern( iNo)
{
    let ch = 'A'
    let cnt =0
    for(cnt =1 ; cnt<=iNo ; cnt++)
    {
        console.log(ch)
        ch = String.fromCharCode(ch.charCodeAt(0) + 1)   //new
    }
}

function int()
{
    let iValue1 =5

    Pattern(iValue1)
}
int()