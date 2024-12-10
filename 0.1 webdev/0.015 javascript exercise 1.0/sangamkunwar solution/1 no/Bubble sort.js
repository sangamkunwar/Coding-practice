
function bblSort(arr) {
    for (var a = 0; a < arr.length; a++) {
        for (var b = 0; b < (arr.length - a -1); b++) {
            if (arr[b] > arr[b + 1]) {
                var c =narr[b]
                arr[b] = arr[b + 1]
                arr[b +1] = c
            }
        }
    }
    console.log(arr);
}
var arr = [6,3,10,8,5,9,1,4,2,7];
bblSort(arr);