//my name:جابر عبدالله اسماعيل ادم
//class: حاسوب المستوى الثانى
//department: حاسوب
#include<iostream>  //تعنى استدعاء المكتبة التى تتضمن دوال الادخال والاخراج
using namespace std  ;  // واحدnamespaceموجوده فى  cinو coutتعنى ان ملفات 
int main ()  {      //عبارة عن دالة يتم كتابة الامور داخلها
	char department;  //وتعنى ان المتغير عباره عن حرف charنوعها departmentهنا قمت بتعريف متغير تحت اسم 
	int degree,number ;  //وتعنى ان المتغير رقم صحيح intونوعهماdegreeو nuber هنا قمت بتعريف متغيرين تحت اسمين هما  
	string name ,good;  //وتعنى ان المتغير نص كلمه او جملهstring ونوعهاnameهنا قمت بتعريف متغير تحت اسم
	do
	{
		std::cout << "enter your name\n";//   ""امر لطباعة النص الموجود داخل  
		std::cin >> name; //امر لادخال المتغير والذي تم تعريف نوعها سابقا وهو عباره عن اسم
		std::cout << "enter your number\n";// امر يظهر لمستخدم علي الشاشه ومن خلاله يعرف ان عليه ادخال رقمه 
		std::cin >> number;  // امر بادخال رقمه وقد  تم تعريف المتغر الرقم سابقا 
		std::cout << "enter your department\n";//امر يظهر لمستخدم على الشاشه ومن خلاله يعرف ان عليه ادخال قسمه 
		std::cin >> department;//امر بادخال القسم وقد تم تعريف المتغير قسم سابقا
		std::cout << "enter your grad\n";//امريظهر لمستخدم علي الشاشة ومن خلاله يعرف ان عليه ادخال درجته
		std::cin >> degree;//امر بادخال درجته وقد تم تعريف المتغير درجه سابقا
		system("clos");
		if (department == 'T')// A هذا هو موضع الشرط الاول وتعنى اذا ادخل المستخدم في مكان قسمه 
		{
			std::cout << "you are study communication" << endl;
		}//قل له انك تدرس في قسم الاتصالات
		else if (department == 'A')
		{
			std::cout << "you are study= control" << endl;
		}//قل له انك تدرس تحكم Tالشرط الثانى تعنى اذا ادخل فى مكان قسمه حرف 
		else if (department == 'C')
		{
			cout << "you are study = computer" << endl;
		}
		//هذه الجزء خاص بالدرجات
		if ((degree >= 90) && (degree) <= 100)
		{
			cout << "your rating is=A" << endl;
		}//A اذا كان نسبته اقل من او تساوى100اواكبر من اوتساوى90  قل له ان تقديره هو 
		else if ((degree >= 80) && (degree) <= 90)
		{
			cout << "your rating is=B" << endl;
		}//Bالشرط الثانى اذا كان نسبته اقل من اوتساوى 90اواكبر من او تساوى80 قل له ان تقديره هو 
		else if ((degree >= 70) && (degree) <= 80)
		{
			cout << "your rating is=C" << endl;
		}//C الشرط الثالث اذا كان نسبته اقل من او تساوى80 اواكبرمن اوتساوى 70له ان تقديره هو 
		else if ((degree >= 60) && (degree) <= 70)
		{
			cout << "your rating is=D" << endl;
		}//Dالشرط الرابع اذا كان نسبته اقل من اوتساوي 70 او اكبرمن اوتساوى 60 قل له ان تقديره هو 
		else if ((degree >= 50) && (degree) <= 60)
		{
			cout << "your rating is=F" << endl;
		} //Fالشرط الخامس اذا كان نسبته اقل من او تساوى 60او اكبرمن او تساوى 50 قل له ان تقديره هو 
		else { std::cout << "wrong"; }//خلاله ذلك قل خطا

		cout << "name:" << name << endl;
		cout << "numbe:r" << number << endl;
		cout << "department:" << department << endl;
		cout << "degree" << degree << endl;
		cout << "enter any thing to continue" << endl;
		system("pause");
	} while ( good!= "exit");

	return 0; //تعنى الخروج من البرنامج
	//endlتعنى  ان كل سطر قائم بذاته
	//\n تعنى سطر جديد او خط جديد

}