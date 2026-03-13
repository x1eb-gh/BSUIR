let card = document.getElementsByClassName("product-section-card");
let reload = true;

setInterval(() => {
	for(let i = 0; i < 8; i++){
		if(reload === true){
			card[i].classList.add("product-card-" + (i + 1) + "-" + 2);
			card[i].classList.remove("product-card-" + (i + 1) + "-" + 1);
			console.log("Успешно" + i + " " + reload);
		}
		else if(reload === false){
			card[i].classList.add("product-card-" + (i + 1) + "-" + 1);
			card[i].classList.remove("product-card-" + (i + 1) + "-" + 2);
			console.log("Успешно" + i + " " + reload);
		}
	}
	if(reload === false) reload = true;
	else if(reload === true) reload = false;
}, 6000);