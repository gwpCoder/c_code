// JavaScript Document
function initNum() {
    var numArr = [];
    //获取排序数字的个数
    var num = document.getElementById("form-control").value;
    var numArray = document.getElementById("num-input");
    numArr.length = 0;
    numArray.value = '';
    for (var i = 0; i < num; i++) {
        numArr.push(randomGet(1, 50));
        numArray.value = numArr;
    }
    var oUl = document.getElementsByClassName("sort_li")[0];
    this.Arr = [];
    init(numArr,oUl);
    sort(numArr);
    animation(oUl);
}
function init(numArr,oUl) {
    let html = "";
    numArr.map((item) => {
        html += '<li class="" style="height: ' + item * 10 + 'px"><p>' + item + '</p></li>';
    });
    oUl.innerHTML = html;
}
 
function bubbleSortDom(arr, num, index, flag,oUl) {
    let html = '',
        i,
        className = "";
    for (i = 0; i < arr.length; i++) {
        if (flag === true) {
            className = "";
        } else {
            if (i == num + 1 || i == num) {
                className = " bubbling";
            } else if (i > index) {
                className = "completed";
            } else {
                className = "";
            }
        }
        html += '<li class="' + className + '" style="height: ' + arr[i] * 10 + 'px"><p>' + arr[i] + '</p></li>';
    }
    oUl.innerHTML = html;
    document.getElementById("num-out").value = arr;
}
 
function animation(oUl) {
    let Arr = this.Arr;
    //清空
    clearInterval(this.timer);
    this.timer = setInterval(function(){
        if (Arr.length > 0) {
            this.bubbleSortDom(Arr[0][0], Arr[0][1], Arr[0][2], Arr[0][3],oUl);
            Arr.shift();
        } else {
            clearInterval(this.timer);
        }
    }, 500);
}
 
function randomGet(a, b) {//产生一组随机数
    var result = Math.random() * (b - a) + a;
    return result >> 0;
}
 
// 冒泡排序算法实现
function sort(numArr) {
    let resArr = numArr.slice(),
        len = resArr.length,
        temp,
        sortOk;
    for (let i = 0; i < len - 1; i++) {
        sortOk = true;
        for (let j = 0; j < len - i - 1; j++) {
            temp = resArr[j];
            if (resArr[j + 1] < resArr[j]) {
                this.pushArr(resArr.slice(), j, len - 1 - i, false);
                temp = resArr[j];
                resArr[j] = resArr[j + 1];
                resArr[j + 1] = temp;
                sortOk = false;
            }
            this.pushArr(resArr.slice(), j, len - 1 - i, false);
        }
        if (sortOk == true) {
            this.pushArr(resArr.slice(), -1, -1, true);
            break;
        }
    }
}
 
function pushArr() {
    this.Arr.push(Array.prototype.slice.call(arguments));
	}


