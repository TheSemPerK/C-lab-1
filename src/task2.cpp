const char* greet(int hour, int min)
{

	if (hour >= 0 && hour < 6 && min >= 1 && min <= 59)
		return ("Good night!");
	else if (hour >= 6 && hour < 12 && min >= 1 && min <= 59)
		return ("Good morning!");
	else if (hour >= 12 && hour < 18 && min >= 1 && min <= 59)
		return ("Good day!");
	else if (hour >= 18 && hour <= 23 && min >= 1 && min < 59)
		return ("Good evening!");
	else
		return ("Uncorrect time!");
	
}
