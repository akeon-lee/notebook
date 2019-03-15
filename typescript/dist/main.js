"use strict";
var Colors;
(function (Colors) {
    Colors["White"] = "#FFFFFF";
    Colors["Black"] = "#000000";
    Colors["Red"] = "#ff0000";
})(Colors || (Colors = {}));
var heading = document.querySelector('#heading');
var foo = Colors.Red;
console.log(foo);
