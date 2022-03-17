/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleveque <pleveque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 14:52:17 by pleveque          #+#    #+#             */
/*   Updated: 2022/03/17 22:27:09 by pleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Animal {

	private:
		std::string color;

	protected:
		std::string type;

	public:
		void eat() {
			std::cout << "I can eat!" << std::endl;
		}

		void sleep() {
			std::cout << "I can sleep!" << std::endl;
		}

		void setColor (std::string clr) {
			color = clr;
		}

		std::string getColor() {
			return (color);
		}
};

class Dog : public Animal {

	public:
		void setType(std::string tp) {
			type = tp;
		}

		void displayInfo(std::string c) {
			std::cout << "I am a " << type << std::endl;
			std::cout << "My color is " << c << std::endl;
		}

		void bark() {
			std::cout << "I can bark! Woof Wooff!!" << std::endl;
		}
};

int	main(void) {
	Dog dog1;

	dog1.eat();
	dog1.sleep();
	dog1.setColor("black");

	dog1.bark();
	dog1.setType("mammal");

	dog1.displayInfo(dog1.getColor());

	return (0);
}