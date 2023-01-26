let bracketflag = 0;
var display = document.getElementById("display");
display.value = "0";
function addtodisplay(myval) {
    if (display.value == "0") {
        display.value = "";
    }

    if (myval == "AC") {
        display.value = "0";
    }
    else if (myval == "X") {
        display.value = display.value.slice(0, -1);
    }
    else if (myval == "()") {

        if (bracketflag == 0) {
            display.value += "(";
            bracketflag = 1;
        }
        else {
            display.value += ")";
            bracketflag = 0;
        }
    }
    else if (myval == "=") {
        try {
            display.value = eval(display.value);
        }
        catch {
            display.value = "Invalid Format";
        }
    }

    else {
        display.value += myval;
    }
}