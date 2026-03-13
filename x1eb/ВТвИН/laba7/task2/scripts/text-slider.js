let wrap = document.getElementsByClassName("slider-section-text-wrap");
let text = document.getElementsByClassName("slider-section-text");
let title = document.getElementsByClassName("slider-section-title");
let rect = document.getElementsByClassName("slider-section-rectangle");
let counter = 0;

setInterval(() => {
	if(counter != 4){
		text[counter + 1].classList.remove("invisible-text");
		text[counter].classList.add("invisible-text");
		title[counter + 1].classList.remove("invisible-text");
		title[counter].classList.add("invisible-text");
		rect[counter + 1].classList.add("slider-section-rectangle-full");
		rect[counter].classList.remove("slider-section-rectangle-full");
		counter++;
	}
	else if(counter === 4){
		text[0].classList.remove("invisible-text");
		text[4].classList.add("invisible-text");
		title[0].classList.remove("invisible-text");
		title[4].classList.add("invisible-text");
		rect[0].classList.add("slider-section-rectangle-full");
		rect[4].classList.remove("slider-section-rectangle-full");
		counter = 0;
	}
}, 5000);