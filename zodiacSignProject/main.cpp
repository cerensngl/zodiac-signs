#include <iostream>
#include <string>
using namespace std;

//Creating function for holding zodiac signs and explanations
void zodiacSign(int date,string month) {
    
    //Created if statement where it decides what the user's sign is
    if(month=="january" || month=="January"){
        if (date>=20) {
            cout<<date<<" January is Aquarius.";
            cout << "\nYou are also an Air sign.";
            //Personal traits about sign
            cout<<"\nInnovative,progressive and shamelessly revolutionary.";
        }
        else if(date<20){
            cout<<date<<" January is Capricorn.";
            cout << "\nYou are also an Earth sign.";
            //Personal traits about sign
            cout<<"\nOverachivers,persistent,practical and sensitive.";
        }}
    else if(month=="february" || month=="February"){
        if (date<=18) {
            cout<<date<<" February is Capricorn.";
            cout << "\nYou are also an Earth sign.";
            //Personal traits about sign
            cout<<"\nOverachivers,persistent,practical and sensitive.";
        }
        else{
            cout<<date<<" February is Pisces.";
            cout << "\nYou are also a Water sign.";
            //Personal traits about sign
            cout<<"\nHighly creative,imaginative,compassionate and loving.";
        }}
    else if(month=="march" || month=="March"){
        if (date<=20) {
            cout<<date<<" March is Pisces.";
            cout << "\nYou are also a Water sign.";
            //Personal traits about sign
            cout<<"\nHighly creative,imaginative,compassionate and loving.";
        }
        else{
            cout<<date<<" March is Aries.";
            cout << "\nYou are also a Fire sign.";
            //Personal traits about sign
            cout<<"\nBold,energetic,full of vitality,charismatic,fun,lively,passionate and driven by their hearts and desires.";
        }}
    else if(month=="april" || month=="April"){
        if (date<=20) {
            cout<<date<<" April is Aries.";
            cout << "\nYou are also a Fire sign.";
            //Personal traits about sign
            cout<<"\nBold,energetic,full of vitality,charismatic,fun,lively,passionate and driven by their hearts and desires.";
        }
        else{
            cout<<date<<" April is Taurus.";
            cout << "\nYou are also an Earth sign.";
            //Personal traits about sign
            cout<<"\nBeing hard-headed,down-to-earth,tenacious,reliable,loyal and sensual.";
        }}
    else if(month=="may" || month=="May"){
        if (date<=20) {
            cout<<date<<" May is Taurus.";
            cout << "\nYou are also an Earth sign";
            //Personal traits about sign
            cout<<"\nBeing hard-headed,down-to-earth,tenacious,reliable,loyal and sensual.";
        }
        else{
            cout<<date<<" May is Gemini.";
            cout << "\nYou are also an Air sign.";
            //Personal traits about sign
            cout<<"\nPlayful,intellectually and juggling a variety of passions,hobbies,careers and friend groups.";
        }}
    else if(month=="june" || month=="June"){
        if (date<=21) {
            cout<<date<<" June is Gemini.";
            cout << "\nYou are also an Air sign.";
            //Personal traits about sign
            cout<<"\nPlayful,intellectually and juggling a variety of passions,hobbies,careers and friend groups.";
        }
        else{
            cout<<date<<" June is Cancer.";
            cout << "\nYou are also a Water sign.";
            //Personal traits about sign
            cout<<"\nNurting,loyal and protective of their loved ones.";
        }}
    else if(month=="july" || month=="July"){
        if (date<=22) {
            cout<<date<<" July is Cancer.";
            cout << "\nYou are also a Water sign.";
            //Personal traits about sign
            cout<<"\nNurting,loyal and protective of their loved ones.";
        }
        else{
            cout<<date<<" July is Leo.";
            cout << "\nYou are also a Fire sign.";
            //Personal traits about sign
            cout<<"\nConfident,comfortable being the center of attention,drama-adoring,ambitious,loyal,fiercely protective of their nearest and dearest,generous,luxury-loving,sunny and big hearted.";
        }}
    else if(month=="august" || month=="August"){
        if (date<=22) {
            cout<<date<<" August is Leo.";
            cout << "\nYou are also a Fire sign.";
            //Personal traits about sign
            cout<<"\nConfident,comfortable being the center of attention,drama-adoring,ambitious,loyal,fiercely protective of their nearest and dearest,generous,luxury-loving,sunny and big hearted.";
        }
        else{
            cout<<date<<" August is Virgo.";
            cout << "\nYou are also an Earth sign.";
            //Personal traits about sign
            cout<<"\nHumble,self-effacing,industrious,practical,natural,kind,sympathetic and quick thinker.";
        }}
    else if(month=="september" || month=="September"){
        if (date<=22) {
            cout<<date<<" September is Virgo.";
            cout << "\nYou are also an Earth sign.";
            //Personal traits about sign
            cout<<"\nHumble,self-effacing,industrious,practical,natural,kind,sympathetic and quick thinker.";
        }
        else{
            cout<<date<<" September is Libra.";
            cout << "\nYou are also an Air sign.";
            //Personal traits about sign
            cout<<"\nExtremely agreeable,intelligent individual,well-balanced personality and honest.";
        }}
    else if(month=="october" || month== "October"){
        if (date<=23) {
            cout<<date<<" October is Libra.";
            cout << "\nYou are also an Air sign.";
            //Personal traits about sign
            cout<<"\nExtremely agreeable,intelligent individual,well-balanced personality and honest.";
        }
        else{
            cout<<date<<" October is Scorpio.";
            cout << "\nYou are also a Water sign.";
            //Personal traits about sign
            cout<<"\nLoyalty,passion,devotion and intense personality.";
        }}
    else if(month=="november" || month=="November"){
        if (date<=22) {
            cout<<date<<" November is Scorpio.";
            cout << "\nYou are also a Water sign.";
            //Personal traits about sign
            cout<<"\nLoyalty,passion,devotion and intense personality.";
        }
        else{
            cout<<date<<" November is Sagittarius.";
            cout << "\nYou are also a Fire sign.";
            //Personal traits about sign
            cout<<"\nLoyal,smart,assertive,compassionate and talented.";
        }}
    else if(month=="december" || month=="December"){
        if (date<=21) {
            cout<<date<<" December is Sagittarius.";
            cout << "\nYou are also a Fire sign.";
            //Personal traits about sign
            cout<<"\nLoyal,smart,assertive,compassionate and talented.";
        }
        else{
            cout<<date<<" December is Aquarius.";
            cout << "\nYou are also an Air sign.";
            //Personal traits about sign
            cout<<"\nInnovative,progressive and shamelessly revolutionary.";
        }}
    
    }

//Creating function for holding user's chinese signs
void chineseSign(int year,int i)
{
    //Created switch case statemnt to decide user's chinese signs
    switch(i)
    {
        case 1:
            cout << "You are a Rooster" << endl;
            break;
        case 2:
            cout << "You are a Dog" << endl;
            break;
        case 3:
            cout << "You are a Pig" << endl;
            break;
        case 4:
            cout << "You are a Rat" << endl;
            break;
        case 5:
            cout << "You are an Ox" << endl;
            break;
        case 6:
            cout << "You are a Tiger" << endl;
            break;
        case 7:
            cout << "You are a Rabbit" << endl;
            break;
        case 8:
            cout << "You are a Dragon" << endl;
            break;
        case 9:
            cout << "You are a Snake" << endl;
            break;
        case 10:
            cout << "You are a Horse" << endl;
            break;
        case 11:
            cout << "You are a Sheep" << endl;
            break;
        case 0:
            cout << "You are a Monkey" << endl;
            break;
        default:
            
    }
}
//Main function
int main(){
    //Declaring variables
    int date,choice;
    string month;
    int year,i;
    
    //Getting inputs from user
    cout<<"Enter your birth month: ";
    cin>>month;
    
    cout<<"Enter your birth date: ";
    cin>>date;
    //Calling function zodiacSign()
    zodiacSign(date,month);
    
    cout<< "\n\n\nDo you also wanna know what your chinese sign is?" << endl;
    //Getting answer as input from user for chinese sign
    cout << "Enter 1 for YES, 2 to exit\n";
    cin >> choice;
    
    //Creating statement if the user want to know about their chinese sign
    if(choice==1){
        cout<< "Please enter the year of ur birtday: ";
        cin >> year;
        i = year % 12;
    }
    else{
        cout<<"Thanks for your attention <3"<<endl;
    }
    //Calling function chineseSign
    chineseSign(year,i);
    
    return 0;
}
    

