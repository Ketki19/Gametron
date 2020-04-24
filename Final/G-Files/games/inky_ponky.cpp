#include<iostream>
#include<cstdlib>
#include<time.h>
#include "games.h"
#include "termcolor/termcolor.hpp"

using namespace std;
using namespace Inky_ponky;

void c_inky_ponky::ch_color()
	{
		cout<<"Choose a number for color from: \n " << termcolor::red << " 1. Red\n"<< termcolor::reset
		<< termcolor::green << " 2. Green\n" << termcolor::reset
        << termcolor::blue << " 3. Blue\n" << termcolor::reset
		<< termcolor::yellow << " 4. Yellow\n"<< termcolor::reset
		<< termcolor::magenta <<  " 5. Magenta \n" << termcolor::reset;
		cin>>color;
		srand(time(NULL));

		switch(color)
		{
			case 1:
				{
					cout<<"You chose " << termcolor::red << "Red"<< termcolor::reset <<endl;
					secret_num = rand()%10 + 1;
					cout<<"Your lucky number is: "<<secret_num<<endl;
					break;
				}


			case 2:
				{
					cout<<"You chose " << termcolor::green << "Green"<< termcolor::reset <<endl;
					secret_num = rand()%10 + 1;
					cout<<"Your lucky number is: "<<secret_num<<endl;
					break;
				}


			case 3:
				{
					cout<<"You chose " << termcolor::blue << "Blue"<< termcolor::reset <<endl;
					secret_num = rand()%10 + 1;
					cout<<"Your lucky number is: "<<secret_num<<endl;
					break;
				}


			case 4:
				{
					cout<<"You chose " << termcolor::yellow << "Yellow" << termcolor::reset<<endl;
					secret_num = rand()%10 + 1;
					cout<<"Your lucky number is: "<<secret_num<<endl;
					break;
				}


			case 5:
				{
					cout<<"You chose " << termcolor::red << "Magenta"<< termcolor::reset <<endl;
					secret_num = rand()%10 + 1;
					cout<<"Your lucky number is: "<<secret_num<<endl;
					break;
				}


			default:
			{
				cout<<"Invalid choice. Choose something between 1-5. "<<endl;
				ch_color();
				break;
			}
		}
	}

void c_inky_ponky::number()
	{
		if(secret_num == 1 || secret_num ==2)
			{
				cout<<"Choose 1 or 2"<<endl;
				cin>>num;
				switch(num)
				{
					case 1:
					cout<<"Although you might be busy but you will have to spare time for others too. You will need to be active throughout the day. You are going to love and enjoy every minute of it."<<endl;
					break;

					case 2:
					cout<<"Your positive outlook will help you take positive actions in various situations. This will render you with long term benefits. You need to be cool if someone tries to indulge into altercations."<<endl;
					break;

					default:
					{
						cout<<"Invalid choice."<<endl;
						break;
					}
				}

			}

		else if(secret_num == 3 || secret_num == 4)
			{
				cout<<"Choose 1 or 2"<<endl;
				cin>>num;
				switch(num)
				{
					case 1:
					cout<<"You need to be humble to endear yourself to your friends. It is a rare opportunity of introspection for you and you should take full advantage of this. It will reflect good mood."<<endl;
					break;

					case 2:
					cout<<"You may be provided with limited resources which will prevent you from giving a shape to your ideas. Do not get anxious as you will get a chance to do the work of your choice by the end of the day!"<<endl;
					break;

					default:
					{
						cout<<"Invalid choice."<<endl;
						break;
					}
				}
			}

		else if(secret_num == 5 || secret_num == 6)
		{
			cout<<"Choose 1 or 2"<<endl;
			cin>>num;
				switch(num)
				{
					case 1:
					cout<<"You should devote your time and energy in educating the underpriviledged children. You will get along nicely with new acquaintances and will be popular among them for your good deeds."<<endl;
					break;

					case 2:
					cout<<"Life has been monotonous and lackluster over a long period of time. Try to spice up your life with little adventure. Seperate yourself from social and personal involvements for sometime to accomplish certain goals needing your full attention."<<endl;
					break;

					default:
					{
						cout<<"Invalid choice."<<endl;
						break;
					}
				}
		}

		else if(secret_num == 7 || secret_num == 8)
		{
			cout<<"Choose 1 or 2"<<endl;
			cin>>num;
				switch(num)
				{
					case 1:
					cout<<"You are planning to go higher in your life. Many prestigious offer are awaiting you. Just be careful while making preliminary arrangements and gathering information. Someone is trying to take advantage of you as well."<<endl;
					break;

					case 2:
					cout<<"You will be tackling a number of diverse commitmnets from all fronts. Be ready to fulfil your social, financial and personal and personal obligations. You are more capable of handling the pressure than you think."<<endl;
					break;

					default:
					{
						cout<<"Invalid choice."<<endl;
						break;
					}
				}
		}


		else if(secret_num == 9)
		{
			cout<<"Choose 1 or 2"<<endl;
			cin>>num;
				switch(num)
				{
					case 1:
					cout<<"Try to be away from peoplewho bring negativity in your life. Be careful of the people that spread a bad word about you. You are gonna find a true friend near you, soon."<<endl;
					break;

					case 2:
					cout<<"Your competitors may try to weigh you down. But you will be able to cream them up easily! And they will be left with no option except to praise you for your mouthful achievements. Meet your best pals in order to inject some levity into the grim situation."<< endl;
					break;

					default:
					{
						cout<<"Invalid choice."<<endl;
						break;
					}
				}
		}

		else if(secret_num == 0)
		{
			cout<<"Choose 1 or 2"<<endl;
			cin>>num;
				switch(num)
				{
					case 1:
					cout<<"Prepare for some good news, especially regarding the thing your were awaiting. Take advantage of positive energies. If you have been considering a renovation, this is  the best time to get the project off the ground."<<endl;
					break;

					case 2:
					cout<<"You have set too high a standard for yourself and you will drive yourself harder to achieve this. It will be difficult to reach your goal and this can lead to sense of disappointment. You need to realize your own capabilities before you set your goals."<<endl;
					break;

					default:
					{
						cout<<"Invalid choice."<<endl;
						break;
					}
				}
		}

		else
		{
			cout<<"Invalid choice."<<endl;
		}
	}

