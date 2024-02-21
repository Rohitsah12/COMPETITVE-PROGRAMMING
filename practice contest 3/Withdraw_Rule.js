function withDraw_rule(current_amount,withdraw_Amount,via){
    if(current_amount<withdraw_Amount){
        console.log("Insufficient Balance");
    }
    else{
    if(via=="UPI"){
        if(withdraw_Amount>100000){
            console.log("Limit exceeded");
        }
        else if(withdraw_Amount){
            current_amount-=withdraw_Amount;
        }
            console.log("Balance:",current_amount);
    }
    else if(via=="TapTo"){
        if(withdraw_Amount>1000){
            console.log("Limit exceeded");
        }
        else if(withdraw_Amount){
            current_amount-=withdraw_Amount;
        }
            console.log("Balance:",current_amount);
    }
    else{
        if(withdraw_Amount>1000000){
            console.log("Limit exceeded");
        }
        else if(withdraw_Amount){
            current_amount-=withdraw_Amount;
        }
            console.log("Balance:",current_amount);
    }
}
}